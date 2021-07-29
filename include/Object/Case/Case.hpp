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
        explicit Case(sf::Vector2f &position, sf::Vector2f &size, int x_pos,
                      int y_pos);
        void tick() override;
        void tick(std::list<std::list<std::shared_ptr<object::Case>>> cases)
        override;
        void draw_object(sf::RenderWindow &window) override;
        ~Case() override;
        void check_state_color();

        const sf::Vector2f &getSize() const;

        void setSize(const sf::Vector2f &size);

        int getWater() const;

        void setWater(int water);

        void get_water(Case &cases);

    private:
//        std::list<AObject> _objects;
        sf::Vector2f _size;
        int _water;
        int _x_pos;
        int _y_pos;

        void create_sprites();
    };
}



#endif //INC_61A9A2CE90E9494DB9C70AA43AF7FFCF
