/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** Game.cpp
*/

#include "Scene/Game/Game.hpp"

namespace scenes {
    Game::Game(sf::RenderWindow &window) : AScene(window) {
        sf::Vector2f size(50, 50);

        for (int y = 10; y < 10 * size.y; y+= size.y) {
            std::list<std::shared_ptr<object::AObject>> ll;
            for (int x = 10; x < 10 * size.x; x += size.x) {
                sf::Vector2f pos(y, x);
                ll.push_back(std::make_shared<object::Case>(pos, size));
            }
            this->_case.push_back(ll);
        }
    }

    void Game::draw_scene() {
        this->_window.clear();
        for (auto &it: this->_case) {
            for (auto &cases: it) {
                cases->draw_object(this->_window);
            }
        }
        this->_window.display();
    }
}

