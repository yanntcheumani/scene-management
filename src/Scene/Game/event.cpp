/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** event.cpp
*/

#include "Scene/Game/Game.hpp"


namespace scenes {
    utils::exit_code_t Game::poll_event(sf::Event &event) {
        if ((event.type == sf::Event::KeyPressed) &&
            (event.key.code == sf::Keyboard::Left))
            this->_move_object(utils::MOVE_LEFT);
        if ((event.type == sf::Event::KeyPressed) &&
            (event.key.code == sf::Keyboard::Right))
            this->_move_object(utils::MOVE_RIGHT);
        if ((event.type == sf::Event::KeyPressed) &&
            (event.key.code == sf::Keyboard::Up))
            this->_move_object(utils::MOVE_UP);
        if ((event.type == sf::Event::KeyPressed) &&
            (event.key.code == sf::Keyboard::Down))
            this->_move_object(utils::MOVE_DOWN);

        return utils::CONTINUE;
    }

    void Game::_move_object(utils::direction_t direction) {
        for (auto &it: this->_case)
            for (auto &cases: it)
                cases->move(direction);
    }
}