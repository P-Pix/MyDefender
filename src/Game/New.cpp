/**
 * @file New.cpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Game.hpp"

void Game::newMonster(int type) {
    if (type == TOMATE) {
        this->m_ListMonster.push_back(Monster::createMonster(TOMATE));
    }
    else if (type == COURGETTE) {
        this->m_ListMonster.push_back(Monster::createMonster(COURGETTE));
    }
    else {
        std::cout << "Error : type of monster not found" << std::endl;
    }
}

void Game::newDefender(int type) {
    if (type == TOWER1) {
        this->m_ListDefender.push_back(Defender::createDefender(TOWER1));
    }
    else {
        std::cout << "Error : type of defender not found" << std::endl;
    }
}