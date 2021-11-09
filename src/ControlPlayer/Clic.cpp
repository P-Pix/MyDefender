/**
* @file Clic.cpp
 * @author Guillaume LEMONNIER
 *
*/

#include "../../include/ControlPLayer.hpp"

int ControlPlayer::checkClic(int x, int y) {
    for (int i = 0; i < this->m_ListZone.size(); i++) {
        if (Sprite::collide(this->m_ListZone[i]->start_x, this->m_ListZone[i]->start_y, this->m_ListZone[i]->end_x, this->m_ListZone[i]->end_y, x, y)) {
            return i;
        }
    }
    return 0;
}