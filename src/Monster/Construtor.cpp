/**
 * @file Construtor.cpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Monster/Monster.hpp"

Monster::Monster(void) 
{
}

Monster::~Monster(void) 
{
    
}

void Monster::setStat(int life, int power, int cadence) {
    this->m_life = life;
    this->m_power = power;
    this->m_cadence = cadence;
}