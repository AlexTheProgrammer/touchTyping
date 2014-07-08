#include "Game/ViewControllers/level_view_controller.h"

#include "Utils/resource_manager.h"

void LevelViewController::Init() {
  // Set up text.
  text_.setFont(*ResourceManager::FontFromFile("Arial.ttf"));
  text_.setString("Hello world");
  text_.setCharacterSize(24);
  text_.setColor(sf::Color::Red);
  text_.setStyle(sf::Text::Bold | sf::Text::Underlined);
}

void LevelViewController::UpdateDisplay(sf::RenderWindow *window, const sf::Time &elapsed) {
  if (text_.getPosition().y == window->getSize().y) {
    text_.setPosition(0, 0);
  }
  text_.move(0, 1);
  window->clear(sf::Color::White);
  window->draw(text_);
}
