#include"../include/game.h"

/**
 * gameLoop - main game loop
 *
 *
 * Return: none
 */

void gameLoop(void)
{
    SDL_Event event;
    int gameIsRunning = 1;

    while (gameIsRunning)
    {
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
                case SDL_QUIT:
                    gameIsRunning = 0;
                    break;
            }
        }
    }
}