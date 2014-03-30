#ifndef TOUCHTYPINGTUTOR_GAME_VIEWCONTROLLERS_MENU_VIEW_CONTROLLER_H_
#define TOUCHTYPINGTUTOR_GAME_VIEWCONTROLLERS_MENU_VIEW_CONTROLLER_H_

#include "Game/ViewControllers/view_controller.h"

// This view controller displays the menu screen.
class MenuViewController: public ViewController {
 public:
  void UpdateDisplay(sf::RenderWindow *window);
};

#endif  // TOUCHTYPINGTUTOR_GAME_VIEWCONTROLLERS_MENU_VIEW_CONTROLLER_H_
