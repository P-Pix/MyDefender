/**
 * @file Monster.hpp
 * @author guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef _STAT_HPP_
#define _STAT_HPP_

#include "Sprite.hpp"

class Stat
{
private:
    int m_waiting = 0;

protected:
    int m_life;
    int m_power;
    int m_cadence;
    int m_distance;

    bool m_alive = true;

    /// Kill
    void kill(void);

public:
    /// Constrcutor
    Stat(void);

    /// Destructor
    ~Stat(void);

    int getLife(void) const;

    /// Receve damage
    void setDamage(int damage);

    /// Get power
    int getPower(void) const;

    /// Get cadence
    int getCadence(void) const;

    /// Get damage inflict
    /// \return 0 if he can't attack, m_power if his cadence autorise
    int getDamage(void);

    /// Get if he is alive
    bool isAlive(void) const;

    /// \return the power if he can attack, 0 if he can't
    int inflictDamage(Sprite Attack, Sprite Receve);

    /// print all the stats
    void print(void) const;
};

#endif