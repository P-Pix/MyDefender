/**
 * @file Monster.hpp
 * @author guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef _STAT_HPP_
#define _STAT_HPP_

class Stat
{
private:
    int m_waiting = 0;

protected:
    int m_life;
    int m_power;
    int m_cadence;

    bool m_alive = true;

    /// Kill
    void kill(void);

public:
    /// Constrcutor
    Stat(void);

    /// Destructor
    ~Stat(void);

    /// Receve damage
    void setDamage(int damage);

    /// Get power
    int getPower(void) const;

    /// Get cadence
    int getCadence(void) const;

    /// Get damage inflict
    /// \return 0 if he can't attack, m_power if his cadence autorise
    int getDamage(void);
};

#endif