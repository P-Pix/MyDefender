/**
 * @file Monster.hpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _MONSTER_HPP_
#define _MONSTER_HPP_

#include <iostream>
#include <SFML/Graphics.hpp>

#include "../Stat.hpp"
#include "../Sprite.hpp"

class Monster {
    private:

    protected:

    public:
        Monster(void);
        ~Monster(void);

        void Spawn(void);
};

#endif