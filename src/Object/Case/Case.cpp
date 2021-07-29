/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** Case.cpp
*/

#include "Object/Case/Case.hpp"
#include <cstdlib>

namespace object {
    Case::Case(sf::Vector2f &position,sf::Vector2f &size, int x_pos, int
    y_pos): AObject()
    {
        this->_position = position;
        this->_size = size;
        this->_water = rand() % 100;
        this->_y_pos = y_pos;
        this->_x_pos = x_pos;
        std::cout
            << "("
            << this->_position.x
            << ", "
            << this->_position.y
            << ") "
            << std::endl;
        this->create_sprites();
    }


    void Case::create_sprites() {
        this->_rect.width = 32;
        this->_rect.height = 32;
        this->_rect.top = 0;
        this->_rect.left = 0;

        if (_water > 0 and _water < 20)
            this->_texture.loadFromFile(DARK_GROUND_ELEMENT);
        else if (_water >= 20 and _water <= 50)
            this->_texture.loadFromFile(GROUND_ELEMENT);
        else if (_water >= 50 and _water <= 75)
            this->_texture.loadFromFile(WATER_ELEMENT);
        else
            this->_texture.loadFromFile(DARK_WATER_ELEMENT);
        this->_sprite.setTexture(this->_texture);
        this->_sprite.setTextureRect(this->_rect);
        this->_sprite.setPosition(this->_position);
        this->_sprite.setRotation(0);
    }

    void Case::check_state_color() {
        if (_water > 0 and _water < 20)
            this->_texture.loadFromFile(DARK_GROUND_ELEMENT);
        else if (_water >= 20 and _water <= 50)
            this->_texture.loadFromFile(GROUND_ELEMENT);
        else if (_water >= 50 and _water <= 75)
            this->_texture.loadFromFile(WATER_ELEMENT);
        else
            this->_texture.loadFromFile(DARK_WATER_ELEMENT);
        this->_sprite.setTexture(this->_texture);
    }

    void Case::get_water(Case &cases) {
        if (cases._water >= 50 and cases._water <= 75) {
            this->_water += 10;
            cases.setWater(cases.getWater() - 10);
        } else if (cases._water >= 75 and cases._water <= 100) {
            this->_water += 25;
            cases.setWater(cases.getWater() - 25);
        } else if (cases._water >= 100) {
            this->_water += 30;
            cases.setWater(cases.getWater() - 30);
        }
    }

    Case::~Case() = default;
}

