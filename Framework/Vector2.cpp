#include "Vector2.h"
#include "Helpers.h"


Vector2::Vector2()
	: x	( 0 )
	, y	( 0 )
{
}

Vector2::Vector2( float newX, float newY )
{
	x = newX;
	y = newY;
}

Vector2::~Vector2()
{

}

const bool Vector2::operator==( const Vector2& other ) const
{
	// Checks if the x and y of both vectors are equal within a tolerance 
	return ( Math::floatsEqual( x, other.x ) ) && ( Math::floatsEqual( y, other.y ) );
}

const bool Vector2::operator!=( const Vector2& other ) const
{	
	// Checks if the x and y of both vectors are equal within a tolerance 
	return !( Math::floatsEqual( x, other.x ) ) || !( Math::floatsEqual( y, other.y ) );
}
