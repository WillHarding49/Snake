#include <iostream>
#include <string>
#include <windows.h>

#include "Game.h"
#include "Helpers.h"
#include "Settings.h"
#include "Timer.h"

Game::Game()
	: m_snake				( Settings::k_snakeHeadChar, Settings::k_snakeTailChar, Settings::k_snakeStartX,
							  Settings::k_snakeStartY, Settings::k_snakeGrowAmount, Settings::k_initialTailLength,
							  Settings::k_maxSnakeLength, Settings::k_green )
	, m_direction			( Settings::k_direction )
	, m_fruit				( Settings::k_fruitChar, Settings::k_red )
	, m_arena				( Settings::k_arenaChar, Settings::k_arenaStartX, Settings::k_arenaStartY,
							  Settings::k_arenaEndX, Settings::k_arenaEndY, Settings::k_cyan )
	, m_collisionDetection	()
	, m_gameState			( States::Start )
	, m_sound				()
	, m_time				( 0 )
	//: m_snake				( 'H', 'o', 30.0f, 15.0f, 5, 10, 2250 )
	//, m_direction			( Direction::Right )
	//, m_fruit				( '@' )
	//, m_arena				( '#', 25.0f, 0.0f, 100.0f, 30.0f )
	//, m_collisionDetection	()
	//, m_gameState			( States::Start )
{
	
}

Game::~Game()
{

}

void Game::update( float deltaTime )
{
	// Checks for movement inputs
	m_inputManager.getMoveInputs( m_direction, m_sound );

	// moves snake
	m_snake.update( deltaTime, m_direction );

	// If snake collides with itself or a wall
	if( m_collisionDetection.checkBadCollisions( m_snake.getHeadPos(), m_snake.getTail(),
												 m_arena ) )
	{
		// Change to game over state and play death sound effect
		m_sound.playDeath();
		m_gameState = States::GameOver;
	}

	// If the snake eats the fruit
	if( m_collisionDetection.checkFruit( m_snake.getHeadPos(), m_fruit.getPos() ) )
	{
		// Eat fruit and play sound
		m_fruit.eaten( m_snake, m_arena.getTopLeft(), m_arena.getBottomRight() );
		m_sound.playCrunch();
	}
}

void Game::render() const
{
	// Render all the gameObejects
	m_arena.render();

	m_fruit.render();

	m_snake.render();
}

void Game::unrender() const
{
	//Unrender gameObjects that move
	m_fruit.unrender();

	m_snake.unrender();
}

void Game::run()
{
	while( true )
	{
		// Switch on the current gamestate and run the associated function
		switch( m_gameState )
		{
			case States::Start:
			{
				startScreen();
			}
			break;

			case States::GamePlay:
			{
				gamePlay();
			}
			break;

			case States::GameOver:
			{
				gameOverScreen();
			}
			break;

			default: 
			{
				startScreen();
			}
			break;
		}
	}
}

void Game::startScreen()
{
	// Clear screen
	system( "cls" );
	// DrawString doesn't work here for whatever reason so cout it is

	//Rendering::drawString( "SNAKE", 50, 50, 15 );
	//Rendering::drawString( "USE THE ARROW KEYS TO MOVE THE SNAKE, EAT FRUIT TO GROW, DON'T HIT STUFF", 50, 53, 15 );
	//Rendering::drawString( "PRESS ENTER TO PLAY", 50, 55, 15 );

	// cout text for menu
	std::cout << "SNAKE\n\n";
	std::cout << "USE THE ARROW KEYS TO MOVE THE SNAKE, EAT FRUIT TO GROW, DON'T HIT STUFF\n\n";
	std::cout << "PRESS ENTER TO PLAY\n";

	// While on menu
	while( m_gameState == States::Start )
	{
		// Change gamestate when enter is pressed
		if( m_inputManager.getEnterInput() )
		{
			m_gameState = States::GamePlay;
		}
	}
}

void Game::gamePlay()
{
	// Timer object that resets every loop for delta time
	Timer deltaTimer;

	// Time since last loop
	float deltaTime;
	
	// Timer object for the on screen timer
	Timer timer;
	
	// Starts timer
	timer.start();

	// Sets an initial random position for fruit
	m_fruit.randomSpawn( m_arena.getTopLeft(), m_arena.getBottomRight(), m_snake.getTail() );


	//Game loop
	while( m_gameState == States::GamePlay )
	{
		// Clear Screen
		system( "cls" );
		
		// Recalculate deltatime
		deltaTime = deltaTimer.getElapsedSeconds();
		deltaTimer.start();

		// Update and render gameObjects
		update( deltaTime );
		render();
		//unrender();
		
		// Cast timer time to an int
		m_time = ( static_cast<int>(timer.getElapsedSeconds()));
		
		//Display score and timer
		Rendering::drawString( "Score: " + std::to_string( m_snake.getTailLength() ), Settings::k_scorePos, Settings::k_blue );
		Rendering::drawString( "Time: " + std::to_string( m_time ), Settings::k_timerPos, Settings::k_blue );

		// Pause game function so game runs at a fixed framerate
		Sleep( Settings::k_sleepTime );
	}
}

void Game::gameOverScreen()
{
	system( "cls" );

	// Display game over text
	std::cout << "GAME OVER\n\n";
	std::cout << "FINAL SCORE: " << m_snake.getTailLength() << "\n\n";
	std::cout << "FINAL TIME: " << m_time << "\n\n";
	std::cout << "PRESS ENTER TO PLAY AGAIN\n\n";
	std::cout << "PRESS ESC TO QUIT\n";

	// Detect for reset or exit inputs
	while( m_gameState == States::GameOver )
	{
		if( m_inputManager.getEnterInput() )
		{
			reset();
		}
		else if( m_inputManager.getEscInput() )
		{
			exit( 0 );
		}
	}
}

void Game::reset()
{
	// Destroy and reconstruct snake
	m_snake.~Snake();
	m_snake = Snake( Settings::k_snakeHeadChar, Settings::k_snakeTailChar, Settings::k_snakeStartX, Settings::k_snakeStartY, Settings::k_snakeGrowAmount, Settings::k_initialTailLength, Settings::k_maxSnakeLength, Settings::k_green );
	
	// Reset state and direction
	m_direction = Settings::k_direction;
	m_gameState = States::GamePlay;
}
