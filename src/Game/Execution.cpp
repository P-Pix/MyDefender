/**
 * @file Execution.cpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "../../include/Game.hpp"

void Game::execution(void)
{
    for (int i = 0; i < this->m_ListMonster.size(); i++)
    {
        this->m_ListMonster[i]->moveRight();
        for (int j = 0; j < this->m_ListDefender.size(); j++)
        {
            m_ListDefender[j]->setDamage(this->m_ListMonster[i]->inflictDamage(this->m_ListMonster[i]->getAddress(), this->m_ListDefender[j]->getAddress()));
        }
    }
    this->makeListSprite();
}