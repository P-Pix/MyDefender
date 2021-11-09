/**
* @file Constructor.cpp
 * @author Guillaume LEMONNIER
*/

#include "../../include/Zone.h"

Zone* createZone(int start_x, int start_y, int end_x, int end_y) {
    Zone* zone = new Zone;
    zone->start_x = start_x;
    zone->start_y = start_y;
    zone->end_x = end_x;
    zone->end_y = end_y;
    return zone;
}

void destroyZone(Zone* zone) {
    delete zone;
}