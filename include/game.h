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
#define SCREEN_HIEGHT 480
#define SCREEN_WIDTH 640
#define WORLD_WIDTH 10
#define WORLD_HEIGHT 10
#define PLAYER_FOV 60

/*Structs*/

/*Function Prototypes*/

/*gameInit.c*/
int gameInit(void);
SDL_Window *createWindow(const char *title);
void quitGame(SDL_Window *window, SDL_Renderer *renderer);

/*gameloop.c*/
void gameLoop(void);

#endif
