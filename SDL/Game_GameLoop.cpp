#include "Game.h"

void Game::GameLoop()
{
	running = true;

	while (running)
	{
		Update();
		Draw();
	}
}