/**
 * @file Defender.hpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _DEFENDER_HPP_
#define _DEFENDER_HPP_

#include <iostream>
#include "../Sprite.hpp"
#include "../Stat.hpp"

class Defender: public Sprite, public Stat {
    private:

    protected:

    public:
        Defender(void);

        ~Defender(void);
};

#endif