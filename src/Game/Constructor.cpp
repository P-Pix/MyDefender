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
    this->newMonster(TOMATE);
    this->newDefender(TOWER1);
}

Game::~Game(void)
{
    
}