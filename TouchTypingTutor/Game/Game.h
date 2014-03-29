#ifndef TOUCHTYPINGTUTOR_GAME_GAME_H_
#define TOUCHTYPINGTUTOR_GAME_GAME_H_

#include <SFML/Graphics.hpp>
#include <stack>
#include "Game/ViewControllers/view_controller.h"
#include "Utils/core_macros.h"

// This class runs the TouchTypingTutor game.
class Game {
 public:
  Game();

  // Initialize the game state. Returns non-zero on failure.
  int Init();

  // Start the game loop.
  void Run();

 private:
  // The render window that the game is drawn on.
  std::shared_ptr<sf::RenderWindow> window_;

  // A stack of view controllers. The top view controller is displayed.
  std::stack<std::unique_ptr<ViewController>> viewControllerStack_;

  DISALLOW_COPY_AND_ASSIGN(Game);
};

#endif  // TOUCHTYPINGTUTOR_GAME_GAME_H_
