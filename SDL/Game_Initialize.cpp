#include "Game.h"

bool Game::Initialize()
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0) // Initialisieren des SDL Video Subsystems
	{
		cout << "Die SDL konnte nicht initalisiert werden (" << SDL_GetError() << ")" << endl;
		return false;
	}

	cout << "Willkommen zum SDL Testprogramm." << endl;

	SDL_WM_SetCaption("Titel", "Titel");

	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

	SDL_SetVideoMode(800, 600, 32, SDL_OPENGL);

	glClearColor(0, 0, 0, 1);
	GameLoop();
	return true;
}