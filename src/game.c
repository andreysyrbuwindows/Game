// Copyright (c) 2021 andreysyrbuwindows
// Licensed under the MIT license

#include "game.h"

Game *CreateGame(void) {
  Game *game = malloc(sizeof(Game));

  assert(game != NULL);

  game->player = CreatePlayer(
      (Vector2){(kScreenWidth / 2) - 10.0f, (kScreenHeight / 2 - 10.0f)},
      (Vector2){20.0f, 20.0f}, (Vector2){5.0f, 5.0f}, YELLOW);

  return game;
}

void DestroyGame(Game *game) {
  assert(game != NULL);

  DestroyPlayer(game->player);

  free(game);
  game = NULL;
}

void UpdateGame(Game *game) {
  // TODO(andreysyrbuwindows): Update the game.
}

void DrawGame(const Game *game) {
  BeginDrawing();
  ClearBackground(WHITE);

  DrawEntity(game->player->entity);

  EndDrawing();
}