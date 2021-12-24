// Copyright (c) 2021 andreysyrbuwindows
// Licensed under the MIT license

#include "game.h"

const int kScreenWidth = 500;
const int kScreenHeight = 500;

int main(void) {
  InitWindow(kScreenWidth, kScreenHeight, "Game");

  SetTargetFPS(60);

  Game *game = CreateGame();

  while (!WindowShouldClose()) {
    UpdateGame(game);
    DrawGame(game);
  }

  CloseWindow();

  DestroyGame(game);

  return 0;
}