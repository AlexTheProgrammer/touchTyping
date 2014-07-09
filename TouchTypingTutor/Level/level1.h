#ifndef TOUCHTYPINGTUTOR_LEVEL_LEVEL1_H_
#define TOUCHTYPINGTUTOR_LEVEL_LEVEL1_H_

#include <string>

#include "Level/level.h"

class Level1 : public Level {
 public:
  Level1();
  std::string getWord();
  int getWordsRemaining();
 private:
  int wordsRemaining_;
};

#endif  // TOUCHTYPINGTUTOR_LEVEL_LEVEL1_H_
