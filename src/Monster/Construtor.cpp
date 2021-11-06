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

            // Courgette
            {
                100,
                30,
                20,
            },
        };
    std::vector<std::string> m_listSprite =
        {
            // Tomate
            "image/Monster/Tomate/",
            // Courgette
            "image/Monster/Courgette/",
        };
    return Monster::createMonster(m_listStat[type], m_listSprite[type]);
}

Monster* Monster::createMonster(std::vector<int> listStat, std::string sprite) {
    Monster *monster = new Monster();
    monster->setStat(listStat[0], listStat[1], listStat[2]);
    monster->setListeAnimate(sprite);
    return monster;
}

Monster* Monster::createTomate(void)
{
    return Monster::createMonster(std::vector<int>{100, 20, 10}, "image/Monster/Tomate/");
}

Monster* Monster::createCourgette(void)
{
    return Monster::createMonster(std::vector<int>{100, 30, 20}, "image/Monster/Courgette/");
}

void Monster::deleteMonster(Monster *monster)
{
    delete monster;
}