#ifndef __TTT__LEVEL_VIEW_CONTROLLER_H_
#define __TTT__LEVEL_VIEW_CONTROLLER_H_

#include <iostream>
#include "Game/ViewControllers/view_controller.h"

class LevelViewController: public ViewController {
 public:
  void UpdateDisplay(std::shared_ptr<sf::RenderWindow> window);
  void Init();

 private:
  void MoveWord(sf::Text& word);
  sf::Text text_;
  sf::Font font_;
  sf::RectangleShape border_;
};

#endif // __TTT__LEVEL_VIEW_CONTROLLER_H_
