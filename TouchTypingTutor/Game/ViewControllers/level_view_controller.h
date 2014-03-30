#ifndef TOUCHTYPINGTUTOR_GAME_VIEWCONTROLLERS_LEVEL_VIEW_CONTROLLER_H_
#define TOUCHTYPINGTUTOR_GAME_VIEWCONTROLLERS_LEVEL_VIEW_CONTROLLER_H_

#include "Game/ViewControllers/view_controller.h"

class LevelViewController: public ViewController {
 public:
  void UpdateDisplay(sf::RenderWindow *window);
  void Init();

 private:
  sf::Text text_;
};

#endif  // TOUCHTYPINGTUTOR_GAME_VIEWCONTROLLERS_LEVEL_VIEW_CONTROLLER_H_
