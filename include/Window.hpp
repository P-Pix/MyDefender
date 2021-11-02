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

class Window
{
private:
    sf::VideoMode *m_VideoMode;
    sf::RenderWindow *m_Window;
    sf::Event m_Event;
    sf::Mouse *m_Mouse;

    Game m_Game;

protected:
public:
    /// Constaructor and framerate controler
    /// \param frame FPS limit
    Window(int frame);

    /// Destructor
    ~Window(void);

    /// \return true if the window is open, false if not
    bool isOpen(void);

    /// Detected Keyboard / Mouse Event
    void pollEvent(void);

    /// Update all the screen
    void updateWindow(void);
};

#endif