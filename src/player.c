// Copyright (c) 2021 andreysyrbuwindows
// Licensed under the MIT license

#include "player.h"

Player *CreatePlayer(Vector2 position, Vector2 size, Vector2 velocity,
                     Color color) {
  Player *player = malloc(sizeof(Player));

  assert(player != NULL);

  player->entity = CreateEntity(position, size, velocity, color);

  return player;
}

void DestroyPlayer(Player *player) {
  assert(player != NULL);

  DestroyEntity(player->entity);

  free(player);
  player = NULL;
}