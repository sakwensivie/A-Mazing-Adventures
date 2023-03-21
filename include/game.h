#ifndef GAME_H
#define GAME_H

/*Standard Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

/*Third Party Libraries*/
#include <SDL2/SDL.h>

/*Custom Libraries*/

/*Macros*/

/*Structs*/

/*Function Prototypes*/

int gameInit(void);
SDL_Window *createWindow(char *title);
void quitGame(SDL_Window *window);
void gameLoop(void);

#endif
