/**
 * @file Defender.hpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _DEFENDER_HPP_
#define _DEFENDER_HPP_

#define TOWER1  0b01000000
#define TOWER2  0b01000001
#define TOWER3  0b01000010

#include <iostream>
#include "Sprite.hpp"
#include "Stat.hpp"

class Defender: public Sprite, public Stat {
    private:

    protected:

        /// Attribut all stats
        void setStat(int life, int power, int cadence);

        static Defender* createDefender(std::vector<int> listStat, std::string sprite);

    public:
        Defender(void);

        ~Defender(void);

        /// Return the class address
        Defender getClass(void);

        /// \return class type
        Defender* getClassType(void);

        static Defender* createDefender(int type);
        static void deleteDefender(Defender* defender);
        static Defender* createTower1(void);
};

#endif