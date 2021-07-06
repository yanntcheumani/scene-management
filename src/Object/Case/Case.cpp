/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** Case.cpp
*/

#include "Object/Case/Case.hpp"

namespace object {
    Case::Case(sf::Vector2f &position): AObject()
    {
        this->_position = position;
        std::cout << "(" <<this->_position.x << ", " << this->_position.y << ") " << std::endl;
    }

    Case::~Case() = default;
}

