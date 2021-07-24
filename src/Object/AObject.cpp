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
}
