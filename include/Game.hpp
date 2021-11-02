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
        std::vector<sf::Sprite> m_ListSprite;

    protected:

    public:
        Game(void);
        ~Game(void);
        /// \return Sprite List for drawing
        std::vector<sf::Sprite> getListSprite(void);
};

#endif