#include"../include/game.h"

/**
 * main - entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	SDL_Renderer *renderer = NULL;
	SDL_Event event;
	int gameIsRunning = 1;

    gameInit();
    SDL_Window *window = createWindow("A-Mazing Adventures");

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
	SDL_DestroyWindow(window);
	SDL_Quit();
	return (0);
}
