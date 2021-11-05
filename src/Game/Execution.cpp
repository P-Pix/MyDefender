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
        this->m_ListMonster[i]->nextAnimation(DOWN);
        for (int j = 0; j < this->m_ListDefender.size(); j++)
        {
            this->m_ListDefender[j]->setDamage(this->m_ListMonster[i]->inflictDamage(this->m_ListMonster[i]->getAddress(), this->m_ListDefender[j]->getAddress()));
            this->m_ListMonster[i]->setDamage(this->m_ListDefender[j]->inflictDamage(this->m_ListDefender[j]->getAddress(), this->m_ListMonster[i]->getAddress()));
        }
    }
    this->checkMonster();
    this->checkDefender();
    this->makeListSprite();
}

void Game::checkDefender(void)
{
    for (int i = 0; i < this->m_ListDefender.size(); i++)
    {
        if(!this->m_ListDefender[i]->isAlive()) {
            std::cout << "Defender " << i << " is dead" << std::endl;
            this->m_ListDefender[i]->print();
            Defender *tmp = this->m_ListDefender[i];
            this->m_ListDefender.erase(this->m_ListDefender.begin() + i);
            Defender::destroyDefender(tmp);
            i--;
        }
    }
}

void Game::checkMonster(void)
{
    for (int i = 0; i < this->m_ListMonster.size(); i++)
    {
        if(!this->m_ListMonster[i]->isAlive()) {
            std::cout << "Monster " << i << " is dead" << std::endl;
            this->m_ListMonster[i]->print();
            Monster *tmp = this->m_ListMonster[i];
            this->m_ListMonster.erase(this->m_ListMonster.begin() + i);
            Monster::deleteMonster(tmp);
            this->m_ListDefender[i]->print();
            i--;
        }
    }
}