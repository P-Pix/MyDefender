/**
 * @file Sprite.cpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "../../include/Game.hpp"

void Game::makeListSprite(void)
{
    this->m_ListSprite.clear();
    for (int i = 0; i < this->m_ListDefender.size(); i++)
    {
        this->m_ListSprite.push_back(this->m_ListDefender[i]->getSprite());
    }
    for (int i = 0; i < this->m_ListMonster.size(); i++)
    {
        this->m_ListSprite.push_back(this->m_ListMonster[i]->getSprite());
    }
}

std::vector<sf::Sprite> Game::getListSprite(void) const
{
    return this->m_ListSprite;
}