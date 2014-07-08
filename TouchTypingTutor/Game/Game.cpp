#include "Game/Game.h"

#include "Game/ViewControllers/level_view_controller.h"
#include "Game/ViewControllers/menu_view_controller.h"
#include "Utils/resource_manager.h"

Game::Game() : window_(sf::VideoMode(800, 600), "SFML window") {
}

int Game::Init() {
  std::shared_ptr<sf::Image> icon = ResourceManager::ImageFromFile("icon.png");
  if (icon) {
    // Don't return failure as a missing icon isn't critical.
    window_.setIcon(icon->getSize().x, icon->getSize().y, icon->getPixelsPtr());
  }

  // Replace top element on stack as LevelViewController to LevelViewController code.
  std::unique_ptr<ViewController> levelViewController (new LevelViewController);
  levelViewController->Init();
  viewControllerStack_.push(std::move(levelViewController));

  // std::unique_ptr<ViewController> menuViewController (new MenuViewController);
  // viewControllerStack_.push(std::move(menuViewController));

  clock_.restart();

  return 0;
}

void Game::Run() {
  // Start the game loop.
  while (window_.isOpen()) {
    // Process events.
    sf::Event event;
    while (window_.pollEvent(event)) {
      std::unique_ptr<ViewController> &topController = viewControllerStack_.top();
      // Close window : exit.
      if (event.type == sf::Event::Closed) {
        window_.close();
      }

      // Escape pressed : exit.
      if (event.type == sf::Event::KeyPressed &&
          event.key.code == sf::Keyboard::Escape) {
        window_.close();
      }

      topController->ProcessEvent(event);
    }
    std::unique_ptr<ViewController> &topController = viewControllerStack_.top();
    topController->UpdateDisplay(&window_, clock_.getElapsedTime());
    clock_.restart();

    // Update the window.
    window_.display();

    sf::sleep(sf::seconds(1/framerate_));
  }
}

void Game::setFramerate(float fps) {
  if (fps > 0) {
    framerate_ = fps;
  }
}
