#ifndef SNAKEHEAD_H
#define SNAKEHEAD_H

#include "Direction.h"
#include "Settings.h"
#include "SnakeElement.h"
#include "Vector2.h"

//#######################################################
//	class		:	SnakeHead
//	Purpose		:	Snake head that  moves using inputs
//	Usage		:	Made in snake class
//	Functions	:	SnakeHead();
//					SnakeHead( char character, float xPos, float yPos, float xDirection, float yDirection,
//							   int colour = Settings::k_white );
//					~SnakeHead();
//					void setDirection( float x, float y );
//					const Vector2& getDirection() const;
//					void move( float deltaTime, Direction& direction );
//					void update( float deltaTime, Direction& direction );
//					
//	See also	:	SnakeElement, Snake
//#######################################################
class SnakeHead: public SnakeElement
{
private:
	Vector2	m_direction; // Direction to move the snake in
	float	m_speed;	 // How fast the snake moves

public:
	//#######################################################
	//	Function	:	SnakeHead 
	//	Purpose		:	SnakeHead constructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	SnakeHead();

	//#######################################################
	//	Function	:	SnakeHead 
	//	Purpose		:	SnakeHead constructor
	//	Parameters	:	char character
	//					float xPos
	//					float yPos
	//					int xDirection
	//					int yDirection
	//					int colour = Settings::k_white
	// 
	//	Returns		:	void
	//	Notes		:	Overloaded constuctor
	//	See also	:	
	//#######################################################
	SnakeHead( char character, float xPos, float yPos, float xDirection, float yDirection,
			   int colour = Settings::k_white );

	//#######################################################
	//	Function	:	~SnakeHead 
	//	Purpose		:	SnakeHead destructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	~SnakeHead();

	//#######################################################
	//	Function	:	setDirection 
	//	Purpose		:	sets the direction vector
	//	Parameters	:	float x
	//					float y
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void setDirection( float x, float y );

	//#######################################################
	//	Function	:	getDirection 
	//	Purpose		:	gets the direction vector
	//	Parameters	:	None
	//	Returns		:	const Vector2& direction
	//	Notes		:	const
	//	See also	:	
	//#######################################################
	const Vector2& getDirection() const;

	//#######################################################
	//	Function	:	move 
	//	Purpose		:	Changes direction depending on input
	//	Parameters	:	float deltaTime
	//					Direction& direction
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void move( float deltaTime, Direction& direction );

	//#######################################################
	//	Function	:	update 
	//	Purpose		:	Updates snake head
	//	Parameters	:	float deltaTime
	//					Direction& direction
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void update( float deltaTime, Direction& direction );
};

#endif // !SNAKEHEAD_H
