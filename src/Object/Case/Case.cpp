/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** Case.cpp
*/

#include "Object/Case/Case.hpp"
#include <cstdlib>

namespace object {
    Case::Case(sf::Vector2f &position,sf::Vector2f &size): AObject()
    {
        this->_position = position;
        this->_size = size;
        this->_water = rand() % 100;
        std::cout << "(" <<this->_position.x << ", " << this->_position.y << ") " << std::endl;
    }

    void Case::draw_object(sf::RenderWindow &window) {
        sf::RectangleShape rectangle;

        rectangle.setSize(_size);
        rectangle.setOutlineColor(this->check_state_color());
        rectangle.setOutlineThickness(5);
        rectangle.setPosition(this->_position.x, this->_position.y);
        window.draw(rectangle);
//        for (auto &it: this->_objects)
//            window.draw(it.getSprite());
    }

    void Case::tick() {


//        for (auto &it: this->_objects) {
//            it.tick();
//        }
    }

    sf::Color Case::check_state_color() {
        if (_water > 0 and _water < 20)
            return DARK_GROUND_ELEMENT;
        else if (_water >= 20 and _water <= 50)
            return GROUND_ELEMENT;
        return WATER_ELEMENT;
    }

    Case::~Case() = default;
}

