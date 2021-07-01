#include "Core/Core.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    core::Core cores(window);

    cores.add_scene(utils::GAME);
    cores.run();
    return utils::SUCCESS;
}
