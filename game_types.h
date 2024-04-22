#ifndef GAME_TYPES_H
#define GAME_TYPES_H

#include <SDL2/SDL.h>

typedef struct {
    int x, y; // position
    int w, h; // dimensions
    bool active; // is the player currently active
} Player;

#define MAX_CLIENTS 4
extern Player players[MAX_CLIENTS];  // Declare the players array as extern

#endif
