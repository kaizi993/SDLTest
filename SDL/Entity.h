#include <iostream>
#include <SDL.h>
#include <SDL_opengl.h>

using namespace std;

class Entity
{
public:
	float x;
	float y;
	float z;
	void DrawModel();
};

class Player : Entity
{

};