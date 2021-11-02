/**
 * @file Print.cpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Sprite.hpp"

void Sprite::printAddressImage(void) {
    for (int i = 0; i < this->m_ListAnimate.size(); i ++) {
        std::cout << this->m_ListAnimate[i] << std::endl;
    }
}