#include "Utils/resource_path.hpp"
#include <string>
#include "level_view_controller.h"

void LevelViewController::UpdateDisplay(std::shared_ptr<sf::RenderWindow> window) {
  // Init() will later be called from a resource manager, for now init() on every refresh to get code working.
  Init();
  if (LevelViewController::text.getPosition().y == LevelViewController::border.getSize().y) {
    LevelViewController::text.setPosition(0,0);
  }
  LevelViewController::text.move(0,1);
  window->clear(sf::Color::White);
  window->draw(text);
}

void LevelViewController::Init() {
  // Set up text
  LevelViewController::font.loadFromFile(resourcePath() + "Arial.ttf");
  LevelViewController::text.setFont(font);
  LevelViewController::text.setString("Hello world");
  LevelViewController::text.setCharacterSize(24);
  LevelViewController::text.setColor(sf::Color::Red);
  LevelViewController::text.setStyle(sf::Text::Bold | sf::Text::Underlined);

  // Set up rectangle to mimic border
  const sf::Vector2f size = sf::Vector2f(800, 600);
  LevelViewController::border.setSize(size);
}

// Set up data structures to keep track of words on screen
std::vector<std::string> wordsOnScreen(5);
int score;

// Generate text: randomly generates words
sf::Text generate_word();


// Set score: set score to zero at start of game and then
int set_score();


// Pop correct typed word
void correct_word(sf::String word);
