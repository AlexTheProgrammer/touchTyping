#include "Game/ViewControllers/level_view_controller.h"

#include "Game/Level/level.h"
#include "Game/Level/level1.h"
#include "Utils/resource_manager.h"

namespace {
const char kFontFilename[] = "Arial.ttf";
const int kFontSize = 24;
const sf::Color kFontColor = sf::Color::Red;
const sf::Uint32 kFontStyle = sf::Text::Bold | sf::Text::Underlined;
const int kTextScrollSpeed = 100;

const sf::Color kBackgroundColor = sf::Color::White;
}

void LevelViewController::Init() {
  level_ = std::shared_ptr<Level>(new Level1());

  text_.setFont(*ResourceManager::FontFromFile(kFontFilename));
  text_.setString(level_->getWord());
  text_.setCharacterSize(kFontSize);
  text_.setColor(kFontColor);
  text_.setStyle(kFontStyle);
}

void LevelViewController::UpdateDisplay(sf::RenderWindow *window, const sf::Time &elapsed) {
  if (text_.getPosition().y >= window->getSize().y) {
    text_.setPosition(0, 0);
  }
  text_.move(0, kTextScrollSpeed * elapsed.asSeconds());
  window->clear(kBackgroundColor);
  window->draw(text_);
}
