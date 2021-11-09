/**
 * @file Collide.cpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "../../include/Sprite.hpp"

bool Sprite::collide(Sprite first, Sprite second) {
    return collide(first.getSprite().getPosition().x,
                   first.getSprite().getPosition().y,
                   first.getSprite().getPosition().x + first.getSprite().getTexture()->getSize().x,
                   first.getSprite().getPosition().y + first.getSprite().getTexture()->getSize().y,
                   second.getSprite().getPosition().x,
                   second.getSprite().getPosition().y,
                   second.getSprite().getPosition().x + second.getSprite().getTexture()->getSize().x,
                   second.getSprite().getPosition().y + second.getSprite().getTexture()->getSize().y);
}

bool Sprite::collide(int firstupx, int firstupy, int firstdownx, int firstdowny, int secondupx, int secondupy,
                     int seconddownx, int seconddowny) {
    return (firstupx <= seconddownx && firstupx >= secondupx && firstupy <= seconddowny && firstupy >= secondupy ||
            firstdownx <= seconddownx && firstdownx >= secondupx && firstdowny <= seconddowny &&
            firstdowny >= secondupy);
}

bool Sprite::collide(int firstupx, int firstupy, int firstdownx, int firstdowny, int x, int y)
{
    return (firstupx <= x && firstdownx >= x && firstupy <= y && firstdowny >= y);
}