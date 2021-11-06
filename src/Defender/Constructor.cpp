/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "../../include/Defender.hpp"

Defender::Defender(void)
{
}

Defender::~Defender(void)
{
}

Defender *Defender::getClassType(void)
{
    return this;
}

Defender Defender::getClass(void)
{
    return *this;
}

void Defender::setStat(int life, int power, int cadence)
{
    this->m_life = life;
    this->m_power = power;
    this->m_cadence = cadence;
}

Defender *Defender::createDefender(int type)
{
    std::vector<std::vector<int>> m_listStat =
        {
            // Tower 1
            {
                300,
                20,
                10,
            },
        };
    std::vector<std::string> m_listSprite =
        // Tower 1
        {
            "image/Defender/Tower1/",
        };
    return Defender::createDefender(m_listStat[type], m_listSprite[type]);
}

Defender* Defender::createDefender(std::vector<int> listStat, std::string listSprite)
{
    Defender *defender = new Defender();
    defender->setStat(listStat[0], listStat[1], listStat[2]);
    defender->setListeAnimate(listSprite);
    return defender;
}

Defender* Defender::createTower1(void)
{
    return createDefender(std::vector<int>{300, 20, 10}, "image/Defender/Tower1/");
}

void Defender::deleteDefender(Defender *defender)
{
    delete defender;
}