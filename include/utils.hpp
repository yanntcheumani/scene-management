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

#define WATER_ELEMENT sf::Color(212, 241, 249);
#define DARK_WATER_ELEMENT sf::Color(0,0, 200)
#define GROUND_ELEMENT sf::Color(124, 40, 17)
#define DARK_GROUND_ELEMENT sf::Color(113, 46, 28)
#define MAX_Y 30
#define MAX_X 30
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
