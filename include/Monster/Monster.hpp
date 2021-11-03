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

class Monster : public Stat, public Sprite{
    private:

    protected:

        /// Attribut all stats
        void setStat(int life, int power, int cadence);

    public:
        /// Construtor
        Monster(void);

        /// Destrcutor
        ~Monster(void);
        
        /// Generate a new Monster
        void Spawn(void);
        
        /// inflict damage to a tower
        int inflictDamage(Sprite Monster, Sprite Tower);
};

#endif