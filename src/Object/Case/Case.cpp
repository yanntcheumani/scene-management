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
            << this->_x_pos
            << ", "
            << this->_y_pos
            << ") "
            << std::endl;
    }

    void Case::draw_object(sf::RenderWindow &window) {
        sf::RectangleShape rectangle;

        rectangle.setSize(_size);
        rectangle.setOutlineColor(this->check_state_color());
        rectangle.setOutlineThickness(THICKNESS);
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


    void Case::tick(std::map<int, std::list<std::shared_ptr<object::Case>>> cases) {
        auto get_element = [] ( std::list<std::shared_ptr<object::Case>>
                &list, int index) {
            auto it = list.begin();
            std::advance(it, index);
            return *it;
        };

        if (this->_y_pos < MAX_Y)
            get_element(cases[this->_y_pos + 1], this->_x_pos)->get_water
            (*this);
        if (this->_y_pos > 0)
            get_element(cases[this->_y_pos - 1], this->_x_pos)->get_water
                    (*this);
        if (this->_x_pos > 0)
            get_element(cases[this->_y_pos], this->_x_pos - 1)->get_water
                    (*this);
        if (this->_x_pos < MAX_X)
            get_element(cases[this->_y_pos], this->_x_pos + 1)->get_water
                    (*this);
        if (this->_y_pos < MAX_Y and this->_x_pos > 0)
            get_element(cases[this->_y_pos + 1], this->_x_pos - 1)->get_water
                    (*this);
        if (this->_y_pos > 0 and this->_x_pos < MAX_X)
            get_element(cases[this->_y_pos - 1], this->_x_pos + 1)->get_water
                    (*this);
        this->_water += 5;
    }

    sf::Color Case::check_state_color() {
        if (_water > 0 and _water < 20)
            return DARK_GROUND_ELEMENT;
        else if (_water >= 20 and _water <= 50)
            return GROUND_ELEMENT;
        else if (_water >= 50 and _water <= 75)
            return WATER_ELEMENT;
        return DARK_WATER_ELEMENT;
    }

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

