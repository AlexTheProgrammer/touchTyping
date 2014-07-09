#include "Game/Level/level1.h"

#include <string>

namespace {
const int kNumberOfWords = 5;
const char *kWords[] = {"a", "as", "asd", "asdf", "asdfg"};
}

Level1::Level1() : wordsRemaining_(kNumberOfWords) {}

std::string Level1::getWord() {
  if (wordsRemaining_ > 0) {
    --wordsRemaining_;
    return kWords[kNumberOfWords - wordsRemaining_ - 1];
  }
  return NULL;
}

int Level1::getWordsRemaining() {
  return wordsRemaining_;
}
