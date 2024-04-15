#include"../include/game.h"

/**
 * drawMap - draws the map with raycasting
 *
 * @renderer: the renderer to draw the map on the window
 *
 * Return: none
 */

void drawMap(SDL_Renderer *renderer)
{
    int worldMap[WORLD_HEIGHT][WORLD_WIDTH] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 0, 0, 0, 1, 0, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 0, 0, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 0, 0, 1, 1, 1},
        {1, 1, 0, 1, 1, 0, 1, 1, 1, 1},
        {1, 1, 1, 0, 0, 1, 1, 1, 1, 1},
        {1, 1, 0, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 0, 1, 1, 1, 1, 1, 1, 1}
    };
}
