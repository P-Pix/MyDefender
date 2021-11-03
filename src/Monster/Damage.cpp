/**
 * @file Damage.cpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Monster/Monster.hpp"

int Monster::inflictDamage(Sprite Monster, Sprite Tower) {
    if (Sprite::collide(Monster, Tower)) {
        return this->m_power;
    }
    return 0;
}