#ifndef TOUCHTYPINGTUTOR_GAME_LEVEL_LEVEL1_H_
#define TOUCHTYPINGTUTOR_GAME_LEVEL_LEVEL1_H_

#include <string>

#include "Game/Level/level.h"

class Level1: public Level {
 public:
  Level1();
  std::string getWord();
  int getWordsRemaining();
 private:
  int wordsRemaining_;
};

#endif  // TOUCHTYPINGTUTOR_GAME_LEVEL_LEVEL1_H_
