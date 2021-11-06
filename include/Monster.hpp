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
    /// create a new Monster
    static Monster* createMonster(std::vector<int> listStat, std::string sprite);

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

    /// create a new Monster Tomate
    static Monster* createTomate(void);

    /// create a new Monster Courgette
    static Monster* createCourgette(void);

    /// Delete the Monster
    static void deleteMonster(Monster *monster);
};

#endif