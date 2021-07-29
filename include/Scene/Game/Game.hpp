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
      utils::exit_code_t poll_event() override {return utils::CONTINUE;};
      void draw_scene() override;
      void tick() override;
  private:
    std::list<std::list<std::shared_ptr<object::Case>>> _case;
  };
};
#endif //INC_EDBC1FCB623443A2903877287B7E6592
