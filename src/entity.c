// Copyright (c) 2021 andreysyrbuwindows
// Licensed under the MIT license

#include "entity.h"

Entity *CreateEntity(Vector2 position, Vector2 size, Vector2 velocity,
                     Color color) {
  Entity *entity = malloc(sizeof(Entity));

  assert(entity != NULL);

  entity->position = position;
  entity->size = size;
  entity->velocity = velocity;
  entity->color = color;

  return entity;
}

void DestroyEntity(Entity *entity) {
  assert(entity != NULL);

  free(entity);
  entity = NULL;
}

void DrawEntity(const Entity *entity) {
  DrawRectangleV(entity->position, entity->size, entity->color);
}

void MoveEntity(Entity *entity, Vector2 velocity) {
  entity->position = Vector2Add(entity->position, velocity);
}