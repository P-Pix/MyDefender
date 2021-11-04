/**
 * @file Monster.hpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef _MONSTER_HPP_
#define _MONSTER_HPP_

#define TOMATE 0b00000000
#define COURGETTE 0b00000001

#include <iostream>
#include <SFML/Graphics.hpp>

#include "Stat.hpp"
#include "Sprite.hpp"

class Monster : public Stat, public Sprite
{
private:
protected:
    /// Attribut all stats
    void setStat(int life, int power, int cadence);

public:
    /// Construtor
    Monster(void);

    /// Destrcutor
    ~Monster(void);

    /// create a new Monster
    static Monster *createMonster(int type);

    /// Delete the Monster
    static void deleteMonster(Monster *monster);
};

#endif