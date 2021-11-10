/**
* @file Constructor.cpp
 * @author Guillaume LEMONNIER
*/

#include "../../include/ZoneList.hpp"

ZoneList::ZoneList(void) {
    this->addZone(762, 326, 830, 393);
}

ZoneList::~ZoneList(void) {

}

size_t ZoneList::getSize(void) {
    return this->m_ListZone.size();
}

void ZoneList::addZone(Zone *zone) {
    this->m_ListZone.push_back(zone);
}

void ZoneList::addZone(int startX, int startY, int endX, int endY) {
    this->m_ListZone.push_back(createZone(startX, startY, endX, endY));
}

void ZoneList::removeZone(Zone *zone) {
    this->m_ListZone.erase(std::remove(this->m_ListZone.begin(), this->m_ListZone.end(), zone), this->m_ListZone.end());
}

void ZoneList::removeZone(int index) {
    this->removeZone(this->m_ListZone[index]);
}

void ZoneList::removeAllZone(void) {
    this->m_ListZone.clear();
}

void ZoneList::print(void) {
    for (int i = 0; i < this->m_ListZone.size(); i++) {
        std::cout << "------------ Zone " << i + 1 << " -----------" << std::endl;
        std::cout << "X Start = " << this->m_ListZone[i]->start_x << std::endl;
        std::cout << "Y Start = " << this->m_ListZone[i]->start_y << std::endl;
        std::cout << "X End = " << this->m_ListZone[i]->end_x << std::endl;
        std::cout << "Y End = " << this->m_ListZone[i]->end_y << std::endl;
    }
}

std::vector<Zone *> ZoneList::getListZone(void) {
    return this->m_ListZone;
}