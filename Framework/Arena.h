#ifndef ARENA_H
#define ARENA_H

#include "CharObject.h"
#include "Settings.h"
#include "Vector2.h"

//#######################################################
//	class		:	Arena
//	Purpose		:	Makes outer grid for game area
//	Usage		:	Made in Game
//	Functions	:	Arena();
//					Arena( char character, float topLeftX, float topLeftY, float bottomRightX, float bottomRightY,
//						   int colour = Settings::k_white );
//					~Arena();
//					void setTopLeft( float x, float y );
//					const Vector2& getTopLeft() const;
//					void setBottomRight( float x, float y );
//					const Vector2& getBottomRight() const;
// 					const int getArraySize() const;
//					const Vector2& getWallPos( int index ) const;
//					void makeArena();
//					void render() const;
//					
//	See also	:	
//#######################################################
class Arena
{
private:
	char		m_char;			// Character for walls
	Vector2		m_topLeft;		// Top left position of arena
	Vector2		m_bottomRight;	// Bottom right position of arena
	CharObject* m_pWalls;		// Array of char objects
	int			m_arraySize;	// Size of m_pWalls array

public:

	//#######################################################
	//	Function	:	Arena 
	//	Purpose		:	Arena constructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	Arena();

	//#######################################################
	//	Function	:	Arena 
	//	Purpose		:	Arena constructor
	//	Parameters	:	char character
	//					float topLeftX
	//					float topLeftY
	//					float bottomRightX
	//					float bottomRightY
	//					int colour = Settings::k_white
	// 
	//	Returns		:	void
	//	Notes		:	Overloaded constuctor
	//	See also	:	
	//#######################################################
	Arena( char character, float topLeftX, float topLeftY, float bottomRightX, float bottomRightY,
		   int colour = Settings::k_white );

	//#######################################################
	//	Function	:	~Arena 
	//	Purpose		:	Arena destructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	~Arena();

	//#######################################################
	//	Function	:	setTopLeft 
	//	Purpose		:	sets the top left vector
	//	Parameters	:	float x
	//					float y
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void setTopLeft( float x, float y );

	//#######################################################
	//	Function	:	getTopLeft 
	//	Purpose		:	gets the top left vector
	//	Parameters	:	None
	//	Returns		:	const Vector2& topLeft
	//	Notes		:	const
	//	See also	:	
	//#######################################################
	const Vector2& getTopLeft() const;

	//#######################################################
	//	Function	:	setBottomRight 
	//	Purpose		:	sets the bottom right vector
	//	Parameters	:	float x
	//					float y
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void setBottomRight( float x, float y );

	//#######################################################
	//	Function	:	getBottomRight 
	//	Purpose		:	gets the bottom right vector
	//	Parameters	:	None
	//	Returns		:	const Vector2& bottomRight
	//	Notes		:	const 
	//	See also	:	
	//#######################################################
	const Vector2& getBottomRight() const;

	//#######################################################
	//	Function	:	getArraySize 
	//	Purpose		:	gets the array size
	//	Parameters	:	None
	//	Returns		:	const int array size
	//	Notes		:	const 
	//	See also	:	
	//#######################################################
	const int getArraySize() const;

	//#######################################################
	//	Function	:	getWallPos 
	//	Purpose		:	gets the position of the wall at index
	//	Parameters	:	int index
	//	Returns		:	const Vector2& pos
	//	Notes		:	const 
	//	See also	:	
	//#######################################################
	const Vector2& getWallPos( int index ) const;

	//#######################################################
	//	Function	:	makeArena 
	//	Purpose		:	sets positions of the walls
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void makeArena();

	//#######################################################
	//	Function	:	render 
	//	Purpose		:	Renders the arena
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	const
	//	See also	:	
	//#######################################################
	void render() const;
};

#endif // !ARENA_H
