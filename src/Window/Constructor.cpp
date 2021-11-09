/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "../../include/Window.hpp"

Window::Window(int frame)
{
    this->m_VideoMode = nullptr;
    this->m_VideoMode = new sf::VideoMode(1080, 720);
    this->m_Window = nullptr;
    this->m_Window = new sf::RenderWindow(*this->m_VideoMode, "MyDefender");
    this->m_Window->setFramerateLimit(frame);

    this->m_ChoseDefenderTexture.loadFromFile("image/chosepart.png");
    this->m_ChoseDefender.setTexture(this->m_ChoseDefenderTexture);
    this->m_ChoseDefender.setPosition(this->m_Window->getSize().y, 0);
    this->m_ChoseDefender.scale(8, 8);
}

Window::~Window(void)
{
    
}