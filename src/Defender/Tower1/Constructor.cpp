/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../../include/Defender/Tower1.hpp"

Tower1::Tower1(void) {
    std::vector<std::string> textures = {
        "image/Defender/Tower1/1.png",
        "image/Defender/Tower1/2.png",
        "image/Defender/Tower1/3.png",
    };
    this->setStat(this->m_defaultLife, this->m_defaultDamage, this->m_defaultCadence);
    this->setListeAnimate(textures);
}

Tower1::~Tower1(void) {

}

Tower1* Tower1::createTower1(void) {
    return new Tower1();
}