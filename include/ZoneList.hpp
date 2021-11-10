/**
* @file ZoneList.hpp
 * @author Guillaume LEMONNIER
*/

#ifndef _ZONE_LIST_HPP_
#define _ZONE_LIST_HPP_

#include <iostream>
#include <vector>
#include "Zone.hpp"

class ZoneList {
private:
protected:
    std::vector<Zone *> m_ListZone;
public:
    ZoneList(void);

    ~ZoneList(void);

    void addZone(Zone *zone);

    void addZone(int startX, int startY, int endX, int endY);

    void removeZone(Zone *zone);

    void removeZone(int index);

    void removeAllZone(void);

    Zone *getZone(int index);

    size_t getSize(void);

    void print(void);

    std::vector<Zone *> getListZone(void);
};

#endif