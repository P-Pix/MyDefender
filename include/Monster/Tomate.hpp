/**
 * @file MonsterTomate.hpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef _MONSTER_TOMATE_HPP_
#define _MONSTER_TOMATE_HPP_

#include <iostream>

#include "Monster.hpp"

class MonsterTomate : public Monster
{
private:
    int m_defaultlife = 100;
    int m_defaultpower = 10;
    /// All m_defaultcadence the tomate inflict damage
    int m_defaultcadence = 12;
    /// attribut all stats
    void attributStat(void);

protected:
public:
    /// Constructor
    MonsterTomate(void);

    /// Constructor with liste address file
    /// \param ListeAnimate liste address file
    MonsterTomate(std::vector<std::string> ListeAnimate);

    ~MonsterTomate(void);
};

#endif