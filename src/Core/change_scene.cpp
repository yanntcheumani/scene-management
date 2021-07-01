/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** change_scene.cpp
*/

#include "Core/Core.hpp"

namespace core {

    std::shared_ptr<scenes::AScene> Core::create_scene(utils::All_scenes
    scene) {
        std::map<utils::all_scenes, std::function<std::shared_ptr<scenes::AScene>()>>
        factory = {
                {utils::GAME, [this](){return std::make_shared<scenes::Game>(this->_window);}},
                {utils::MENU, [this](){return std::make_shared<scenes::AScene>(this->_window);}},
        };
        auto it = factory[scene];
        if (!it) {
            std::cout << "No factory" << std::endl;
        }
        return it();
    }

    utils::exit_code_t Core::add_scene(utils::All_scenes scene, bool clear)
    noexcept
    {
            if (this->_all_scenes.empty()) {
                this->_scene = this->create_scene(scene);
                return utils::SUCCESS;
            }
            this->_all_scenes.push(this->_scene);
            this->_scene = this->create_scene(scene);
            return utils::SUCCESS;
    }

    void Core::get_last_scene() {
        if (this->_all_scenes.empty()) {
            this->_window.close();
            return;
        }
        this->_scene = this->_all_scenes.top();
        this->_all_scenes.pop();
    }

}