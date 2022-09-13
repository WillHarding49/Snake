#include "Snake.h"
#include "Settings.h"

Snake::Snake()
	: m_head		( 'O', 40, 40, 1, 0, 15 )
	, m_tail		( 'o', 40, 41, 5, 10, 2000, 15 )
{

}

Snake::Snake( char head, char tail, float xPos, float yPos, int growSize, int numTails, int maxLength, int colour )
	: m_head		( head, xPos, yPos, 1, 0, colour )
	, m_tail		( tail, xPos, yPos + 1, growSize, numTails, maxLength, colour )
{

}

Snake::~Snake()
{
	// calls head and tail deconstructors
	m_head.~SnakeHead();
	m_tail.~SnakeTail();
}

const Vector2& Snake::getHeadPos() const
{
	return m_head.getPos();
}

const SnakeTail& Snake::getTail() const
{
	return m_tail;
}

const int Snake::getTailLength() const
{
	// Gets the tail length from the tail
	return m_tail.getTailLength();
}

void Snake::update( float deltaTime, Direction& direction )
{
	//Head position saved so it can move first, then the tail
	//Stops the tail and head from overlapping
	Vector2 tempHeadPos = m_head.getPos();
	m_head.update( deltaTime, direction );
	m_tail.update( tempHeadPos );
}

void Snake::render() const
{
	// calls head and tail render functions
	m_head.render();
	m_tail.render();
}

void Snake::unrender() const
{
	// calls head and tail unrender functions
	m_head.unrender();
	m_tail.unrender();
}

void Snake::growSnake()
{
	// calls growSnake in the tail function to actully increase the tail size
	m_tail.growSnake();
}

void Snake::reset()
{
	// resets the head position to it's default
	m_head.setPos( Settings::k_snakeStartX, Settings::k_snakeStartY );
	
	// resets tail using head position
	m_tail.reset( m_head.getPos() );

	// reset tail length
	m_tail.setTailLength( Settings::k_initialTailLength );
}
