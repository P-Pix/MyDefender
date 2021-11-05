/**
 * @file ControlPLayer.hpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _CONTROLPLAYER_HPP_
#define _CONTROLPLAYER_HPP_

#include <iostream>

class ControlPlayer{
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

        /// get the 
};

#endif