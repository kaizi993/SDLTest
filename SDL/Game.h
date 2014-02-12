#include <SDL_opengl.h>
#include <SDL.h>
#include <iostream>

using namespace std;

class Game
{
public:
	Game(int i);
	void GameLoop();
	bool running;
private:
	SDL_Event ev;
	bool Initialize();
	void Draw();
	void Update();
};