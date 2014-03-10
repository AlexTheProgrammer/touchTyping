#ifndef __TTT_GAME_H_
#define __TTT_GAME_H_

#include <SFML/Graphics.hpp>
#include "Utils/core_macros.h"

class Game {
 public:
  Game();

  void Init();

  void Run();

 private:
  std::shared_ptr<sf::RenderWindow> window_;
  DISALLOW_COPY_AND_ASSIGN(Game);
};

#endif