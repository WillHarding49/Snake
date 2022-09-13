#ifndef HELPERS_H
#define HELPERS_H
#pragma comment(lib, "winmm.lib")

// Windows must come before mmsystem.h because it needs it
#include <iostream>
#include <Windows.h>
#include <mmsystem.h>

#include "Vector2.h"

namespace Rendering
{
	//#######################################################
	//	Function	:	gotoXY 
	//	Purpose		:	Sets cursor to the passed in position
	//	Parameters	:	int x
	//					int y
	// 
	//	Returns		:	void
	//	Notes		:	Used in drawChar only
	//	See also	:	drawChar
	//#######################################################
	void gotoXY( int x, int y );

	//#######################################################
	//	Function	:	drawChar 
	//	Purpose		:	Draws Character at position
	//	Parameters	:	char c
	//					int x
	//					int y
	// 
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void drawChar( char c, int x, int y );

	//#######################################################
	//	Function	:	drawChar 
	//	Purpose		:	Draws Character at position
	//	Parameters	:	char c
	//					int x
	//					int y
	//					int colour
	// 
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void drawChar( char c, int x, int y, int colour );

	//#######################################################
	//	Function	:	drawChar 
	//	Purpose		:	Draws Character at position
	//	Parameters	:	char c
	//					Vector2 pos
	//					int colour
	// 
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void drawChar( char c, Vector2 pos, int colour );

	//#######################################################
	//	Function	:	drawString
	//	Purpose		:	Draws string at position
	//	Parameters	:	std::string string
	//					int x
	//					int y
	//					int colour
	// 
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void drawString( std::string string, int x, int y, int colour );

	//#######################################################
	//	Function	:	drawString
	//	Purpose		:	Draws string at position
	//	Parameters	:	std::string string
	//					Vector2 pos
	//					int colour
	// 
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void drawString( std::string string, Vector2 pos, int colour );
}

namespace Keyboard
{
	//#######################################################
	//	Function	:	checkButton 
	//	Purpose		:	Checks if passed in button is pressed
	//	Parameters	:	int virtualKey
	// 
	//	Returns		:	int virtualKey
	//	Notes		:	
	//	See also	:	
	//#######################################################
	int checkButton( int virtualKey );
}

namespace Math
{
	//#######################################################
	//	Function	:	floatsEqual 
	//	Purpose		:	Checks if 2 floats are euqal
	//	Parameters	:	float a
	//					float b
	// 
	//	Returns		:	bool equal
	//	Notes		:	
	//	See also	:	
	//#######################################################
	bool floatsEqual( float a, float b );
}

namespace Audio
{
	//#######################################################
	//	Function	:	playSound 
	//	Purpose		:	Plays the passed in sound
	//	Parameters	:	std::string sound
	// 
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void playSound( std::string sound );
}

#endif // ifndef HELPERS_H