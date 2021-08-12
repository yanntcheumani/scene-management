/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** Core.hpp
*/

#ifndef INC_BA5451E6167B4B289E097A6C84F34CD0
#define INC_BA5451E6167B4B289E097A6C84F34CD0
#include "Core/CoreError.hpp"
#include "Scene/AScene.hpp"
#include "utils.hpp"
#include <stack>
#include <memory>

#define MODE_WiDTH 1920
#define MODE_HEIGHT 1080

namespace core {
        class Core {
            public:
            explicit Core(sf::RenderWindow &window, bool display_in_threads = false);

            utils::exit_code_t run();

            ~Core() = default;
            utils::exit_code_t add_scene(utils::all_scenes scene) noexcept;

            const std::shared_ptr<scenes::AScene> &getScene() const;


        private:
            std::shared_ptr<scenes::AScene> _scene;
            std::stack<std::shared_ptr<scenes::AScene>> _all_scenes;
            sf::RenderWindow &_window;
            bool _display_in_threads;

            void poll_Event() noexcept;
            std::shared_ptr<scenes::AScene> create_scene(utils::all_scenes scenes);
            void get_last_scene();
        };
};

#endif //INC_BA5451E6167B4B289E097A6C84F34CD0
