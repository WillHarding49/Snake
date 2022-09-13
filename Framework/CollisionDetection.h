#ifndef COLLISIONDETECTION_H
#define COLLISIONDETECTION_H

#include "Arena.h"
#include "Fruit.h"
#include "Snake.h"
#include "SnakeTail.h"
#include "Vector2.h"

//#######################################################
//	class		:	CollisionDetection
//	Purpose		:	Detect when snake hits something
//	Usage		:	Made in Game, checks positions in update
//	Functions	:	CollisionDetection();
//					~CollisionDetection();
//					bool checkBadCollisions( const Vector2& snakePos, const SnakeTail& tail, const Arena& arena );
//					bool checkTail( const Vector2& posToCheck, const SnakeTail& tail );
//					bool checkFruit( const Vector2& snakePos, const Vector2& fruitPos );
//					
//					
//	See also	:	
//#######################################################
class CollisionDetection
{
private:

public:

	//#######################################################
	//	Function	:	CollisionDetection 
	//	Purpose		:	CollisionDetection constructor
	//	Parameters	:
	// 
	//	Returns		:	void
	//	Notes		:	Constuctor
	//	See also	:	
	//#######################################################
	CollisionDetection();

	//#######################################################
	//	Function	:	~CollisionDetection 
	//	Purpose		:	CollisionDetection destructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	~CollisionDetection();

	//#######################################################
	//	Function	:	checkBadCollisions
	//	Purpose		:	Runs the collision check for the snake tail
	//	Parameters	:	const Vector2& posToCheck
	//					const SnakeTail& tail
	//					const Arena& arena
	//	Returns		:	bool collision
	//	Notes		:	
	//	See also	:	checkBadCollisions
	//#######################################################
	bool checkBadCollisions( const Vector2& snakePos, const SnakeTail& tail, const Arena& arena );

	//#######################################################
	//	Function	:	checkTail
	//	Purpose		:	Runs the collision check for the snake tail
	//	Parameters	:	const Vector2& posToCheck
	//					const SnakeTail& tail
	//	Returns		:	bool collision
	//	Notes		:	
	//	See also	:	checkBadCollisions
	//#######################################################
	bool checkTail( const Vector2& posToCheck, const SnakeTail& tail );

	//#######################################################
	//	Function	:	checkArena
	//	Purpose		:	Runs the collision check for the arena
	//	Parameters	:	const Vector2& snakePos
	//					const Arena& arena
	//	Returns		:	bool collision
	//	Notes		:	
	//	See also	:	
	//#######################################################
	bool checkArena( const Vector2& snakePos, const Arena& arena );

	//#######################################################
	//	Function	:	checkFruit
	//	Purpose		:	Runs the collision check for the fruit
	//	Parameters	:	const Vector2& snakePos
	//					const Vector2& fruitPos
	//	Returns		:	bool collision
	//	Notes		:	
	//	See also	:	
	//#######################################################
	bool checkFruit( const Vector2& snakePos, const Vector2& fruitPos );
};

#endif // !COLLISIONDETECTION_H

