#include "Direction.h"
#include "SnakeHead.h"

SnakeHead::SnakeHead()
	: SnakeElement	()
	, m_speed		( 1.0f )
{
}

SnakeHead::SnakeHead( char character, float xPos, float yPos, float xDirection, float yDirection, int colour )
	: SnakeElement	( character, xPos, yPos, colour )
	, m_direction	( xDirection, yDirection )
	, m_speed		( Settings::k_snakeInitialSpeed )
{
}

SnakeHead::~SnakeHead()
{
}

void SnakeHead::setDirection( float x, float y )
{
	m_direction.x = x;
	m_direction.y = y;
}

const Vector2& SnakeHead::getDirection() const
{
	return m_direction;
}

void SnakeHead::move( float deltaTime, Direction& direction )
{
	// Switch on what direction is given and change the direction vector to that direction
	switch( direction )
	{
		case Direction::Up:
		{
			//Lower y values are higher up the screen
			//Stop moving on the x
			setDirection( 0, -m_speed );
		}
		break;

		case Direction::Right:
		{
			//Stop moving on the y
			//Move right
			setDirection( m_speed, 0 );
		}
		break;

		case Direction::Down:
		{
			//Higher y values are lower down the screen
			//Stop moving on the x
			setDirection( 0, m_speed );
		}
		break;

		case Direction::Left:
		{
			//Stop moving on the y
			//Move left
			setDirection( -m_speed, 0 );
		}
		break;

		default:
		{

		}
		break;
	}
	
	// Add the direction vector to the snake head's current position
	Vector2 newPos = getPos() + ( m_direction );// *deltaTime);
	setPos( newPos );
}

void SnakeHead::update( float deltaTime, Direction& direction )
{
	// Move snake head
	move( deltaTime, direction );
}
