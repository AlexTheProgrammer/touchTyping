#include "level_view_controller.h"

#include "Utils/ResourceManager.h"

void LevelViewController::Init() {
  // Set up text.
  text_.setFont(*ResourceManager::FontFromFile("Arial.ttf"));
  text_.setString("Hello world");
  text_.setCharacterSize(24);
  text_.setColor(sf::Color::Red);
  text_.setStyle(sf::Text::Bold | sf::Text::Underlined);

  // Set up rectangle to mimic border.
  const sf::Vector2f size = sf::Vector2f(800, 600);
  border_.setSize(size);
}

void LevelViewController::UpdateDisplay(std::shared_ptr<sf::RenderWindow> window) {
  if (text_.getPosition().y == border_.getSize().y) {
    text_.setPosition(0,0);
  }
  text_.move(0,1);
  window->clear(sf::Color::White);
  window->draw(text_);
}
