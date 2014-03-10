#ifndef __TouchTypingTutor__Game__
#define __TouchTypingTutor__Game__
#endif /* defined(__TouchTypingTutor__Game__) */

#include <SFML/Graphics.hpp>

class Game {
public:
  Game();

  void Run();

private:
  sf::RenderWindow window;
  sf::Sprite sprite;
  sf::Text text;
};