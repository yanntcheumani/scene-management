/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** IScene.hpp
*/

#ifndef INC_0EB5C0F232BF4446988F20D19719ECF1
#define INC_0EB5C0F232BF4446988F20D19719ECF1
#include "utils.hpp"
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <list>

namespace scenes {
    class IScene {
    public:
        IScene() = default;
        virtual ~IScene() = default;
        virtual utils::exit_code_t poll_event(sf::Event& event) = 0;
        virtual void draw_scene() = 0;
        virtual void tick() = 0;
    private:
    };
};

#endif //INC_0EB5C0F232BF4446988F20D19719ECF1
