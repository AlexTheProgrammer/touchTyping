#ifndef TOUCHTYPINGTUTOR_LEVEL_LEVEL_H_
#define TOUCHTYPINGTUTOR_LEVEL_LEVEL_H_

#include <string>

class Level {
 public:
  virtual std::string getWord()=0;
 protected:
  std::string words[10];
  int counter = 9;
};


#endif  // TOUCHTYPINGTUTOR_LEVEL_LEVEL_H_
