// Copyright (c) 2021 andreysyrbuwindows
// Licensed under the MIT license

#ifndef GAME_ENTITY_H_
#define GAME_ENTITY_H_

#include <assert.h>
#include <stdlib.h>

#include "raylib.h"
#include "raymath.h"

typedef struct {
  Vector2 position;
  Vector2 size;
  Vector2 velocity;
  Color color;
} Entity;

Entity *CreateEntity(Vector2 position, Vector2 size, Vector2 velocity,
                     Color color);
void DestroyEntity(Entity *entity);

void DrawEntity(const Entity *entity);
void MoveEntity(Entity *entity, Vector2 velocity);

#endif  // GAME_ENTITY_H_