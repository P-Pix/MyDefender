/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "../../include/Sprite.hpp"

Sprite::Sprite(std::vector <std::string> listeaddress) {
    setListeAnimate(listeaddress);
}

Sprite::Sprite(void) {
}

void Sprite::setListeAnimate(std::vector <std::string> listeAnimate) {
    this->m_ListAnimate = listeAnimate;
    this->m_Frame = 0;
    this->m_Frame %= this->m_ListAnimate.size();
    if (!this->m_Texture.loadFromFile(this->m_ListAnimate[this->m_Frame])) {
        fprintf(stderr, "Error loading texture\n");
        exit(EXIT_FAILURE);
    }
    std::cout << "Tomate load with image = " << this->m_ListAnimate[0] <<std::endl;
    this->m_Sprite.setTexture(this->m_Texture);
}

Sprite::~Sprite(void) {
}

sf::Sprite Sprite::getSprite(void) {
    return this->m_Sprite;
}

Sprite Sprite::getClass(void) {
    return *this;
}