#ifndef __TTT_VIEW_CONTROLLER_H_
#define __TTT_VIEW_CONTROLLER_H_

#include <SFML/Graphics.hpp>

// Abstract class that can be used to display a specific state of a game.
class ViewController {
 public:
  // Optionally override this method to do set up work.
  virtual void Init();

  // Optionally override this method to process events.
  virtual void ProcessEvent(sf::Event event);

  // Override this method to update the display.
  // There is no need to call window->display() from within.
  virtual void UpdateDisplay(std::shared_ptr<sf::RenderWindow> window) = 0;
};

#endif // __TTT_VIEW_CONTROLLER_H_
