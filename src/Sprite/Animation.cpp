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
    this->m_Cadence++;
    if (this->m_Cadence >= this->m_CadenceFrame)
    {
        this->m_Frame++;
        this->m_Frame %= this->m_ListAnimate.size();
        if (!this->m_Texture.loadFromFile(this->m_ListAnimate[this->m_Frame]))
        {
            fprintf(stderr, "Error loading texture\n");
            exit(EXIT_FAILURE);
        }
        this->m_Cadence %= this->m_CadenceFrame;
    }
}

void Sprite::nextAnimation(int direction)
{
    if (direction == LEFT)
    {
        this->moveLeft();
    }
    else if (direction == RIGHT)
    {
        this->moveRight();
    }
    else if (direction == UP)
    {
        this->moveUp();
    }
    else if (direction == DOWN)
    {
        this->moveDown();
    }
    else
    {
        std::cout << "Error : direction unknow" << std::endl;
        return;
    }
    this->nextAnimation();
}

void Sprite::moveRight(void)
{
    this->m_Sprite.move(this->m_Right);
}

void Sprite::moveLeft(void)
{
    this->m_Sprite.move(this->m_Left);
}

void Sprite::moveUp(void)
{
    this->m_Sprite.move(this->m_Up);
}

void Sprite::moveDown(void)
{
    this->m_Sprite.move(this->m_Down);
}