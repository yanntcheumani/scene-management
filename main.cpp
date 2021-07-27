#include "Core/Core.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(MODE_WiDTH, MODE_HEIGHT), "SFML window");
    core::Core cores(window);

    cores.add_scene(utils::GAME);
    cores.run();
    return utils::SUCCESS;
}
