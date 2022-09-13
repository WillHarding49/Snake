#ifndef KEYS_H
#define KEYS_H

#include <Windows.h>

//#######################################################
//	class		:	Keys
//	Purpose		:	Enum Class of the different input keys
//	Usage		:	Used in input manager to change Direction enum
//	Functions	:						
//	See also	:	InputManager
//#######################################################
enum class Keys
{
	Up = VK_UP,
	Left = VK_LEFT,
	Right = VK_RIGHT,
	Down = VK_DOWN,
	
	Enter = VK_RETURN,
	Esc = VK_ESCAPE,
};

#endif  // !KEYS_H