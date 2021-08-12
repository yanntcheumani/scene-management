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
#include <list>
#include <memory>
#include "utils.hpp"

namespace object {
    class AObject {
    public:
        AObject();
        virtual ~AObject() = default;
        virtual void tick() = 0;
        virtual void draw_object(sf::RenderWindow &window) = 0;

        const sf::Sprite &getSprite() const;

        const sf::Texture &getTexture() const;

        const sf::Vector2f &getPosition() const;

        const sf::IntRect &getRect() const;
        void move(utils::direction_t direction);
    protected:
        sf::Sprite _sprite;
        sf::Texture _texture;
        sf::Vector2f _position;
        sf::IntRect _rect;
    };
}



#endif //INC_4C755B11B10344E8B40528FD35A75DC8
