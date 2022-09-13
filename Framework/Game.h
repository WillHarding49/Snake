#ifndef GAME_H
#define GAME_H

#include "Arena.h"
#include "CollisionDetection.h"
#include "Direction.h"
#include "Fruit.h"
#include "InputManager.h"
#include "Snake.h"
#include "Sound.h"
#include "States.h"

//#######################################################
//	class		:	Game
//	Purpose		:	Manage all the game components
//	Usage		:	Call run() in main to run game
//	Functions	:	Game();
//					~Game();
//					void update( float deltaTime );
//					void render() const;
//					void unrender() const;
//					void run();
//					void startScreen();
//					void gamePlay();
//					void gameOverScreen();
//					void reset();
//					
//	See also	:	Main
//#######################################################
class Game
{
private:
	//Variables here
	Snake				m_snake;				//Snake gameObject
	InputManager		m_inputManager;			//Inputmanager object
	Direction			m_direction;			//Direction Enum
	Fruit				m_fruit;				//Fruit gameObject
	Arena				m_arena;				//Arena gameObject
	CollisionDetection	m_collisionDetection;	//CollisionDetection manager object
	States				m_gameState;			//States Enum
	Sound				m_sound;				//Sound object
	int					m_time;					//int to hold value for timer


public:
	//#######################################################
	//	Function	:	Game 
	//	Purpose		:	Game constructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	Game();

	//#######################################################
	//	Function	:	~Game 
	//	Purpose		:	Game destructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	~Game();
	
	//#######################################################
	//	Function	:	update
	//	Purpose		:	Updates game objects
	//	Parameters	:	float deltaTime
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void update( float deltaTime );

	//#######################################################
	//	Function	:	render
	//	Purpose		:	Renders game objects
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	const
	//	See also	:	
	//#######################################################
	void render() const;

	//#######################################################
	//	Function	:	unrender
	//	Purpose		:	Unrenders game objects
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	const
	//	See also	:	
	//#######################################################
	void unrender() const;

	//#######################################################
	//	Function	:	run
	//	Purpose		:	Loops through game states and calls
	//					correct functions
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	startScreen, gamePlay, gameOverScreen
	//#######################################################
	void run();

	//#######################################################
	//	Function	:	startScreen
	//	Purpose		:	displays start screen
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	run
	//#######################################################
	void startScreen();

	//#######################################################
	//	Function	:	gamePlay
	//	Purpose		:	runs the game
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	run
	//#######################################################
	void gamePlay();

	//#######################################################
	//	Function	:	startScreen
	//	Purpose		:	displays game over screen
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	run
	//#######################################################
	void gameOverScreen();

	//#######################################################
	//	Function	:	reset
	//	Purpose		:	Resets snake, score, and timer
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:
	//#######################################################
	void reset();
};


#endif // !GAME_H