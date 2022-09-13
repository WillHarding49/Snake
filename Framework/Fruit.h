#ifndef FRUIT_H
#define FRUIT_H

#include "CharObject.h"
#include "Snake.h"
#include "SnakeTail.h"
#include "Vector2.h"


//#######################################################
//	class		:	Fruit
//	Purpose		:	Randomly spawning fruit for snake to eat
//	Usage		:	Make in Game and respawn when eaten
//	Functions	:	Fruit();
//					Fruit( char character, int colour = Settings::k_white );
//					~Fruit();
//					void randomSpawn( Vector2 spawnStart, Vector2 spawnLimit );
//					void eaten( Snake& snake, const Vector2& spawnStart, const Vector2& spawnLimit );
//					
//	See also	:	CharObject
//#######################################################
class Fruit : public CharObject
{
private:

public:
	//#######################################################
	//	Function	:	Fruit 
	//	Purpose		:	Fruit constructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	Fruit();

	//#######################################################
	//	Function	:	Fruit 
	//	Purpose		:	Fruit constructor
	//	Parameters	:	char character
	//					int colour = Settings::k_white
	// 
	//	Returns		:	void
	//	Notes		:	Overloaded constuctor
	//	See also	:	
	//#######################################################
	Fruit( char character, int colour = Settings::k_white );

	//#######################################################
	//	Function	:	~Fruit 
	//	Purpose		:	Fruit destructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	~Fruit();

	//#######################################################
	//	Function	:	randomSpawn 
	//	Purpose		:	Spawns fruit in random position
	//	Parameters	:	Vector2& spawnStart
	//					Vector2& spawnLimit
	//					SnakeTail& tail
	//	Returns		:	void
	//	Notes		:	Spawns between the parameter positions
	//	See also	:	
	//#######################################################
	void randomSpawn( const Vector2& spawnStart, const Vector2& spawnLimit, const SnakeTail& tail );

	//#######################################################
	//	Function	:	eaten 
	//	Purpose		:	Grows snake and spawns new fruit
	//	Parameters	:	Snake& snake
	//					const Vector2& spawnStart
	//					const Vector2& spawnLimit
	//	Returns		:	void
	//	Notes		:	Spawns between the parameter positions
	//	See also	:	
	//#######################################################
	void eaten( Snake& snake, const Vector2& spawnStart, const Vector2& spawnLimit );

};

#endif // !FRUIT_H
