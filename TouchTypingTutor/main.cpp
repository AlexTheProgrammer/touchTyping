#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include "Game/Game.h"

int main(int argc, char const** argv) {
  Game game;
  game.Init();
  game.Run();

  return EXIT_SUCCESS;
}
