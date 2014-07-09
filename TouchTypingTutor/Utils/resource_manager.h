#ifndef TOUCHTYPINGTUTOR_UTILS_RESOURCE_MANAGER_H_
#define TOUCHTYPINGTUTOR_UTILS_RESOURCE_MANAGER_H_

#include <SFML/Graphics.hpp>
#include <string>

class ResourceManager {
 public:
  // Loads and returns the font with given filename or null if no such font can be loaded.
  static std::shared_ptr<sf::Font> FontFromFile(std::string filename);

  // Loads and returns the image with given filename or null if no such image can be loaded.
  static std::shared_ptr<sf::Image> ImageFromFile(std::string filename);

 private:
  // This class should not be instantiated.
  ResourceManager() {}
};

#endif  // TOUCHTYPINGTUTOR_UTILS_RESOURCE_MANAGER_H_
