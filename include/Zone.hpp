/**
* @file Zone.hpp
 * @author Guillaume LEMONNIER
*/

#ifndef _ZONE_H_
#define _ZONE_H_

struct Zone {
    int start_x;
    int start_y;
    int end_x;
    int end_y;
};

void destroyZone(struct Zone *zone);

Zone* createZone(int start_x, int start_y, int end_x, int end_y);

#endif