#ifndef GAME_HPP
#define GAME_HPP
#endif
#ifndef GRAPHICS_HPP
#include "../headers/graphics.hpp"
#endif
#ifndef INPUT_HPP
#include "../headers/input.hpp"
#endif
#ifndef ENTITY_HPP
#include "../headers/entity.hpp"
#endif


void start(std::vector<Entity*> *stack);

void loop(std::vector<Entity*> *stack);