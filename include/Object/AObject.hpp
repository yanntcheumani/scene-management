/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** AObject.hpp
*/

#ifndef INC_4C755B11B10344E8B40528FD35A75DC8
#define INC_4C755B11B10344E8B40528FD35A75DC8
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

namespace object {
    class AObject {
    public:
        AObject();
        ~AObject();
        virtual void tick() = 0;

    protected:
        sf::Sprite sprite;
        sf::Texture texture;
        sf::Vector2f _position;
        sf::IntRect _rect;
    };
}



#endif //INC_4C755B11B10344E8B40528FD35A75DC8
