/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** Core.hpp
*/

#ifndef INC_BA5451E6167B4B289E097A6C84F34CD0
#define INC_BA5451E6167B4B289E097A6C84F34CD0
#include "Scene/Game/Game.hpp"
#include <stack>
#include <memory>

#define MODE_WiDTH 1920
#define MODE_HEIGHT 1080
namespace core {
        class Core {
            public:
            explicit Core(sf::RenderWindow &window);

            utils::exit_code_t run();

            ~Core() = default;
            utils::exit_code_t add_scene(utils::All_scenes scene, bool clear=true) noexcept;

        private:
            std::shared_ptr<scenes::AScene> _scene;
            std::stack<std::shared_ptr<scenes::AScene>> _all_scenes;
            sf::RenderWindow &_window;

            void draw_screen() noexcept;
            void poll_Event() noexcept;

            std::shared_ptr<scenes::AScene> create_scene(utils::All_scenes
            scenes);
            void get_last_scene();
        };
};

#endif //INC_BA5451E6167B4B289E097A6C84F34CD0
