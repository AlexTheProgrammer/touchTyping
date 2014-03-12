#ifndef __TTT_MENU_VIEW_CONTROLLER_
#define __TTT_MENU_VIEW_CONTROLLER_

#include "Game/ViewControllers/view_controller.h"

// This view controller displays the menu screen.
class MenuViewController: public ViewController {
 public:
  void UpdateDisplay(std::shared_ptr<sf::RenderWindow> window);
};

#endif
