// Copyright (c) 2021 andreysyrbuwindows
// Licensed under the MIT license

#ifndef GAME_GAME_H_
#define GAME_GAME_H_

#include <assert.h>
#include <stdlib.h>

#include "raylib.h"

#include "player.h"

extern const int kScreenWidth;
extern const int kScreenHeight;

typedef struct {
  Player *player;
} Game;

Game *CreateGame(void);
void DestroyGame(Game *game);

void UpdateGame(Game *game);
void DrawGame(const Game *game);

#endif  // GAME_GAME_H_