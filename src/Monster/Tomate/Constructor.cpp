/**
 * @file Constructor.cpp
 * @author Guillauem LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "../../../include/Monster/Tomate.hpp"

MonsterTomate::MonsterTomate(void)
{
    std::vector<std::string> liste;
    liste.push_back("image/Monster/Tomate/1.png");
    liste.push_back("image/Monster/Tomate/2.png");
    liste.push_back("image/Monster/Tomate/3.png");
    liste.push_back("image/Monster/Tomate/4.png");
    this->setListeAnimate(liste);
    this->printAddressImage();

    this->attributStat();
}

MonsterTomate::MonsterTomate(std::vector<std::string> ListeAnimate) : Sprite(ListeAnimate)
{
    this->attributStat();
}

MonsterTomate::~MonsterTomate(void)
{
}

void MonsterTomate::attributStat(void)
{
    this->m_life = this->m_defaultlife;
    this->m_power = this->m_defaultpower;
    this->m_cadence = this->m_defaultcadence;
}