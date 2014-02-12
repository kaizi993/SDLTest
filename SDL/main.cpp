#include "SDL.h"        // SDL-Header
#include "SDL_opengl.h" // Bindet plattformabh�ngig die richtigen Header ein 

#include <iostream>     // f�r Konsolenausgaben

#include "Game.h"
using std::cout;    // Wir verwenden std::cout und
using std::endl;    // std::endl f�r die Konsolenausgaben

// Die main Funktion muss unter Windows unbedingt
// diese Form haben, da es ansonsten zu einem
// Linkerfehler kommen w�rde.
int main(int argc, char **argv)
{
	Game game(1);

	SDL_Quit();
	return 0;
}