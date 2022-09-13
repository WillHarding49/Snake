#ifndef CHAROBJECT_H
#define CHAROBJECT_H

#include "Settings.h"
#include "Vector2.h"


//#######################################################
//	class		:	CharObject
//	Purpose		:	Character object base class
//	Usage		:	Most objects will inherit from this
//	Functions	:	CharObject();
//					CharObject( char character, float x, float y, int colour = Settings::k_white );
//					~CharObject();
//					void setChar( char character );
//					const char& getChar() const;
//					void setPos( float x, float y );
//					void setPos( Vector2& vector );
//					const Vector2& getPos() const;
//					void setColour( int colour );
//					const int getColour() const;
//					void render() const;
//					 void unrender() const;
//					
//	See also	:	
//#######################################################
class CharObject
{
private:
	char	m_char;		// character to display
	Vector2 m_pos;		// position to draw the character at
	int		m_colour;	// colour of the char


public:
	//#######################################################
	//	Function	:	CharObject 
	//	Purpose		:	CharObject constructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	CharObject();

	//#######################################################
	//	Function	:	CharObject 
	//	Purpose		:	CharObject constructor
	//	Parameters	:	char character
	//					float x
	//					float y
	//					int colour = Settings::k_white
	// 
	//	Returns		:	void
	//	Notes		:	Overloaded constuctor
	//	See also	:	
	//#######################################################
	CharObject( char character, float x, float y, int colour = Settings::k_white );
	
	//#######################################################
	//	Function	:	~CharObject 
	//	Purpose		:	CharObject destructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	~CharObject();

	//#######################################################
	//	Function	:	setChar
	//	Purpose		:	Sets the character
	//	Parameters	:	char character
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void setChar( char character );

	//#######################################################
	//	Function	:	getChar
	//	Purpose		:	Gets the character
	//	Parameters	:	None
	//	Returns		:	const char& character
	//	Notes		:	const
	//	See also	:	
	//#######################################################
	const char& getChar() const;

	//#######################################################
	//	Function	:	setPos
	//	Purpose		:	Sets the position
	//	Parameters	:	float x
	//					float y
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void setPos( float x, float y );

	//#######################################################
	//	Function	:	setPos
	//	Purpose		:	Sets the position
	//	Parameters	:	const Vector2& vector
	//	Returns		:	void
	//	Notes		:	Overload using a vector
	//	See also	:	
	//#######################################################
	void setPos( const Vector2& vector );

	//#######################################################
	//	Function	:	getPos
	//	Purpose		:	Gets the character
	//	Parameters	:	None
	//	Returns		:	const Vector2& position
	//	Notes		:	const
	//	See also	:	
	//#######################################################
	const Vector2& getPos() const;

	//#######################################################
	//	Function	:	setColour
	//	Purpose		:	Sets the position
	//	Parameters	:	int colour
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void setColour( int colour );

	//#######################################################
	//	Function	:	getColour
	//	Purpose		:	Gets the character
	//	Parameters	:	None
	//	Returns		:	const int colour
	//	Notes		:	const
	//	See also	:	
	//#######################################################
	const int getColour() const;

	//#######################################################
	//	Function	:	render
	//	Purpose		:	Draws character on screen at position
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	const
	//	See also	:	
	//#######################################################
	void render() const;

	//#######################################################
	//	Function	:	unrender
	//	Purpose		:	Draws a space on screen at position
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	const
	//	See also	:	
	//#######################################################
	void unrender() const;
};

#endif // !CHAROBJECT_H
