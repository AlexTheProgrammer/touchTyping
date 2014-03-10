#include "Game/Game.h"

#include <SFML/Audio.hpp>

#include "ResourcePath.hpp"

Game::Game() {
}

void Game::Init() {
  window_ = std::shared_ptr<sf::RenderWindow>(
      new sf::RenderWindow(sf::VideoMode(800, 600), "SFML window"));
  // Set the Icon
  sf::Image icon;
  if (!icon.loadFromFile(resourcePath() + "icon.png")) {
    return;
  }
  window_->setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
}

void Game::Run() {
  // Start the game loop
  while (window_->isOpen())
  {
    // Process events
    sf::Event event;
    while (window_->pollEvent(event))
    {
      // Close window : exit
      if (event.type == sf::Event::Closed) {
        window_->close();
      }

      // Escape pressed : exit
      if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
        window_->close();
      }
    }

    // Clear screen
    window_->clear();

    // Update the window
    window_->display();
  }
}

