#ifndef TOUCHTYPINGTUTOR_UTILS_RESOURCEMANAGER_H_
#define TOUCHTYPINGTUTOR_UTILS_RESOURCEMANAGER_H_

#include <SFML/Graphics.hpp>
#include <string>

class ResourceManager {
 public:
  static std::shared_ptr<sf::Font> FontFromFile(std::string filename);

 private:
  ResourceManager() {}
};

#endif  // TOUCHTYPINGTUTOR_UTILS_RESOURCEMANAGER_H_
