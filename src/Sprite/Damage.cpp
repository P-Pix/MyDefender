/**
 * @file Damage.cpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Stat.hpp"

int Stat::inflictDamage(Sprite Attack, Sprite Receve) {
    if (Sprite::collide(Attack, Receve)) {
        return this->getDamage();
    }
    return 0;
}