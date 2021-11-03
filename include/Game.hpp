/**
 * @file Game.hpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _GAME_HPP_
#define _GAME_HPP_

#include <iostream>
#include <vector>

#include <SFML/Graphics.hpp>

#include "Defender.hpp"
#include "Monster.hpp"

class Game {
    private:
        MonsterTomate toto;

        std::vector<sf::Sprite> m_ListSprite;

        std::vector<Monster> m_ListMonster;

    protected:

    public:
        /// Constructor
        Game(void);

        /// Destructor
        ~Game(void);

        /// Put all sprite in the list
        void makeListSprite(void);

        /// \return Sprite List for drawing
        std::vector<sf::Sprite> getListSprite(void) const;
};

#endif