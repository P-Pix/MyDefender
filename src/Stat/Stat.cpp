/**
 * @file Stat.cpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "../../include/Stat.hpp"

void Stat::setDamage(int damage)
{
    this->m_life -= damage;
    if (this->m_life <= 0)
    {
        this->kill();
    }
}

void Stat::kill(void)
{
    this->m_life = 0;
    this->m_alive = false;
}

int Stat::getPower(void) const
{
    return this->m_power;
}

int Stat::getCadence(void) const
{
    return this->m_cadence;
}

int Stat::getDamage(void)
{
    this->m_waiting ++;
    this->m_waiting %= this->m_cadence;
    if (this->m_waiting == 0) {
        return this->m_power;
    }
    return 0;
}

bool Stat::isAlive(void) const
{
    return this->m_alive;
}

int Stat::getLife(void) const
{
    return this->m_life;
}

void Stat::print(void) const
{
    std::cout << "Stat : " << std::endl;
    std::cout << "Life : " << this->m_life << std::endl;
    std::cout << "Power : " << this->m_power << std::endl;
    std::cout << "Cadence : " << this->m_cadence << std::endl;
}