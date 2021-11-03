/**
 * @file Sprite.cpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Game.hpp"

void Game::makeListSprite(void) {
    this->m_ListSprite.clear();
}

std::vector<sf::Sprite> Game::getListSprite(void) const {
    return this->m_ListSprite;
}