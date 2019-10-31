#ifndef JUMPING_H
#define JUMPING_H

#include <State.h>
#include "SDLAnimation.h"

class Jumping : public State
{
public:
	Jumping(SDLAnimation& t_animation) : animation(t_animation) {};
	~Jumping() {};
	void update();
	void render(SDL_Renderer* renderer);
	void idle(PlayerFSM* a, SDLAnimation& t_animation);
	void jumping(PlayerFSM* a, SDLAnimation& t_animation);
	void climbing(PlayerFSM* a, SDLAnimation& t_animation);
	void falling(PlayerFSM* a, SDLAnimation& t_animation);
	void walking(PlayerFSM* a, SDLAnimation& t_animation);

private:
	SDLAnimation& animation;
};

#endif // !IDLE_H