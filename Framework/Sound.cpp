#include "Sound.h"
#include "Helpers.h"
#include "Settings.h"

Sound::Sound()
{
}

Sound::~Sound()
{
}

void Sound::playCrunch()
{
	//Plays crunch sound
	Audio::playSound( Settings::k_crunchSound );
}

void Sound::playBrick()
{
	//Plays brick sound
	Audio::playSound( Settings::k_brickSound );
}

void Sound::playDeath()
{
	//Plays death sound
	Audio::playSound( Settings::k_deathSound );
}
