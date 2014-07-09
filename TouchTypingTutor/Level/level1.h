#ifndef TOUCHTYPINGTUTOR_LEVEL_LEVEL1_H_
#define TOUCHTYPINGTUTOR_LEVEL_LEVEL1_H_

#include <vector>
#include <string>
#include "Level/level.h"


class Level1 : public Level {
 public:
  Level1();
  std::string getWord();
};

#endif  // TOUCHTYPINGTUTOR_LEVEL_LEVEL1_H_
