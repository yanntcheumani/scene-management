/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** get_and_set.cpp
*/

#include "Object/Case/Case.hpp"

namespace object {

    const sf::Vector2f &Case::getSize() const {
        return _size;
    }

    void Case::setSize(const sf::Vector2f &size) {
        _size = size;
    }

    int Case::getWater() const {
        return _water;
    }

    void Case::setWater(int water) {
        _water = water;
    }

}