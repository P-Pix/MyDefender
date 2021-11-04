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

class MonsterTomate : public Monster {
private:
    int m_defaultlife = 100;
    int m_defaultpower = 10;
    int m_defaultcadence = 12;

protected:
public:
    /// Constructor
    MonsterTomate(void);

    ~MonsterTomate(void);

    static MonsterTomate* createMonsterTomate(void);
};

#endif