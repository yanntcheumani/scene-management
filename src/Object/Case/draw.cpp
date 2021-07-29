/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** draw.cpp
*/

#include "Object/Case/Case.hpp"

namespace object {
    void Case::draw_object(sf::RenderWindow &window) {
        window.draw(this->_sprite);
    }

}