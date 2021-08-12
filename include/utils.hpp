/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** utils.hpp
*/

#ifndef INC_AE7864C126C645A9BF5181B5778FFFD8
#define INC_AE7864C126C645A9BF5181B5778FFFD8
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

namespace utils {

    enum all_scenes {
        GAME,
    };

    typedef enum direction_t {
        MOVE_UP,
        MOVE_DOWN,
        MOVE_RIGHT,
        MOVE_LEFT
    } direction;

    typedef enum exit_code_s {
        SUCCESS,
        ERROR = 84,
        CONTINUE,
        WARNING,
        EXIT_SCENE,
        END
    } exit_code_t;

}

#endif //INC_AE7864C126C645A9BF5181B5778FFFD8
