/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Window.hpp"

Window::Window(int frame) {
    this->m_VideoMode = nullptr;
    this->m_VideoMode = new sf::VideoMode(1080, 720);
    this->m_Window = nullptr;
    this->m_Window = new sf::RenderWindow(*this->m_VideoMode, "MyDefender");
    this->m_Window->setFramerateLimit(frame);
}

Window::~Window(void) {
    delete this->m_VideoMode;
    delete this->m_Window;
}