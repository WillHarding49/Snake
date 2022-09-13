#ifndef VECTOR2_H
#define VECTOR2_H

//#######################################################
//	class		:	Vector2
//	Purpose		:	Vector class for positioning objects
//	Usage		:	Set as variable when a position is needed
//	Functions	:	Vector2();
//					Vector2( int newX, int newY );
//					~Vector2();
//					const Vector2 operator+( const Vector2& other ) const;
//					const Vector2 operator-( const Vector2& other ) const;
//					const Vector2 operator*( const float scale ) const;
//					const Vector2 operator*( const float scale ) const;
//					const Vector2 operator/( const float scale ) const;
//					const Vector2 operator+=( const Vector2& other ) const;
//					const Vector2 operator-=( const Vector2& other ) const;
//					const bool operator==( const Vector2& other ) const;
//					const bool operator!=( const Vector2& other ) const;
//					
//	See also	:	
//#######################################################
class Vector2
{
private:

public:
	float x; // x position
	float y; // y position

	//#######################################################
	//	Function	:	Vector2 
	//	Purpose		:	Vector2 constructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	Vector2();

	//#######################################################
	//	Function	:	Vector2 
	//	Purpose		:	Vector2 constructor
	//	Parameters	:	float newX
	//					float newY
	// 
	//	Returns		:	void
	//	Notes		:	Overloaded constuctor
	//	See also	:	
	//#######################################################
	Vector2( float newX, float newY );

	//#######################################################
	//	Function	:	~Vector2 
	//	Purpose		:	Vector2 destructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	~Vector2();

	//#######################################################
	//	Function	:	operator+ 
	//	Purpose		:	Allows Vectors to be added together
	//	Parameters	:	const Vector2& other
	//	Returns		:	Vector2 rtnVal
	//	Notes		:	Overload of + operator
	//	See also	:	
	//#######################################################
	const Vector2 operator+( const Vector2& other ) const
	{
		Vector2 rtnVal;
		rtnVal.x = x + other.x;
		rtnVal.y = y + other.y;
		return rtnVal;
	}

	//#######################################################
	//	Function	:	operator- 
	//	Purpose		:	Allows Vectors to be subtraced from eachother
	//	Parameters	:	const Vector2& other
	//	Returns		:	Vector2 rtnVal
	//	Notes		:	Overload of - operator
	//	See also	:	
	//#######################################################
	const Vector2 operator-( const Vector2& other )
	{
		Vector2 rtnVal;
		rtnVal.x = x - other.x;
		rtnVal.y = y - other.y;
		return rtnVal;
	}

	//#######################################################
	//	Function	:	operator*
	//	Purpose		:	Allows Vectors to be multiplied by a float
	//	Parameters	:	const Vector2& other
	//	Returns		:	Vector2 rtnVal
	//	Notes		:	Overload of * operator
	//	See also	:	
	//#######################################################
	const Vector2 operator*( const float scale )
	{
		Vector2 rtnVal;
		rtnVal.x = x * scale;
		rtnVal.y = y * scale;
		return rtnVal;
	}

	//#######################################################
	//	Function	:	operator/
	//	Purpose		:	Allows Vectors to be divided by a float
	//	Parameters	:	const Vector2& other
	//	Returns		:	Vector2 rtnVal
	//	Notes		:	Overload of / operator
	//	See also	:	
	//#######################################################
	const Vector2 operator/( const float scale )
	{
		Vector2 rtnVal;
		rtnVal.x = x / scale;
		rtnVal.y = y / scale;
		return rtnVal;
	}

	//#######################################################
	//	Function	:	operator+= 
	//	Purpose		:	Allows Vectors to be added together
	//	Parameters	:	const Vector2& other
	//	Returns		:	Vector2 rtnVal
	//	Notes		:	Overload of += operator
	//	See also	:	
	//#######################################################
	const Vector2 operator+=( const Vector2& other )
	{
		x += other.x;
		y += other.y;

		return *this;
	}

	//#######################################################
	//	Function	:	operator-= 
	//	Purpose		:	Allows Vectors to be subtraced from eachother
	//	Parameters	:	const Vector2& other
	//	Returns		:	Vector2 rtnVal
	//	Notes		:	Overload of -= operator
	//	See also	:	
	//#######################################################
	const Vector2 operator-=( const Vector2& other )
	{
		x -= other.x;
		y -= other.y;

		return *this;
	}

	//#######################################################
	//	Function	:	operator== 
	//	Purpose		:	Allows Vectors to be compared with eachother
	//	Parameters	:	const Vector2& other
	//	Returns		:	bool
	//	Notes		:	Overload of == operator
	//	See also	:	
	//#######################################################
	const bool operator==( const Vector2& other ) const;

	//#######################################################
	//	Function	:	operator!= 
	//	Purpose		:	Allows Vectors to be compared with eachother
	//	Parameters	:	const Vector2& other
	//	Returns		:	bool
	//	Notes		:	Overload of != operator
	//	See also	:	
	//#######################################################
	const bool operator!=( const Vector2& other ) const;
};

#endif // !VECTOR2_H


//#ifndef VECTOR2_H
//#define VECTOR2_H
//
//class Vector2
//{
//public:
//	int x;
//	int y;
//
//	Vector2()
//		: x ( 0 )
//		, y ( 0 )
//	{
//	
//	}
//
//	Vector2(int x, int y)
//		: x ( x )
//		, y ( y )
//	{
//	
//	}
//};
//
//
//#endif // !VECTOR2_H