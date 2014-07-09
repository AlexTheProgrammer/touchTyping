#include <string>
#include "Game/Models/Level1.h"

Level1::Level1() {
  for (int i =0; i <10; i++) {
    words[i] = "Hi world";
  }
}

std::string Level1::getWord() {
  if (counter != 0) {
    counter--;
    return words[counter];
  }
  return "NIL";
}
