#ifndef GAME_GAME_H_
#define GAME_GAME_H_

#include <assert.h>
#include <stdlib.h>

#include "raylib.h"

typedef struct {
} Game;

Game *CreateGame(void);
void DestroyGame(Game *game);

void UpdateGame(Game *game);
void DrawGame(const Game *game);

#endif  // GAME_GAME_H_
