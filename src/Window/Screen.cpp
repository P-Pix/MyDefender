/**
 * @file Screen.cpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Window.hpp"

void Window::updateWindow(void) {
    this->m_Game.execution();
    sf::RectangleShape rectangle;
    rectangle.setSize(sf::Vector2f(this->m_Window->getSize().x - this->m_Window->getSize().y, this->m_Window->getSize().y));
    rectangle.setPosition(this->m_Window->getSize().y, 0);
    rectangle.setFillColor(sf::Color(127, 127, 127, 255));
    this->m_Window->clear();
    this->m_Window->draw(rectangle);
    std::vector<sf::Sprite> ListSprite = this->m_Game.getListSprite();
    for (int i = 0; i < ListSprite.size(); i ++) {
        this->m_Window->draw(ListSprite[i]);
    }
    this->m_Window->display();
}