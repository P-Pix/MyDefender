/**
 * @file Tower1.hpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _TOWER1_HPP_
#define _TOWER1_HPP_

#include <iostream>
#include "Defender.hpp"

class Tower1 : public Defender {
    private:
        int m_defaultLife = 300;
        int m_defaultDamage = 20;
        int m_defaultCadence = 10;


    protected:

    public:
        Tower1(void);
        ~Tower1(void);

        static Tower1* createTower1(void);
};

#endif