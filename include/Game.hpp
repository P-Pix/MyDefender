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

class Game
{
private:
    std::vector<sf::Sprite> m_ListSprite;

    std::vector<Monster *> m_ListMonster;

    std::vector<Defender *> m_ListDefender;

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

    /// One turn execution
    void execution(void);

    /// Create a new Monster and add it to the list of Monster
    /// @param type : type of the Monster
    void newMonster(int type);

    /// Create a new Defender and add it to the list of Defender
    /// @param type : type of the Defender
    void newDefender(int type);
};

#endif