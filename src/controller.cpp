#include "SDL.h"
#include "controller.h"

int SDL_EnableUNICODE(int enable);

void Controller::HandleInput(bool &running) const {
    SDL_Event e;
    while (SDL_PollEvent(&e)) 
    {
        if(e.type == SDL_QUIT) {
            running = false;
        }
    }
}