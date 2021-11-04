/**
 * @file Constructor.cpp
 * @author Guillauem LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "../../../include/Monster/Tomate.hpp"

MonsterTomate::MonsterTomate(void) {
    std::vector <std::string> liste {
        "image/Monster/Tomate/1.png",
        "image/Monster/Tomate/2.png",
        "image/Monster/Tomate/3.png",
        "image/Monster/Tomate/4.png",
    };
    this->setListeAnimate(liste);

    this->setStat(this->m_defaultlife, this->m_defaultpower, this->m_defaultcadence);
}

MonsterTomate::~MonsterTomate(void) {
}

MonsterTomate* MonsterTomate::createMonsterTomate(void) {
    return new MonsterTomate();
}