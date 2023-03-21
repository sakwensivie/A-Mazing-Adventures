#include"../include/game.h"

/**
 * gameInit - initializes the game
 *
 * Return: 0 on success
 */

int gameInit(void)
{
	int success;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		fprintf(stderr, "SDL_Init Error: %s", SDL_GetError());
		success = 0;
	}
	else
	{
		fprintf(stdout, "SDL_Init Success!\n");
		success = 1;
	}

	return (success);
}

/**
 * createWindow - creates a window
 * @title: title of the window
 *
 * Return: pointer to the window
 */

SDL_Window *createWindow(char *title)
{
	SDL_Window *window = NULL;

	window = SDL_CreateWindow(title,
	SDL_WINDOWPOS_CENTERED,
	SDL_WINDOWPOS_CENTERED,
	640,
	420,
	SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL);

	return (window);
}

/**
 * quitGame - quits the game after the game loop is exited
 *
 * @window: window to be freed
 *
 * Return: returns none.
 *
 */

void quitGame(SDL_Window *window)
{
	SDL_DestroyWindow(window);
	SDL_Quit();
}

