/**
 * @file Zone.cpp
 * @author Guillaume LEMONNIER
 */

#include "../../include/ControlPLayer.hpp"

void ControlPlayer::addZone(Zone *zone) {
    this->m_ListZone.push_back(zone);
}

void ControlPlayer::deleteAllZone(void) {
    for (int i = 0; i < this->m_ListZone.size(); i++) {
        destroyZone(this->m_ListZone[i]);
    }
}