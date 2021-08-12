#include "Core/Core.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(MODE_WiDTH, MODE_HEIGHT), "SFML window");
    window.setActive(false);

    core::Core cores(window, true);

    cores.add_scene(utils::GAME);
    cores.run();
    return utils::SUCCESS;
}
