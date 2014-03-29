#ifndef __TTT_RESOURCE_MANAGER_H_
#define __TTT_RESOURCE_MANAGER_H_

#include <SFML/Graphics.hpp>

class ResourceManager {
 public:
  static std::shared_ptr<sf::Font> FontFromFile(std::string filename);

 private:
  ResourceManager() {}
};

#endif // __TTT_RESOURCE_MANAGER_H_
