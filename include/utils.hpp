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

namespace utils {

    typedef enum all_scenes {
        MENU,
        GAME
    } All_scenes;

    typedef enum exit_code_s {
        SUCCESS,
        ERROR = 84,
        CONTINUE,
        WARNING,
        EXIT_SCENE,
        END
    } exit_code_t;

    static const int HEIGHT_SCREEN = 100;
    static const int WIDTH_SCREEN = 640;

    static const std::string path_fonts_bubbleboddy_fat = "asset/fonts/bubbleboddy/Bubbleboddy-FatTrial.ttf";
    static const std::string path_fonts_bubbleboddy_extralight =
            "asset/fonts/bubbleboddy/Bubbleboddy-FatTrial.ttf";
}

#endif //INC_AE7864C126C645A9BF5181B5778FFFD8
