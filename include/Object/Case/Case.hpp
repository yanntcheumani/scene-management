/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** Case.hpp
*/

#ifndef INC_61A9A2CE90E9494DB9C70AA43AF7FFCF
#define INC_61A9A2CE90E9494DB9C70AA43AF7FFCF
#include "Object/AObject.hpp"
#include <iostream>

namespace object {
    class Case: public AObject{
    public:
        explicit Case(sf::Vector2f &position);
        void tick() override {};

        ~Case();
    };
}



#endif //INC_61A9A2CE90E9494DB9C70AA43AF7FFCF
