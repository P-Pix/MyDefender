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
    this->m_Window->clear();
    this->m_Window->draw(this->m_ChoseDefender);
    std::vector<sf::Sprite> ListSprite = this->m_Game.getListSprite();
    for (int i = 0; i < ListSprite.size(); i ++) {
        this->m_Window->draw(ListSprite[i]);
    }
    this->m_Window->display();
}