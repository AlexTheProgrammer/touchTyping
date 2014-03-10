#include "Game.h"

#include <SFML/Audio.hpp>

#include "ResourcePath.hpp"

Game::Game() : window(sf::VideoMode(800, 600), "SFML window") {
  // Set the Icon
  sf::Image icon;
  if (!icon.loadFromFile(resourcePath() + "icon.png")) {
    return;
  }
  window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
}

void Game::Run() {
  // Load a sprite to display
  sf::Texture texture;
  if (!texture.loadFromFile(resourcePath() + "cute_image.jpg")) {
    return;
  }
  sprite = sf::Sprite(texture);

  // Create a graphical text to display
  sf::Font font;
  if (!font.loadFromFile(resourcePath() + "sansation.ttf")) {
    return;
  }

  text = sf::Text("Hello SFML", font, 50);
  text.setColor(sf::Color::Black);

  // Load a music to play
  sf::Music music;
  if (!music.openFromFile(resourcePath() + "nice_music.ogg")) {
    return;
  }

  // Play the music
  music.play();

  // Start the game loop
  while (window.isOpen())
  {
    // Process events
    sf::Event event;
    while (window.pollEvent(event))
    {
      // Close window : exit
      if (event.type == sf::Event::Closed) {
        window.close();
      }

      // Escape pressed : exit
      if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
        window.close();
      }
    }

    // Clear screen
    window.clear();

    // Draw the sprite
    window.draw(sprite);

    // Draw the string
    window.draw(text);

    // Update the window
    window.display();
  }
}

