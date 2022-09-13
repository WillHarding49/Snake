#ifndef SNAKETAIL_H
#define SNAKETAIL_H

#include "SnakeElement.h"

//#######################################################
//	class		:	SnakeTail
//	Purpose		:	Contains array of SnakeElements to make snake's tail
//	Usage		:	Made in snake class
//	Functions	:	SnakeTail();
//					SnakeTail( char character, float xPos, float yPos, int growSize, int tailLength, int maxLength,
//							   int colour = Settings::k_white );
//					~SnakeTail();
//					void setTailLength( int length );
//					const int getTailLength() const;
//					const Vector2& getTailSegmentPos( int index ) const;
//					void update( const Vector2& headPos );
//					void render();
//					void unrender() const;
//					void growSnake();
//					void reset( const Vector2& headPos );
//					
//	See also	:	SnakeElement, Snake
//#######################################################
class SnakeTail
{
private:
	SnakeElement*	m_pSegments;	// Pointer Array of SnakeElements
	int				m_tailLength;	// How many tail segments the snake has
	int				m_growSize;		// The number of segments to add when growing

public:
	//#######################################################
	//	Function	:	SnakeTail 
	//	Purpose		:	SnakeTail constructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	SnakeTail();

	//#######################################################
	//	Function	:	SnakeTail 
	//	Purpose		:	SnakeTail constructor
	//	Parameters	:	char character
	//					float xPos
	//					float yPos
	//					int growSize
	//					int tailLength
	//					int maxLength
	//					int colour = Settings::k_white
	// 
	//	Returns		:	void
	//	Notes		:	Overloaded constuctor
	//	See also	:	
	//#######################################################
	SnakeTail( char character, float xPos, float yPos, int growSize, int tailLength, int maxLength,
			   int colour = Settings::k_white );

	//#######################################################
	//	Function	:	~SnakeTail 
	//	Purpose		:	SnakeTail destructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	~SnakeTail();

	//#######################################################
	//	Function	:	setTailLength 
	//  Purpose		:	returns the length of the tail
	//	Parameters	:	int length
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void setTailLength( int length );

	//#######################################################
	//	Function	:	getTailLength 
	//	Purpose		:	gets the length of the tail
	//	Parameters	:	None
	//	Returns		:	const int tail length
	//	Notes		:	const
	//	See also	:	
	//#######################################################
	const int getTailLength() const;

	//#######################################################
	//	Function	:	getTailSegmentPos
	//	Purpose		:	gets the position of a tail segment 
	//					at the given index
	//	Parameters	:	int index
	//	Returns		:	const Vector2& tail segment position
	//	Notes		:	const
	//	See also	:	
	//#######################################################
	const Vector2& getTailSegmentPos( int index ) const;

	//#######################################################
	//	Function	:	update 
	//	Purpose		:	Updates the positions of the tails
	//	Parameters	:	const Vector2& headPos 
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void update( const Vector2& headPos );

	//#######################################################
	//	Function	:	render 
	//	Purpose		:	Renders the tails
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	const
	//	See also	:	
	//#######################################################
	void render() const;

	//#######################################################
	//	Function	:	unrender 
	//	Purpose		:	Unrenders the tails
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	const
	//	See also	:	
	//#######################################################
	void unrender() const;

	//#######################################################
	//	Function	:	growSnake 
	//	Purpose		:	Grows snake
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void growSnake();

	//#######################################################
	//	Function	:	reset 
	//	Purpose		:	resets snake tail values to default
	//	Parameters	:	const Vector2& headPos
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void reset( const Vector2& headPos );
};

#endif // !SNAKETAIL_H