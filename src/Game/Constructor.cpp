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
    for (int i = 0; i < this->m_ListDefender.size(); i ++) {
        Defender::deleteDefender(this->m_ListDefender[i]);
    }
    for (int i = 0; i < this->m_ListMonster.size(); i ++) {
        Monster::deleteMonster(this->m_ListMonster[i]);
    }
}