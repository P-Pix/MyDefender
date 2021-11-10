/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/ControlPLayer.hpp"

ControlPlayer::ControlPlayer(void) {
    
}

ControlPlayer::~ControlPlayer(void) {

}

void ControlPlayer::setStat(int power, int life, int cadence) {
    this->m_powerselect = power;
    this->m_lifeselect = life;
    this->m_cadenceselect = cadence;
}

int ControlPlayer::getPowerSelect(void) {
    return this->m_powerselect;
}

int ControlPlayer::getLifeSelect(void) {
    return this->m_lifeselect;
}

int ControlPlayer::getCadenceSelect(void) {
    return this->m_cadenceselect;
}