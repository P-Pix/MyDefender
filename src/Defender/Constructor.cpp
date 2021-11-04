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
    std::vector<std::vector<std::string>> m_listSprite =
        {
            // Tower 1
            {
                "image/Defender/Tower1/1.png",
            },
        };
    Defender *defender = new Defender();
    defender->setStat(m_listStat[type][0], m_listStat[type][1], m_listStat[type][2]);
    defender->setListeAnimate(m_listSprite[type]);
    return defender;
}

void Defender::destroyDefender(Defender *defender)
{
    delete defender;
}