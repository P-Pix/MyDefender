/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Sprite.hpp"

Sprite::Sprite(std::vector<std::string> listeaddress) {
    setListeAnimate(listeaddress);
}

Sprite::Sprite(void) {
    
}

void Sprite::setListeAnimate(std::vector<std::string> listeAniamte) {
    this->m_ListAnimate = listeAniamte;
    this->m_Frame = 0;
    this->m_Frame %= this->m_ListAnimate.size();
    if (!this->m_Texture.loadFromFile(this->m_ListAnimate[this->m_Frame])) {
        fprintf(stderr, "Error loading texture\n");
        exit(EXIT_FAILURE);
    }
    this->m_Sprite.setTexture(this->m_Texture);
}

Sprite::~Sprite(void) {
    delete &this->m_Texture;
    delete &this->m_Sprite;
}