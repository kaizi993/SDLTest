#include "Game.h"

void Game::Update()
{
	SDL_PollEvent(&ev);

	if (ev.type == SDL_QUIT)
	{
		running = FALSE;
	}
}