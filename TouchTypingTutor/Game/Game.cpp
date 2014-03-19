#include "Game/Game.h"

#include "Game/ViewControllers/level_view_controller.h"

#include "Game/ViewControllers/menu_view_controller.h"

#include "Utils/resource_path.hpp"

Game::Game() {
}

int Game::Init() {
  window_ = std::shared_ptr<sf::RenderWindow>(
      new sf::RenderWindow(sf::VideoMode(800, 600), "SFML window"));
  // Set the Icon
  sf::Image icon;
  if (!icon.loadFromFile(resourcePath() + "icon.png")) {
    // Don't return failure here as a missing icon isn't critical.
    return 0;
  }

  window_->setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());


  //replace top element on stack as LevelViewController to LevelViewController code
  std::unique_ptr<ViewController> levelViewController (new LevelViewController);
  viewControllerStack_.push(std::move(levelViewController));

    
  //std::unique_ptr<ViewController> menuViewController (new MenuViewController);
  //viewControllerStack_.push(std::move(menuViewController));

  return 0;
}

void Game::Run() {
  // Start the game loop
  while (window_->isOpen()) {
    // Process events
    sf::Event event;
    while (window_->pollEvent(event)) {
      std::unique_ptr<ViewController> &topController = viewControllerStack_.top();
      // Close window : exit
      if (event.type == sf::Event::Closed) {
        window_->close();
      }

      // Escape pressed : exit
      if (event.type == sf::Event::KeyPressed &&
          event.key.code == sf::Keyboard::Escape) {
        window_->close();
      }

      topController->ProcessEvent(event);
    }
    std::unique_ptr<ViewController> &topController = viewControllerStack_.top();
    topController->UpdateDisplay(window_);

    // Update the window
    window_->display();
  }
}
