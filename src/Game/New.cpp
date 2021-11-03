/**
 * @file New.cpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Game.hpp"

void Game::newMonster(int type) {
    if (type == 0) {
        MonsterTomate Tomate;
        this->m_ListMonster.push_back(Tomate);
    }
    else if (type == 1) {
        MonsterCourgette Courgette;
        this->m_ListMonster.push_back(Courgette);
    }
}