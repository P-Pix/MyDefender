/**
 * @file Animation.cpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "../../include/Sprite.hpp"

void Sprite::nextAnimation(void)
{
    this->m_Frame++;
    this->m_Frame %= this->m_ListAnimate.size();
    if (!this->m_Texture.loadFromFile(this->m_ListAnimate[this->m_Frame]))
    {
        fprintf(stderr, "Error loading texture\n");
        exit(EXIT_FAILURE);
    }
}