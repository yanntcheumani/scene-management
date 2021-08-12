/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** Game.cpp
*/

#include "../Game/Game.hpp"
#include <chrono>
#include <thread>

namespace scenes {
    Game::Game(sf::RenderWindow &window) : AScene(window) {}

    void Game::draw_scene() {
        this->_window.clear(sf::Color(255, 250, 30));
        // Todo: implement object
        this->_window.display();
    }

    void Game::tick() {}
}

