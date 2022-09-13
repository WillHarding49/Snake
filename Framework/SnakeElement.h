#ifndef SNAKEELEMENT_H
#define SNAKEELEMENT_H

#include "CharObject.h"
#include "Settings.h"


//#######################################################
//	class		:	SnakeElement
//	Purpose		:	Parent object for snake pieces
//	Usage		:	Inherited from SnakeHead and used in SnakeTail
//	Functions	:	SnakeElement();
//					SnakeElement( char character, float xPos, float yPos, int colour = Settings::k_white );
//					~SnakeElement();
//					virtual void update();
//					
//	See also	:	CharObject
//#######################################################
class SnakeElement : public CharObject
{
private:

public:
	//#######################################################
	//	Function	:	SnakeElement 
	//	Purpose		:	SnakeElement constructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	SnakeElement();

	//#######################################################
	//	Function	:	SnakeElement 
	//	Purpose		:	SnakeElement constructor
	//	Parameters	:	char character
	//					float xPos
	//					float yPos
	//					int colour = Settings::k_white
	// 
	//	Returns		:	void
	//	Notes		:	Overloaded constuctor
	//	See also	:	
	//#######################################################
	SnakeElement( char character, float xPos, float yPos, int colour = Settings::k_white );

	//#######################################################
	//	Function	:	~SnakeElement 
	//	Purpose		:	SnakeElement destructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	~SnakeElement();

};

#endif // !SNAKE_H

