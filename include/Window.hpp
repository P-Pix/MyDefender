/**
 * @file Window.hpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef _WINDOW_HPP_
#define _WINDOW_HPP_

#include <iostream>
#include <SFML/Graphics.hpp>

#include "Game.hpp"

class Window : public Game
{
private:
    sf::VideoMode *m_VideoMode;
    sf::RenderWindow *m_Window;
    sf::Event m_Event;
    sf::Mouse *m_Mouse;

    sf::Sprite m_ChoseDefender;
    sf::Texture m_ChoseDefenderTexture;
    Game m_Game;

protected:
public:
    /// Constructor and framerate controller
    /// \param frame FPS limit
    Window(int frame);

    /// Destructor
    ~Window(void);

    /// Return if the window is open
    bool isOpen(void);

    /// Detect Events
    void pollEvent(void);

    /// Update all the screen
    void updateWindow(void);
};

#endif