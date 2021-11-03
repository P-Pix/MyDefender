/**
 * @file Sprite.hpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef _SPRITE_HPP_
#define _SPRITE_HPP_

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>

class Sprite
{
private:
    unsigned short m_Frame;
    int m_speed = 1;
    std::vector<std::string> m_ListAnimate;
    sf::Texture m_Texture;

    sf::Vector2f m_Right = sf::Vector2f(this->m_speed, 0);
    sf::Vector2f m_Left = sf::Vector2f(-this->m_speed, 0);
    sf::Vector2f m_Up = sf::Vector2f(0, -this->m_speed);
    sf::Vector2f m_Down = sf::Vector2f(this->m_speed, 0);

protected:
    sf::Sprite m_Sprite;

    /// Set Liste animate
    /// \param ListeAnimate liste address file animation
    void setListeAnimate(std::vector<std::string> ListeAniamte);

    /// Print all file address
    void printAddressImage(void);

public:
    /// Sprite Constrcutor without address file list
    /// Need call setListeAnimate before other actions
    Sprite();

    /// Sprite constructor
    /// \param listeaddress sprite address
    Sprite(std::vector<std::string> listeaddress);

    /// Destructor
    ~Sprite(void);

    /// Switch Sprite to the next
    void nextAnimation(void);

    /// \return Sprite SFML
    sf::Sprite getSprite(void);

    /// \return True if two sprite are colliding, false if not
    static bool collide(Sprite first, Sprite second);

    /// Move sprite right
    void moveRight(void);

    /// Move sprite left
    void moveLeft(void);

    /// Move sprite up
    void moveUp(void);

    /// Move sprite down
    void moveDown(void);
};

#endif