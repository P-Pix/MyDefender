/**
 * @file Control.cpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "../../include/Window.hpp"

bool Window::isOpen(void) {
    return this->m_Window->isOpen();
}

void Window::pollEvent(void) {
    if (this->m_Window->pollEvent(this->m_Event)) {
        if (this->m_Event.type == sf::Event::Closed) {
            this->m_Window->close();
        } else if (this->m_Event.type == sf::Event::KeyPressed) {
            if (this->m_Event.key.code == sf::Keyboard::Escape) {
                this->m_Window->close();
            }
        } else if (this->m_Event.type == sf::Event::MouseButtonPressed) {
            std::cout << "Mousse pressed" << std::endl;
            int x = this->m_Mouse->getPosition().x - this->m_Window->getPosition().x;
            int y = this->m_Mouse->getPosition().y - this->m_Window->getPosition().y;
            std::cout << "X : " << x << std::endl;
            std::cout << "Y : " << y << std::endl;
            if (Sprite::collide(this->m_ControlPlayer.getListZone(), x, y)) {
                std::cout << this->m_ControlPlayer.checkClic(x, y) << std::endl;
            }
        }
    }
}