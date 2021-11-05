/**
 * @file Sprite.hpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef _SPRITE_HPP_
#define _SPRITE_HPP_

#define LEFT    0b00001000
#define RIGHT   0b00001001
#define UP      0b00001010
#define DOWN    0b00001011

#include <iostream>
#include <filesystem>
#include <SFML/Graphics.hpp>

class Sprite
{
private:
    unsigned short m_Frame;
    unsigned short m_CadenceFrame = 12;
    unsigned short m_Cadence;
    unsigned int m_NBFrame;
    int m_speed = 1;
    std::string m_ListAnimate;
    sf::Texture m_Texture;

    sf::Vector2f m_Right = sf::Vector2f(this->m_speed, 0);
    sf::Vector2f m_Left = sf::Vector2f(-this->m_speed, 0);
    sf::Vector2f m_Up = sf::Vector2f(0, -this->m_speed);
    sf::Vector2f m_Down = sf::Vector2f(0, this->m_speed);


    /// Move sprite right
    void moveRight(void);

    /// Move sprite left
    void moveLeft(void);

    /// Move sprite up
    void moveUp(void);

    /// Move sprite down
    void moveDown(void);

protected:
    sf::Sprite m_Sprite;

    /// Set Liste animate
    /// \param ListeAnimate liste address file animation
    void setListeAnimate(std::string ListeAniamte);

    /// Print all file address
    void printAddressImage(void);


public:
    /// Sprite Constrcutor without address file list
    /// Need call setListeAnimate before other actions
    Sprite();

    /// Sprite constructor
    /// \param listeaddress sprite address
    Sprite(std::string listeaddress);

    /// Destructor
    ~Sprite(void);

    /// Switch Sprite to the next
    void nextAnimation(void);
    
    /// Switch Sprite to the next with a movemement
    /// \param direction direction of the movemement
    void nextAnimation(int direction);

    /// \return Sprite SFML
    sf::Sprite getSprite(void);

    /// Return true if two sprites collide
    /// @param first First sprite
    /// @param second Second sprite
    /// @return True if the two sprites collide
    static bool collide(Sprite first, Sprite second);

    /// \return class
    Sprite* getClass(void);

    /// \return address
    Sprite getAddress(void);

    /// \return type of sprite
    std::string getName(void);
    
};

#endif