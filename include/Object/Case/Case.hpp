/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** Case.hpp
*/

#ifndef INC_61A9A2CE90E9494DB9C70AA43AF7FFCF
#define INC_61A9A2CE90E9494DB9C70AA43AF7FFCF
#include <iostream>
#include <list>
#include "Object/AObject.hpp"
#include "utils.hpp"

namespace object {
    class Case: public AObject{
    public:
        explicit Case(sf::Vector2f &position, sf::Vector2f &size);
        void tick() override;
        void draw_object(sf::RenderWindow &window) override;
        ~Case() override;
        sf::Color check_state_color();

    private:
//        std::list<AObject> _objects;
        sf::Vector2f _size;
        int _water;

    };
}



#endif //INC_61A9A2CE90E9494DB9C70AA43AF7FFCF
