/**
 * @file Collide.cpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "../../include/Sprite.hpp"

bool Sprite::collide(Sprite first, Sprite second) {
    return (first.getSprite().getPosition().x + first.getSprite().getTexture()->getSize().x >= second.getSprite().getPosition().x &&
            first.getSprite().getPosition().x <= second.getSprite().getPosition().x + second.getSprite().getTexture()->getSize().x &&
            first.getSprite().getPosition().y + first.getSprite().getTexture()->getSize().y >= second.getSprite().getPosition().y &&
            first.getSprite().getPosition().y <= second.getSprite().getPosition().y + second.getSprite().getTexture()->getSize().y);
}