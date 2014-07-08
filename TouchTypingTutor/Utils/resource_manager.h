#ifndef TOUCHTYPINGTUTOR_UTILS_RESOURCE_MANAGER_H_
#define TOUCHTYPINGTUTOR_UTILS_RESOURCE_MANAGER_H_

#include <SFML/Graphics.hpp>
#include <string>

class ResourceManager {
 public:
  static std::shared_ptr<sf::Font> FontFromFile(std::string filename);
  static std::shared_ptr<sf::Image> ImageFromFile(std::string filename);

 private:
  ResourceManager() {}
};

#endif  // TOUCHTYPINGTUTOR_UTILS_RESOURCE_MANAGER_H_
