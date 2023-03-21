#include"../include/game.h"

/**
 * main - entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	SDL_Renderer *renderer = NULL;

	gameInit();
	SDL_Window *window = createWindow("A-Mazing Adventures");

	gameLoop();

	quitGame(window, renderer);
	return (0);
}
