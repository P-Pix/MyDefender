/**
 * @file Construtor.cpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "../../include/Monster.hpp"

Monster::Monster(void)
{
}

Monster::~Monster(void)
{
}

void Monster::setStat(int life, int power, int cadence)
{
    this->m_life = life;
    this->m_power = power;
    this->m_cadence = cadence;
}

Monster *Monster::createMonster(int type)
{
    std::vector<std::vector<int>> m_listStat =
        {
            // Tomate
            {
                100,
                20,
                10,
            },
        };
    std::vector<std::vector<std::string>> m_listSprite =
        {
            // Tomate
            {
                "image/Monster/Tomate/1.png",
                "image/Monster/Tomate/2.png",
                "image/Monster/Tomate/3.png",
                "image/Monster/Tomate/4.png",
            },
        };
    Monster *monster = new Monster();
    monster->setStat(m_listStat[type][0], m_listStat[type][1], m_listStat[type][2]);
    monster->setListeAnimate(m_listSprite[type]);
    return monster;
}

void Monster::deleteMonster(Monster *monster)
{
    delete monster;
}