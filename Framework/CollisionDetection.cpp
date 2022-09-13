#include "Arena.h"
#include "CollisionDetection.h"
#include "Fruit.h"
#include "Snake.h"
#include "SnakeTail.h"
#include "Vector2.h"

CollisionDetection::CollisionDetection()
{

}

CollisionDetection::~CollisionDetection()
{

}

bool CollisionDetection::checkBadCollisions( const Vector2& snakePos, const SnakeTail& tail,
											 const Arena& arena )
{
	// Returns the result of the collision check of checkTail and checkArena
	return ( checkTail( snakePos, tail ) || checkArena( snakePos, arena ) );
}

bool CollisionDetection::checkTail( const Vector2& posToCheck, const SnakeTail& tail )
{
	// Bool to return
	bool collided = true;

	//Loop through the tail segments
	for( int i = 0; i < tail.getTailLength(); i++ )
	{
		//If item is at same pos to tail
		if( posToCheck == tail.getTailSegmentPos( i ) )
		{
			collided = true;
			break;
		}
		else
		{
			collided = false;
		}
	}
	return collided;
}

bool CollisionDetection::checkArena( const Vector2& snakePos, const Arena& arena )
{
	bool collided = true;

	//Loop through the arena walls
	for( int i = 0; i < arena.getArraySize(); i++ )
	{
		//If snake is at same pos to a wall
		if( snakePos == arena.getWallPos( i ) )
		{
			collided = true;
			break;
		}
		else
		{
			collided = false;
		}
	}
	return collided;
}

bool CollisionDetection::checkFruit( const Vector2& snakePos, const Vector2& fruitPos )
{
	return ( snakePos == fruitPos );
}