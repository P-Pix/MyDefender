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
    std::cout << "bug execution" << std::endl;
    for (int i = 0; i < this->m_ListMonster.size(); i++)
    {
        for (int j = 0; j < this->m_ListDefender.size(); j++)
        {
            m_ListDefender[j].setDamage(this->m_ListMonster[i]->inflictDamage(this->m_ListMonster[i]->getClass(), this->m_ListDefender[j]));
        }
    }
    this->m_ListMonster[0]->moveRight();
    this->makeListSprite();
}