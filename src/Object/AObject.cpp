/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** AObject.cpp
*/

#include "Object/AObject.hpp"

namespace object {
    AObject::AObject() = default;

    const sf::Sprite &AObject::getSprite() const {
        return _sprite;
    }

    const sf::Texture &AObject::getTexture() const {
        return _texture;
    }

    const sf::Vector2f &AObject::getPosition() const {
        return _position;
    }

    const sf::IntRect &AObject::getRect() const {
        return _rect;
    }

    void AObject::move(utils::direction_t direction) {
        if (direction == utils::MOVE_LEFT)
            this->_sprite.move(-1, 0);
        else if (direction == utils::MOVE_RIGHT)
            this->_sprite.move(1, 0);
        else if (direction == utils::MOVE_UP)
            this->_sprite.move(0, -1);
        else if (direction == utils::MOVE_DOWN)
            this->_sprite.move(0, 1);

    }
}
