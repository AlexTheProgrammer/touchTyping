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

  // Set the frames per second.
  void setFramerate(float fps);

 private:
  // The render window that the game is drawn on.
  sf::RenderWindow window_;

  // A stack of view controllers. The top view controller is displayed.
  std::stack<std::unique_ptr<ViewController>> viewControllerStack_;

  // The maximum frame rate.
  float framerate_ = 60.f;

  // Used for keeping track of time between frames.
  sf::Clock clock_;

  DISALLOW_COPY_AND_ASSIGN(Game);
};

#endif  // TOUCHTYPINGTUTOR_GAME_GAME_H_
