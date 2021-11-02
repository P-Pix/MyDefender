/**
 * @file Control.cpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "../../include/Window.hpp"

bool Window::isOpen(void)
{
    return this->m_Window->isOpen();
}

void Window::pollEvent(void)
{
    if (this->m_Window->pollEvent(this->m_Event))
    {
        if (this->m_Event.type == sf::Event::Closed)
        {
            this->m_Window->close();
        }
        else if (this->m_Event.type == sf::Event::KeyPressed)
        {
            if (this->m_Event.key.code == sf::Keyboard::Escape)
            {
                this->m_Window->close();
            }
        }
    }
}