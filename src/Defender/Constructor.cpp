/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Defender/Defender.hpp"

Defender::Defender(void) {

}

Defender::~Defender(void) {
    
}

Defender* Defender::getClassType(void) {
    return this;
}

Defender Defender::getClass(void) {
    return *this;
}

void Defender::setStat(int life, int power, int cadence) {
    this->m_life = life;
    this->m_power = power;
    this->m_cadence = cadence;
}