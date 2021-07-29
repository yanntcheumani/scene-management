/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** Game.cpp
*/

#include "Scene/Game/Game.hpp"
#include <chrono>
#include <thread>

namespace scenes {
    Game::Game(sf::RenderWindow &window) : AScene(window) {
        sf::Vector2f size(SIZE_MAX_X, SIZE_MAX_Y);
        int xx = 0, yy = 0;

        for (int y = 0; yy <= MAX_Y; y+= size.y, yy++) {
            std::list<std::shared_ptr<object::Case>> ll;
            for (int x = 0; xx <= MAX_X; x += size.x, xx++) {
                sf::Vector2f pos(x, y);
                ll.push_back(std::make_shared<object::Case>(pos, size, xx,
                                                            yy));
            }
            xx = 0;
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

    void Game::tick() {

        for (auto &it: this->_case) {
            for (auto &cases: it) {
                cases->tick(_case);
            }
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(HOURS));
    }
}

