// Copyright (c) 2021 andreysyrbuwindows
// Licensed under the MIT license

#ifndef GAME_PLAYER_H_
#define GAME_PLAYER_H_

#include <assert.h>
#include <stdlib.h>

#include "entity.h"
#include "raylib.h"

typedef struct {
  Entity *entity;
} Player;

Player *CreatePlayer(Vector2 position, Vector2 size, Vector2 velocity,
                     Color color);

void DestroyPlayer(Player *player);

#endif  // GAME_PLAYER_H_