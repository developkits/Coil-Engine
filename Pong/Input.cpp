#include "Input.h"



Input::Input()
{
}


Input::~Input()
{
}

void Input::HandleInput()
{
	SDL_Event event;
	
		
	/* Poll for events. SDL_PollEvent() returns 0 when there are no  */
	/* more events on the event queue, our while loop will exit when */
	/* that occurs.                                                  */
	while (SDL_PollEvent(&event)) {
		/* We are only worried about SDL_KEYDOWN and SDL_KEYUP events */
		switch (event.type) {
		case SDL_KEYDOWN:
			printf("Key press detected\n");
			break;

		case SDL_KEYUP:
			printf("Key release detected\n");
			break;

		case SDL_QUIT:
			//UNDONE Globals::curGamestate = GameState::EXIT;
			hasQuit = true;
			break;
		}
	}
}
