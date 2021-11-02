/**
 * @file Constructor.cpp
 * @author Guillauem LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "../../../include/Monster/MonsterTomate.hpp"

MonsterTomate::MonsterTomate(void)
{
    std::vector<std::string> liste;
    liste.push_back("ta mere");
    this->setListeAnimate(liste);
}

MonsterTomate::MonsterTomate(std::vector<std::string> ListeAnimate) : Sprite(ListeAnimate)
{
}