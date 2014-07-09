#ifndef TOUCHTYPINGTUTOR_GAME_MODELS_LEVEL1_H_
#define TOUCHTYPINGTUTOR_GAME_MODELS_LEVEL1_H_

#include <vector>
#include <string>
#include "Game/Models/Level.h"


class Level1 : public Level {
 public:
  Level1();
  std::string getWord();
};

#endif  // TOUCHTYPINGTUTOR_GAME_MODELS_LEVEL1_H_
