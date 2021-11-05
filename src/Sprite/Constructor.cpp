/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "../../include/Sprite.hpp"

Sprite::Sprite(std::string listeaddress)
{
    setListeAnimate(listeaddress);
}

Sprite::Sprite(void)
{
}

void Sprite::setListeAnimate(std::string listeAnimate)
{
    for (const auto &file : std::filesystem::directory_iterator(listeAnimate))
    {
        this->m_NBFrame++;
    }
    this->m_ListAnimate = listeAnimate;
    this->m_Frame = 0;
    this->m_Frame %= this->m_NBFrame;
    if (!this->m_Texture.loadFromFile(this->m_ListAnimate + std::to_string(this->m_Frame) + ".png"))
    {
        fprintf(stderr, "Error loading texture\n");
        exit(EXIT_FAILURE);
    }
    std::cout << "Image Load = " << this->m_ListAnimate[0] << std::endl;
    this->m_Sprite.setTexture(this->m_Texture);
}

Sprite::~Sprite(void)
{
}

sf::Sprite Sprite::getSprite(void)
{
    return this->m_Sprite;
}

Sprite *Sprite::getClass(void)
{
    return this;
}

Sprite Sprite::getAddress(void)
{
    return *this;
}

std::string Sprite::getName(void)
{
    int counter = 0;
    for (int i = 0; i < this->m_ListAnimate.size(); i++)
    {
        if (counter == 2) {
            return this->m_ListAnimate.substr(i, this->m_ListAnimate.size() - i -1);
        }
        else if (this->m_ListAnimate[i] == '/')
        {
            counter ++;
        }
    }
    return NULL;
}