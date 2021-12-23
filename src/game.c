#include "game.h"

Game *CreateGame(void) {
  Game *game = malloc(sizeof(Game));

  assert(game != NULL);

  return game;
}

void DestroyGame(Game *game) {
  assert(game != NULL);

  free(game);
  game = NULL;
}

void UpdateGame(Game *game) {
  // TODO(andreysyrbuwindows): Update the game.
}

void DrawGame(const Game *game) {
  BeginDrawing();
  ClearBackground(RAYWHITE);

  // TODO(andreysyrbuwindows): Draw the game.

  EndDrawing();
}