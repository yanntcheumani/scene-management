/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** Core.cpp
*/

#include "Core/Core.hpp"
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

sf::Mutex mutex;

static void draw_screen(sf::RenderWindow *window, core::Core &main) noexcept
{
    window->setActive(true);
    while (window->isOpen())
    {
        mutex.lock();
        main.getScene()->draw_scene();
        mutex.unlock();
    }
}

namespace core {

    Core::Core(sf::RenderWindow &window, bool display_in_threads):
    _window(window), _display_in_threads(display_in_threads)
    {
    }


    void Core::poll_Event() noexcept
    {
        sf::Event event;
        utils::exit_code_t ret;

        while (_window.pollEvent(event))
            if (event.type == sf::Event::Closed)
                _window.close();
        ret = this->_scene->poll_event(event);
        if (ret == utils::END) {
            this->_window.close();
            this->get_last_scene();
        }
        if (ret == utils::EXIT_SCENE)
            this->get_last_scene();

    }



    utils::exit_code_t Core::run()
    {
        sf::Thread thread(std::bind(&draw_screen, &this->_window, *this));

        if (this->_display_in_threads) {
            thread.launch();
        }
        while (this->_window.isOpen())
        {
            this->_scene->tick();
            mutex.lock();
            this->poll_Event();
            mutex.unlock();
            if (!_display_in_threads)
                this->_scene->draw_scene();
        }
        return utils::SUCCESS;
    }

    const std::shared_ptr<scenes::AScene> &Core::getScene() const {
        return _scene;
    }

}
