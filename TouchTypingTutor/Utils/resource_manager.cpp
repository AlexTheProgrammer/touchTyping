#include "Utils/resource_manager.h"

#include <Thor/Resources.hpp>
#include <string>

#include "Utils/resource_path.hpp"

namespace {
bool firstTime = true;
static thor::ResourceCache<sf::Font> fontCache;
static thor::ResourceCache<sf::Image> imageCache;
}

static void init() {
  if (!firstTime) {
    return;
  }
  firstTime = false;
  fontCache.setLoadingFailureStrategy(thor::Resources::LoadingFailureStrategy::ReturnNullPointer);
  imageCache.setLoadingFailureStrategy(thor::Resources::LoadingFailureStrategy::ReturnNullPointer);
}

std::shared_ptr<sf::Font> ResourceManager::FontFromFile(std::string filename) {
  init();
  return fontCache.acquire(thor::Resources::fromFile<sf::Font>(resourcePath() + filename));
}

std::shared_ptr<sf::Image> ResourceManager::ImageFromFile(std::string filename) {
  init();
  return imageCache.acquire(thor::Resources::fromFile<sf::Image>(resourcePath() + filename));
}
