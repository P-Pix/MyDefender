/**
 * @file Defender.hpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _DEFENDER_HPP_
#define _DEFENDER_HPP_

#define TOWER1  0b00000000
#define TOWER2  0b00000001
#define TOWER3  0b00000010

#include <iostream>
#include "Sprite.hpp"
#include "Stat.hpp"

class Defender: public Sprite, public Stat {
    private:

    protected:

        /// Attribut all stats
        void setStat(int life, int power, int cadence);

    public:
        Defender(void);

        ~Defender(void);

        /// Return the class address
        Defender getClass(void);

        /// \return class type
        Defender* getClassType(void);

        static Defender* createDefender(int type);
        static void destroyDefender(Defender* defender);
};

#endif