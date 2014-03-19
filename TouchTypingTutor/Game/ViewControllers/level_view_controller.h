#ifndef __TouchTypingTutor__level_view_controller__
#define __TouchTypingTutor__level_view_controller__

#include <iostream>
#include "Game/ViewControllers/view_controller.h"

class LevelViewController: public ViewController{
public:
  sf::Text text;
  sf::Font font;
  sf::RectangleShape border;
  void UpdateDisplay(std::shared_ptr<sf::RenderWindow> window);
  void Init();
  void MoveWord(sf::Text&);
};

#endif