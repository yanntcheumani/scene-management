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

#define WATER_ELEMENT "../asset/isometric-sandbox-32x32/isometric-sandbox-32x32/blue_block/flat_block_blue.png"
//sf::Color(212, 241, 249);
#define DARK_WATER_ELEMENT "../asset/isometric-sandbox-32x32/isometric-sandbox-32x32/blue_block/flat_block_blue.png"
//sf::Color(0,0, 200)
#define GROUND_ELEMENT "../asset/isometric-sandbox-32x32/isometric-sandbox-32x32/green_block/flat_block_green.png"
//sf::Color(124, 40, 17)
#define DARK_GROUND_ELEMENT "../asset/isometric-sandbox-32x32/isometric-sandbox-32x32/grey_block/flat_block_grey.png"
//sf::Color(113, 46, 28)

#define MAX_Y 20
#define MAX_X 20
#define SIZE_MAX_Y 32
#define SIZE_MAX_X 32

#define HOURS 0100

#define THICKNESS 5
namespace utils {

    typedef enum all_scenes {
        MENU,
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

    static const int HEIGHT_SCREEN = 100;
    static const int WIDTH_SCREEN = 640;

    static const std::string path_fonts_bubbleboddy_fat = "asset/fonts/bubbleboddy/Bubbleboddy-FatTrial.ttf";
    static const std::string path_fonts_bubbleboddy_extralight =
            "asset/fonts/bubbleboddy/Bubbleboddy-FatTrial.ttf";
}

#endif //INC_AE7864C126C645A9BF5181B5778FFFD8
