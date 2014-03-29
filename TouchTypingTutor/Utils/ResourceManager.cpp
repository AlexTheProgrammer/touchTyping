#include "Utils/ResourceManager.h"

#include <Thor/Resources.hpp>
#include <string>
#include "Utils/resource_path.hpp"

std::shared_ptr<sf::Font> ResourceManager::FontFromFile(std::string filename) {
  static thor::ResourceCache<sf::Font> cache;
  return cache.acquire(thor::Resources::fromFile<sf::Font>(resourcePath() + filename));
}
