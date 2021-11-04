/**
 * @file Courgette.hpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef _MONSTER_COURGETTE_HPP
#define _MONSTER_COURGETTE_HPP

#include <iostream>

#include "Monster.hpp"

class MonsterCourgette : public Monster
{
    private:

    protected:

    public:
        MonsterCourgette(void);
        ~MonsterCourgette(void);

        static MonsterCourgette* createMonsterCourgette(void);
};

#endif