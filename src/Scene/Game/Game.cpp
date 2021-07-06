/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** Game.cpp
*/

#include "Scene/Game/Game.hpp"

namespace scenes {
    Game::Game(sf::RenderWindow &window) : AScene(window) {
        for (int y = 0; y != 5; y++) {
            std::list<std::shared_ptr<object::AObject>> ll;
            for (int x = 0; x != 5; x++) {
                sf::Vector2f pos(y,x);
                ll.push_back(std::make_shared<object::Case>(pos));
            }
            this->_case.push_back(ll);
        }
    }
}

