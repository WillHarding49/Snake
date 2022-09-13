#ifndef SOUND_H
#define SOUND_H

//#######################################################
//	class		:	Sound
//	Purpose		:	Calls functions to play sounds
//	Usage		:	Made in Game, functions called when things happen
//	Functions	:	Sound();
//					~Sound();
//					void playCrunch();
//					void playBrick();
//					void playDeath();
//					
//	See also	:	
//#######################################################
class Sound
{
private:
public:
	//#######################################################
	//	Function	:	Sound 
	//	Purpose		:	Sound constructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	Sound();

	//#######################################################
	//	Function	:	~Sound 
	//	Purpose		:	Sound deconstructor
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	~Sound();

	//#######################################################
	//	Function	:	playCrunch 
	//	Purpose		:	Calls playSound function from Audio
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void playCrunch();

	//#######################################################
	//	Function	:	playBrick 
	//	Purpose		:	Calls playSound function from Audio
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void playBrick();

	//#######################################################
	//	Function	:	playDeath 
	//	Purpose		:	Calls playSound function from Audio
	//	Parameters	:	None
	//	Returns		:	void
	//	Notes		:	
	//	See also	:	
	//#######################################################
	void playDeath();
};

#endif // !SOUND_H
