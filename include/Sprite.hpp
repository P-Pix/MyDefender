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
#include "ZoneList.hpp"
#include <filesystem>
#include <SFML/Graphics.hpp>

class Sprite {
private:
    unsigned short m_Frame;
    unsigned short m_CadenceFrame = 12;
    unsigned short m_Cadence;
    unsigned int m_NBFrame = 0;
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
    void setListeAnimate(std::string ListeAnimate);

    /// Print all file address
    void printAddressImage(void);


public:
    /// Sprite Constructor without address file list
    /// Need call setListeAnimate before other actions
    Sprite();

    /// Sprite constructor
    /// \param listeAddress sprite address
    Sprite(std::string listeAddress);

    /// Destructor
    ~Sprite(void);

    /// Switch Sprite to the next
    void nextAnimation(void);

    /// Switch Sprite to the next with a movement
    /// \param direction direction of the movement
    void nextAnimation(int direction);

    /// \return Sprite SFML
    sf::Sprite getSprite(void);

    /// Return true if two sprites collide
    /// @param first First sprite
    /// @param second Second sprite
    /// @return True if the two sprites collide
    static bool collide(Sprite first, Sprite second);

    /// \return class
    Sprite *getClass(void);

    /// \return address
    Sprite getAddress(void);

    /// \return type of sprite
    std::string getName(void);

    /// @return true if two sprites collide
    /// @param firstUpX first up left x
    /// @param firstUpY first up left y
    /// @param firstDownX first down right x
    /// @param firstDownY first down right y
    /// @param secondUpX second up left x
    /// @param secondUpY second up left y
    /// @param secondDownX second down right x
    /// @param secondDownY second down right y
    static bool
    collide(int firstUpX, int firstUpY, int firstDownX, int firstDownY, int secondUpX, int secondUpY, int secondDownX,
            int secondDownY);

    /// @return true if point collide a zone
    /// @param upX up left x
    /// @param upY up left y
    /// @param downX down right x
    /// @param downY down right y
    /// @param x point x
    /// @param y point y
    static bool collide(int upX, int upY, int downX, int downY, int x, int y);

    /// @return true if point collide a zone
    /// @param liste address liste address
    /// @param x point x
    /// @param y point y
    static bool collide(std::vector<Zone *> liste, int x, int y);

};

#endif