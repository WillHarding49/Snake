#ifndef SNAKE_H
#define SNAKE_H

#include "SnakeHead.h"
#include "SnakeTail.h"


//#######################################################
//	class		:	Snake
//	Purpose		:	Object consistening of Snake Head and Tail classes
//	Usage		:	Updates the snake head and tails
//	Functions	:	Snake();
//					Snake( char head, char tail, float xPos, float yPos, int growSize, int numTails,
//						   int maxLength, int colour = Settings::k_white );
//					~Snake();
//					const Vector2& getHeadPos() const;
//					const SnakeTail& getTail() const;
//					const int getTailLength() const;
//					void update( float deltaTime, Direction& direction );
//					void render() const;
//					void unrender() const;
//					void growSnake();
//					void reset();
//					
//	See also	:	SnakeHead, SnakeTail
//#######################################################
class Snake
{
private:
	SnakeHead m_head; // snake head gameObject
	SnakeTail m_tail; // snake tail gameObject


public:
	//#######################################################
	//	Function	:	Snake 
	//	Purpose		:	Snake constructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	Snake();

	//#######################################################
	//	Function	:	Snake 
	//	Purpose		:	Snake constructor
	//	Parameters	:	char head
	//					char tail
	//					float xPos
	//					float yPos
	//					int growSize
	//					int numTails
	//					int maxLength
	//					int colour = Settings::k_white
	// 
	//	Returns		:	void
	//	Notes		:	Overloaded constuctor
	//	See also	:	
	//#######################################################
	Snake( char head, char tail, float xPos, float yPos, int growSize, int numTails,
		   int maxLength, int colour = Settings::k_white );

	//#######################################################
	//	Function	:	~Snake 
	//	Purpose		:	Snake destructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	~Snake();

	//#######################################################
	//	Function	:	getHeadPos 
	//	Purpose		:	Returns head position
	//	Parameters	:	None
	//	Returns		:	const Vector2& head pos
	//	Notes		:	const
	//	See also	:	
	//#######################################################
	const Vector2& getHeadPos() const;

	//#######################################################
	//	Function	:	getTail 
	//	Purpose		:	Returns tail
	//	Parameters	:	None
	//	Returns		:	const SnakeTail& tail
	//	Notes		:	const
	//	See also	:	
	//#######################################################
	const SnakeTail& getTail() const;

	//#######################################################
	//	Function	:	getTailLength 
	//	Purpose		:	Returns lenght of the tail
	//	Parameters	:	None
	//	Returns		:	const int tail length
	//	Notes		:	const
	//	See also	:	
	//#######################################################
	const int getTailLength() const;

	//#######################################################
	//	Function	:	update 
	//	Purpose		:	Updates the snake elements
	//	Parameters	:	float deltaTime
	//					Direction& direction
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void update( float deltaTime, Direction& direction );

	//#######################################################
	//	Function	:	render 
	//	Purpose		:	Renders the snake elements
	//	Parameters	:	none
	//	Returns		:	void
	//	Notes		:	const
	//	See also	:	
	//#######################################################
	void render() const;

	//#######################################################
	//	Function	:	unrender 
	//	Purpose		:	Unrenders the snake elements
	//	Parameters	:	none
	//	Returns		:	void
	//	Notes		:	const
	//	See also	:	
	//#######################################################
	void unrender() const;

	//#######################################################
	//	Function	:	growSnake 
	//	Purpose		:	makes snake grow by the specified amount
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void growSnake();

	//#######################################################
	//	Function	:	reset 
	//	Purpose		:	resets the snake to it's default state
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	SnakeHead reset(), SnakeTail reset()
	//#######################################################
	void reset();
};

#endif // !SNAKE_H