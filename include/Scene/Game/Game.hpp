/*
** EPITECH PROJECT, 2021
** strat_2021
** File description:
** Game.hpp
*/

#ifndef INC_EDBC1FCB623443A2903877287B7E6592
#define INC_EDBC1FCB623443A2903877287B7E6592
#include "Scene/AScene.hpp"
#include "Object/Case/Case.hpp"

namespace scenes {
  class Game: public AScene {
  public:
      explicit Game(sf::RenderWindow &window);
      utils::exit_code_t poll_event(sf::Event &event) override;
      void draw_scene() override;
      void tick() override;
  private:
    std::list<std::list<std::shared_ptr<object::Case>>> _case;

      void _move_object(utils::direction_t direction);
  };
};
#endif //INC_EDBC1FCB623443A2903877287B7E6592
