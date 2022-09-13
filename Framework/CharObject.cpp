#include "CharObject.h"
#include "Helpers.h"


CharObject::CharObject()
	: m_char	('A')
	, m_pos		( 0, 0 )
	, m_colour  ( 15 )
{

}

CharObject::CharObject( char character, float x, float y, int colour )
	: m_char	(character)
	, m_pos		(x, y)
	, m_colour  (colour)
{
}

CharObject::~CharObject()
{

}

void CharObject::setChar( char character )
{
	m_char = character;
}

const char& CharObject::getChar() const
{
	return m_char;
}

void CharObject::setPos( float x, float y )
{
	m_pos.x = x;
	m_pos.y = y;
}

void CharObject::setPos( const Vector2& vector )
{
	m_pos = vector;
}

const Vector2& CharObject::getPos() const
{
	return m_pos;
}

void CharObject::setColour( int colour )
{
	m_colour = colour;
}

const int CharObject::getColour() const
{
	return m_colour;
}

void CharObject::render() const
{
	//Cast floats to int and draw char at position
	int x = static_cast< int >( m_pos.x + 0.5f );
	int y = static_cast< int >( m_pos.y + 0.5f );
	Rendering::drawChar( m_char, x, y, m_colour );
}

void CharObject::unrender() const
{
	//Cast floats to int and draw a space at position
	int x = static_cast< int >( m_pos.x + 0.5f );
	int y = static_cast< int >( m_pos.y + 0.5f );
	Rendering::drawChar( ' ', x, y, m_colour );
}

