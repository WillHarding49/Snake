#include <ctime>
#include <stdlib.h>

#include "CollisionDetection.h"
#include "Fruit.h"
#include "Helpers.h"
#include "Vector2.h"

Fruit::Fruit()
	: CharObject( '@', 1, 1, 15 )
{

}

Fruit::Fruit( char character, int colour )
	: CharObject( character, 1, 1, colour)
{

}

Fruit::~Fruit()
{

}

void Fruit::randomSpawn( const Vector2& spawnStart, const Vector2& spawnLimit, const SnakeTail& tail )
{
	//srand uses the current time to set the random seed so that the postion is random each time
	srand( ( int )time( 0 ) );

	//Sets the range of where the fruit can randomly spawn, within the arena, exclusive
	int xRange = static_cast< int >( ( spawnLimit.x - spawnStart.x - 1.0f ) );
	int yRange = static_cast< int >( ( spawnLimit.y - spawnStart.y - 1.0f ) );

	// vector position of where to spawn fruit
	Vector2 newPos;
	
	// CollisonDetection object to call checkTail function
	CollisionDetection collideCheck;
	
	// bool to check if the fruit has spawned on the tail
	bool onTail = true;

	while( onTail == true )
	{
		//position is set to a random position between the spawn start and the spawn limit
		newPos.x = static_cast< float >( rand() % xRange ) + spawnStart.x + 1.0f;
		newPos.y = static_cast< float >( rand() % yRange ) + spawnStart.y + 1.0f;

		//check if fruit pos is in the tail
		onTail = collideCheck.checkTail( newPos, tail );

		////Loop through tail positions and check if fruit is on the tail
		//for ( int i = 0; i < tail.getTailLength(); i++ )
		//{
		//	if ( newPos == tail.getTailSegmentPos( i ) )
		//	{
		//		onTail = true;
		//		break;
		//	}
		//	else
		//	{
		//		onTail = false;
		//	}
		//}
	}

	//set fruit pos when not on snake tail
	setPos( newPos );
}

void Fruit::eaten( Snake& snake, const Vector2& spawnStart, const Vector2& spawnLimit )
{
	// grows snake
	snake.growSnake();

	// respawns fruit
	randomSpawn( spawnStart, spawnLimit, snake.getTail() );
}
