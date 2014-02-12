#include "SDL.h"        // SDL-Header
#include "SDL_opengl.h" // Bindet plattformabhängig die richtigen Header ein 

#include <iostream>     // für Konsolenausgaben

#include "Game.h"
using std::cout;    // Wir verwenden std::cout und
using std::endl;    // std::endl für die Konsolenausgaben

// Die main Funktion muss unter Windows unbedingt
// diese Form haben, da es ansonsten zu einem
// Linkerfehler kommen würde.
int main(int argc, char **argv)
{
	Game game(1);

	SDL_Quit();
	return 0;
}