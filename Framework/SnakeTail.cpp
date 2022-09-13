#include "SnakeElement.h"
#include "SnakeTail.h"


SnakeTail::SnakeTail()
	: m_pSegments	( nullptr ) 
	, m_tailLength	( 10 )
	, m_growSize	( 5 )
{
	// Makes array of snakeElements that is 2000 elements big
	m_pSegments = new SnakeElement[ 2000 ];

	for ( int i = 0; i < 2000; i++ )
	{
		// Sets positions of all the snake tails
		m_pSegments[ i ].setPos( 40, static_cast<float>(40 + i) );
	}
}

SnakeTail::SnakeTail( char character, float xPos, float yPos, int growSize, int tailLength, int maxLength,
					  int colour )
	: m_pSegments	( nullptr )
	, m_tailLength  ( tailLength )
	, m_growSize	( growSize )
{
	// Makes array of snakeElements that is maxLength elements big
	m_pSegments = new SnakeElement[ maxLength ];

	for ( int i = 0; i < maxLength; i++ )
	{
		// Sets vaules of all the snake tails
		m_pSegments[ i ].setChar( character );
		m_pSegments[ i ].setPos( xPos, yPos + i );
		m_pSegments[ i ].setColour( colour );
	}
}

SnakeTail::~SnakeTail()
{
	// If the array contains something
	if ( m_pSegments != nullptr )
	{
		// Make array a nullptr and delete
		m_pSegments = nullptr;
		delete [] m_pSegments;
	}
}

void SnakeTail::setTailLength( int length )
{
	m_tailLength = length;
}

const int SnakeTail::getTailLength() const
{
	return m_tailLength;
}

const Vector2& SnakeTail::getTailSegmentPos( int index ) const
{
	// return the position of the tail segment at the given index
	return m_pSegments[ index ].getPos();
}

void SnakeTail::update( const Vector2& headPos )
{
	// vector to hold the position of the current segment
	Vector2 currentTail;

	// vector to hold the previous segment's position
	// hold's the 1st segment's positon first
	Vector2 prevTail = m_pSegments[ 0 ].getPos();

	//set the position of the 1st tail to be the head's pos
	m_pSegments[ 0 ].setPos( headPos );

	//Updates more tail segments than drawn so when the snake grows the tail pieces appear automatically
	//on the end of the tail rather than teleporting
	for( int i = 1; i < m_tailLength + m_growSize; i++ )
	{
		//Save the current tail position
		currentTail = m_pSegments[ i ].getPos();

		//Set the current tail's position to the previous tail's pos
		m_pSegments[ i ].setPos( prevTail );

		//Set the previous tail pos to the current tail pos
		prevTail = currentTail;
	}
}

void SnakeTail::render() const
{
	// Loop through segements and render them
	for( int i = 0; i < m_tailLength; i++ )
	{
		m_pSegments[ i ].render();
	}
}

void SnakeTail::unrender() const
{
	// Loop through segements and unrender them
	for( int i = 0; i < m_tailLength; i++ )
	{
		m_pSegments[ i ].unrender();
	}
}


void SnakeTail::growSnake()
{
	m_tailLength += m_growSize;
}

void SnakeTail::reset( const Vector2& headPos)
{
	// Loop through segements and reset their position to below the head
	for( int i = 0; i < m_tailLength; i++ )
	{
		m_pSegments[ i ].setPos( headPos.x, headPos.y + i );
	}
}
