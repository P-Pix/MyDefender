/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Game.hpp"

Game::Game(void) 
{
    this->newMonster(TOMATE); // TODO : fixe Segmentation fault
    this->newDefender(TOWER1); // TODO : fixe Segmentation fault
}

Game::~Game(void)
{
    
}