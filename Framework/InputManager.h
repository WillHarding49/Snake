#ifndef INUPTMANAGER_H
#define INUPTMANAGER_H

#include "Direction.h"
#include "Keys.h"
#include "Settings.h"
#include "Sound.h"

//const int k_numKeys = 4;
//#######################################################
//	class		:	InputManager
//	Purpose		:	Tracks keyboard inputs
//	Usage		:	Made in Game and updates Direction enum for the snake
//	Functions	:	InputManager();
//					~InputManager();
//					void getInputs( Direction& direction );
//					
//	See also	:	Direction
//#######################################################
class InputManager
{
private:
	int m_moveKeyArray [Settings::k_numInputKeys]; //Array of the input keys
public:

	//#######################################################
	//	Function	:	InputManager 
	//	Purpose		:	InputManager constructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	InputManager();

	//#######################################################
	//	Function	:	~InputManager 
	//	Purpose		:	InputManager destructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	~InputManager();

	//#######################################################
	//	Function	:	getInputs 
	//	Purpose		:	Checks for inputs and changes Direction in response
	//	Parameters	:	Direction& direction
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void getMoveInputs( Direction& direction, Sound& sound );

	bool getEnterInput();

	bool getEscInput();
};

#endif // !INUPTMANAGER_H