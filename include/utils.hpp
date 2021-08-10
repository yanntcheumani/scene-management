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

#define MAX_Y 20
#define MAX_X 20
#define SIZE_MAX_Y 32
#define SIZE_MAX_X 32

#define HOURS 0100

namespace utils {

    typedef enum all_scenes {
        GAME
    } All_scenes;

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
