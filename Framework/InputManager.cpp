#include <conio.h>
#include <iostream>

#include "InputManager.h"
#include "Direction.h"
#include "Keys.h"
#include "Helpers.h"
#include "Sound.h"

InputManager::InputManager()
{
	// Puts the move input keys into array
	m_moveKeyArray[ 0 ] = VK_UP;
	m_moveKeyArray[ 1 ] = VK_LEFT;
	m_moveKeyArray[ 2 ] = VK_RIGHT;
	m_moveKeyArray[ 3 ] = VK_DOWN;

}

InputManager::~InputManager()
{

}

void InputManager::getMoveInputs( Direction& direction, Sound& sound )
{
	// int for the key that has been pressed
	int keyPressed;

	// loop through the move key array
	for( int i = 0; i < Settings::k_numInputKeys; i++ )
	{
		// check if the key has been pressed
		keyPressed = Keyboard::checkButton( m_moveKeyArray[ i ] );

		//Switch for keyboard input
		switch( static_cast<Keys>(keyPressed) )
		{
			case Keys::Up:
			{
				//If the direction the snake is 
				if ( direction != Direction::Down )
				{
					// Set direction enum
					direction = Direction::Up;

					// Play sound
					sound.playBrick();
				}
			}
			break;

			case Keys::Down:
			{
				if ( direction != Direction::Up )
				{
					direction = Direction::Down;
					sound.playBrick();
				}
			}
			break;

			case Keys::Left:
			{
				if ( direction != Direction::Right )
				{
					direction = Direction::Left;
					sound.playBrick();
				}
			}
			break;

			case Keys::Right:
			{
				if ( direction != Direction::Left )
				{
					direction = Direction::Right;
					sound.playBrick();
				}
			}
			break;

			default:
			{

			}
			break;
		}

	}
}

bool InputManager::getEnterInput( )
{
	// sets int to VK_RETURN if enter is pressed
	int keyPressed = Keyboard::checkButton( VK_RETURN );

	// returns true if enter has pressed
	return ( static_cast< Keys >( keyPressed ) == Keys::Enter );
}

bool InputManager::getEscInput()
{
	// sets int to VK_ESCAPE if escape is pressed
	int keyPressed = Keyboard::checkButton( VK_ESCAPE );

	// returns true if escape has pressed
	return ( static_cast< Keys >( keyPressed ) == Keys::Esc );
}

//void InputManager::getInputs( Direction& direction )
//{
//	//If keyboard hit
//	if ( _kbhit() )
//	{
//		//Get keyboard input
//		int input = _getch();
//
//		//If the input is an arrow key
//		if ( !( input && input != 224 ) )
//		{
//			//Switch for keyboard input
//			switch ( ( Keys )_getch() )
//			{
//				case Keys::Up:
//				{
//					//If the direction the snake is 
//					if ( direction != Direction::Down )
//					{
//						direction = Direction::Up;
//					}
//				}
//				break;
//
//				case Keys::Down:
//				{
//					if ( direction != Direction::Up )
//					{
//						direction = Direction::Down;
//					}
//				}
//				break;
//
//				case Keys::Left:
//				{
//					if ( direction != Direction::Right )
//					{
//						direction = Direction::Left;
//					}
//				}
//				break;
//
//				case Keys::Right:
//				{
//					if ( direction != Direction::Left )
//					{
//						direction = Direction::Right;
//					}
//				}
//				break;
//
//				default:
//				{
//
//				}
//				break;
//			}
//		}
//	}
//}
