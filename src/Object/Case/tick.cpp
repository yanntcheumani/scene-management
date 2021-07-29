/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** tick.cpp
*/


#include "Object/Case/Case.hpp"

namespace object {
    void Case::tick() {
    }

    void Case::tick(std::list<std::list<std::shared_ptr<object::Case>>>
                    cases) {
        auto get_element = [] (
                std::list<std::list<std::shared_ptr<object::Case>>> &list,
                int index_y, int index_x) {
            auto it_y = list.begin();
            std::advance(it_y, index_y);
            auto it_x = it_y->begin();
            std::advance(it_x, index_x);
            return *it_x;
        };

        if (this->_y_pos < MAX_Y)
            get_element(cases, this->_y_pos + 1, this->_x_pos)->get_water
                    (*this);
        if (this->_y_pos > 0)
            get_element(cases, this->_y_pos - 1, this->_x_pos)->get_water
                    (*this);
        if (this->_x_pos > 0)
            get_element(cases, this->_y_pos, this->_x_pos - 1)->get_water
                    (*this);
        if (this->_x_pos < MAX_X)
            get_element(cases, this->_y_pos, this->_x_pos + 1)->get_water
                    (*this);
        if (this->_y_pos > 0 and this->_x_pos < MAX_X)
            get_element(cases,this->_y_pos - 1,  this->_x_pos + 1)->get_water
                    (*this);
        if (this->_y_pos < MAX_Y and this->_x_pos > 0)
            get_element(cases, this->_y_pos + 1, this->_x_pos - 1)->get_water
                    (*this);
        this->_water += 5;
        this->check_state_color();
    }
}