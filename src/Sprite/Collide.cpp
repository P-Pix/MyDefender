/**
 * @file Collide.cpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "../../include/Sprite.hpp"

bool Sprite::collide(Sprite first, Sprite second)
{
    int sprite1x = first.getSprite().getPosition().x,
        sprite1y = first.getSprite().getPosition().y,

        sprite2x = second.getSprite().getPosition().x,
        sprite2y = second.getSprite().getPosition().y;

    int SPRITE_SIZE = first.getSprite().getTexture()->getSize().x;

    return (sprite1x + 5 <= sprite2x + SPRITE_SIZE && sprite1x + 59 >= sprite2x &&
            sprite1y + 32 <= sprite2y + SPRITE_SIZE && sprite1y + SPRITE_SIZE > sprite2y);
}