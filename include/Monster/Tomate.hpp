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
#include "../Sprite.hpp"

class MonsterTomate: public Sprite {
    private:

    protected:

    public:
        /// Constructor
        MonsterTomate(void);

        /// Constructor with liste address file
        /// \param ListeAnimate liste address file
        MonsterTomate(std::vector<std::string> ListeAnimate);

        ~MonsterTomate(void);
};

#endif