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

class Sprite {
    private:
        unsigned int m_Frame;
        std::vector<std::string> m_ListAnimate;
        sf::Texture m_Texture;

    protected:
        sf::Sprite m_Sprite;

        void setListeAnimate(std::vector<std::string> listeAniamte);

    public:
        Sprite();
        
        /// Sprite constructor
        /// \param listeaddress sprite address
        Sprite(std::vector<std::string> listeaddress);

        /// Destructor
        ~Sprite(void);

        /// Switch Sprite to the next
        void nextAnimation(void);
};

#endif