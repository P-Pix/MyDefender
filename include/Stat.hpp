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
protected:
    int m_life;
    int m_power;

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
    int getPower(void);
};

#endif