#include "SnakeElement.h"


SnakeElement::SnakeElement()
	: CharObject ( 'O', 0, 0 )
{

}

SnakeElement::SnakeElement( char character, float xPos, float yPos, int colour )
	: CharObject ( character, xPos, yPos, colour )
{

}

SnakeElement::~SnakeElement()
{

}