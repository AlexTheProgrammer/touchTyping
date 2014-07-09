#ifndef TOUCHTYPINGTUTOR_GAME_LEVEL_LEVEL_H_
#define TOUCHTYPINGTUTOR_GAME_LEVEL_LEVEL_H_

#include <string>

class Level {
 public:
  // Returns non-empty string containing the next word in the level, or NULL if getWordsRemaining
  // returns 0.
  virtual std::string getWord() = 0;

  // Returns the number of words remaining in the level.
  virtual int getWordsRemaining() = 0;
};

#endif  // TOUCHTYPINGTUTOR_GAME_LEVEL_LEVEL_H_
