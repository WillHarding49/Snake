#include <Windows.h>
#include <mmsystem.h>

#include <iostream>

#include "Helpers.h"
#include "Settings.h"
#include "Vector2.h"

namespace Rendering
{
	void gotoXY( int x, int y )
	{
		HANDLE hStdout = GetStdHandle( STD_OUTPUT_HANDLE );
		COORD position = { ( SHORT )x, ( SHORT )y };

		SetConsoleCursorPosition( hStdout, position );
	}

	void drawChar( char c, int x, int y )
	{
		// Set cursor to position
		gotoXY( x, y );

		// Get handle for setting colour
		HANDLE hStdout = GetStdHandle( STD_OUTPUT_HANDLE );

		// Set text colour to white
		SetConsoleTextAttribute( hStdout, Settings::k_white );

		// output character
		std::cout << c;
	}

	void drawChar( char c, int x, int y, int colour )
	{
		gotoXY( x, y );
		HANDLE hStdout = GetStdHandle( STD_OUTPUT_HANDLE );

		// Set text colour
		SetConsoleTextAttribute( hStdout, colour );
		std::cout << c;

		// Set text colour back to white
		SetConsoleTextAttribute( hStdout, Settings::k_white );
	}

	void drawChar( char c, Vector2 pos, int colour )
	{
		gotoXY( static_cast<int>( pos.x ), static_cast< int >( pos.y ) );
		HANDLE hStdout = GetStdHandle( STD_OUTPUT_HANDLE );

		SetConsoleTextAttribute( hStdout, colour );
		std::cout << c;
		SetConsoleTextAttribute( hStdout, Settings::k_white );
	}

	void drawString( std::string string, int x, int y, int colour )
	{
		gotoXY( x, y );
		HANDLE hStdout = GetStdHandle( STD_OUTPUT_HANDLE );

		SetConsoleTextAttribute( hStdout, colour );
		std::cout << string;
		SetConsoleTextAttribute( hStdout, Settings::k_white );
	}

	void drawString( std::string string, Vector2 pos, int colour )
	{
		gotoXY( static_cast< int >( pos.x ), static_cast< int >( pos.y ) );
		HANDLE hStdout = GetStdHandle( STD_OUTPUT_HANDLE );

		SetConsoleTextAttribute( hStdout, colour );
		std::cout << string;
		SetConsoleTextAttribute( hStdout, Settings::k_white );
	}


}

namespace Keyboard
{
	int checkButton( int virtualKey )
	{
		//Makes letter uppercase
		virtualKey = toupper( virtualKey );

		//Masks out all but the top bit in a bit mask and casts to a bool
		bool keyPressed = ( bool )( GetAsyncKeyState( virtualKey ) & 0x8000 );
		
		if( keyPressed )
		{
			return virtualKey;
		}
		else
		{
			return -1;
		}
	}
}

namespace Math
{
	bool floatsEqual( float a, float b )
	{
		// checks if the difference between the absolute values of a and b <= the tolerance
		return fabs( a - b ) <= Settings::k_tolerance;
	}
}

namespace Audio
{
	void playSound( std::string sound )
	{
		// Plays sound corrosponding to the parameter

		if( sound == "crunch.wav" )
		{
			PlaySound( TEXT( "crunch.wav" ), NULL, SND_ASYNC );
		}

		else if( sound == "brick.wav" )
		{
			PlaySound( TEXT( "brick.wav" ), NULL, SND_ASYNC );
		}

		else if( sound == "death.wav" )
		{
			PlaySound( TEXT( "death.wav" ), NULL, SND_ASYNC );
		}
	}
}