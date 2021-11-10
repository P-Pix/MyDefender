/**
 * @file ControlPLayer.hpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef _CONTROL_PLAYER_HPP_
#define _CONTROL_PLAYER_HPP_

#include <iostream>
#include "Sprite.hpp"
#include "ZoneList.hpp"

class ControlPlayer : public ZoneList {
private:
    int m_nbrow = 2;
    int m_nbcol = 4;
    int m_powerselect;
    int m_lifeselect;
    int m_cadenceselect;
    bool m_select = false;
protected:
public:
    /// Constructor
    ControlPlayer(void);

    /// Destructor
    ~ControlPlayer(void);

    /// get the Power
    int getPowerSelect(void);

    /// get the Life
    int getLifeSelect(void);

    /// get the Cadence
    int getCadenceSelect(void);

    /// receve stat of the element
    void setStat(int power, int life, int cadence);

    /// check if the clic is in a correct zone and return his
    /// @param x : x of the clic
    /// @param y : y of the clic
    int checkClic(int x, int y);
};

#endif