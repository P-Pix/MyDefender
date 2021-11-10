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
    this->m_powerSelect = power;
    this->m_lifeSelect = life;
    this->m_cadenceSelect = cadence;
}

int ControlPlayer::getPowerSelect(void) {
    return this->m_powerSelect;
}

int ControlPlayer::getLifeSelect(void) {
    return this->m_lifeSelect;
}

int ControlPlayer::getCadenceSelect(void) {
    return this->m_cadenceSelect;
}