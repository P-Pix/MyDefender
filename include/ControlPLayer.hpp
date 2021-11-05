/**
 * @file ControlPLayer.hpp
 * @author Guillaume LEMONNIER
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _CONTROLPLAYER_HPP_
#define _CONTROLPLAYER_HPP_

class ControlPlayer{
    private:
        int m_nbrow;
        int m_nbcol;
        int m_powerselect;
        int m_lifeselect;
        int m_cadenceselect;

    protected:
        /// receve stat of the element
        void setStat(int power, int life, int cadence);

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

};

#endif