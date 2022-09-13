#include "Arena.h"
#include "Vector2.h"
#include "Helpers.h"

Arena::Arena()
	: m_char		( '#' )
	, m_topLeft		( 0, 0 )
	, m_bottomRight	( 100, 30 )
	, m_pWalls		(nullptr)
	, m_arraySize	( static_cast<int>( ( m_bottomRight.x - m_topLeft.x ) + ( m_bottomRight.y - m_topLeft.y ) ) * 2 )
{
	// Makes array of CharObjects that is the number of walls needed
	m_pWalls = new CharObject[ m_arraySize ];

	for ( int i = 0; i < m_arraySize; i++ )
	{
		// Sets chars of all the walls
		m_pWalls[ i ].setChar( m_char );
	}
}

Arena::Arena( char character, float topLeftX, float topLeftY, float bottomRightX, float bottomRightY, int colour )
	: m_char		( character )
	, m_topLeft		( topLeftX, topLeftY )
	, m_bottomRight	( bottomRightX, bottomRightY )
	, m_pWalls		( nullptr )
	, m_arraySize	( static_cast< int >( ( m_bottomRight.x - m_topLeft.x ) + ( m_bottomRight.y - m_topLeft.y ) ) * 2 )
{
	// Makes array of CharObjects that is the number of walls needed
	m_pWalls = new CharObject[ m_arraySize ];

	for ( int i = 0; i < m_arraySize; i++ )
	{
		// Sets chars and colours of all the walls
		m_pWalls[ i ].setChar( m_char );
		m_pWalls[ i ].setColour( colour );
	}

	//Make arena
	makeArena();
}

Arena::~Arena()
{

}

void Arena::setTopLeft( float x, float y )
{
	m_topLeft = Vector2( x, y );
}

const Vector2& Arena::getTopLeft() const
{
	return m_topLeft;
}

void Arena::setBottomRight( float x, float y )
{
	m_bottomRight = Vector2( x, y );
}

const Vector2& Arena::getBottomRight() const
{
	return m_bottomRight;
}

const int Arena::getArraySize() const
{
	return m_arraySize;
}

const Vector2& Arena::getWallPos( int index ) const
{
	// return the position of the wall at the given index
	return m_pWalls[ index ].getPos();
}

void Arena::makeArena()
{
	// int for index of m_pWalls array
	int i = 0;

	// Loop for the amount of spaces within the array
	for( float row = m_topLeft.x; row <= m_bottomRight.x; row++ )
	{
		for( float column = m_topLeft.y; column <= m_bottomRight.y; column++ )
		{
			//If at the left or right wall of the arena
			if( column == m_topLeft.y || column == m_bottomRight.y )
			{
				//Set wall position
				m_pWalls[ i ].setPos( row, column );
				i++;
			}

			//If at the top or bottom wall of the arena
			else if( row == m_topLeft.x || row == m_bottomRight.x )
			{
				//Set wall position
				m_pWalls[ i ].setPos( row, column );
				i++;
			}

			//else
			//{
			//	Rendering::drawChar( ' ', row, column );
			//}
		}
	}
}

void Arena::render() const
{
	// Render all walls in array
	for( int i = 0; i < m_arraySize; i++ )
	{
		m_pWalls[ i ].render();
	}
}
