#ifndef TOUCHTYPINGTUTOR_GAME_VIEWCONTROLLERS_LEVEL_VIEW_CONTROLLER_H_
#define TOUCHTYPINGTUTOR_GAME_VIEWCONTROLLERS_LEVEL_VIEW_CONTROLLER_H_

#include "Game/ViewControllers/view_controller.h"

class LevelViewController: public ViewController {
 public:
  void UpdateDisplay(std::shared_ptr<sf::RenderWindow> window);
  void Init();

 private:
  void MoveWord(const sf::Text& word);
  sf::Text text_;
  sf::RectangleShape border_;
};

#endif  // TOUCHTYPINGTUTOR_GAME_VIEWCONTROLLERS_LEVEL_VIEW_CONTROLLER_H_
