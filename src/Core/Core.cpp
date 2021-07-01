/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** Core.cpp
*/

#include "Core/Core.hpp"

namespace core {

    Core::Core(sf::RenderWindow &window):
    _window(window)
    {

//        _window.setView(_view);
    }


    void Core::poll_Event() noexcept
    {
        sf::Event event;
        utils::exit_code_t ret;

        while (_window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                _window.close();
        }
        ret = this->_scene->poll_event();
        if (ret == utils::END) {
            this->_window.close();
        }
        if (ret == utils::EXIT_SCENE) {
            this->get_last_scene();
        }
    }

    void Core::draw_screen() noexcept
    {
        this->_scene->draw_scene();
    }

    utils::exit_code_t Core::run()
    {
        while (_window.isOpen())
        {
            this->_scene->tick();
            this->poll_Event();
            this->draw_screen();
        }
        return utils::SUCCESS;
    }
}
