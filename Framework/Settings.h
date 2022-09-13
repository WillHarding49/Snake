#ifndef SETTINGS_H
#define SETTINGS_H

#include <iostream>

#include "Direction.h"
#include "Vector2.h"

namespace Settings
{
	//Characters
	const char			k_snakeHeadChar		= '0';
	const char			k_snakeTailChar		= 'o';
	const char			k_fruitChar			= '@';
	const char			k_arenaChar			= '#';

	//Positions
	const float			k_snakeStartX		= 30.0f;
	const float			k_snakeStartY		= 15.0f;

	const float			k_arenaStartX		= 25.0f;
	const float			k_arenaStartY		= 0.0f;
	const float			k_arenaEndX			= 100.0f;
	const float			k_arenaEndY			= 30.0f;

	const Vector2		k_scorePos			= Vector2( 5, 19 );
	const Vector2		k_timerPos			= Vector2( 5, 20 );

	//Snake tail settings
	const int			k_maxSnakeLength	= static_cast< int >( ( k_arenaEndX - k_arenaStartX ) *
																  ( k_arenaEndY - k_arenaStartY ) );
	const int			k_snakeGrowAmount	= 5;
	const int			k_initialTailLength	= 10;

	//colours
	const int			k_blue				= 1;
	const int			k_green				= 2;
	const int			k_cyan				= 3;
	const int			k_red				= 4;
	const int			k_white				= 15;

	//Sounds
	const std::string	k_crunchSound		= "crunch.wav";
	const std::string	k_brickSound		= "brick.wav";
	const std::string	k_deathSound		= "death.wav";

	//Misc
	const float			k_snakeInitialSpeed = 1.0f;

	const float			k_tolerance			= 0.5f;			// Used for checking float equality

	const Direction		k_direction			= Direction::Right;

	const int			k_numInputKeys		= 4;			// Number of input keys in array

	const int			k_sleepTime			= 1000 / 60;	// Time in milliseconds to sleep the game
}

#endif // !SETTINGS_H
