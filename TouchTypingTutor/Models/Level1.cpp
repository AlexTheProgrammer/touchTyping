//
//  Level1.cpp
//  TouchTypingTutor
//
//  Created by Alexander Streeter on 8/07/2014.
//  Copyright (c) 2014 Stephen Broadfoot. All rights reserved.
//

#include <string>
#include "Level1.h"

Level1::Level1() {
  for(int i =0; i <10; i++) {
    words[i] = "Hi world";
  }
}

std::string Level1::getWord() {
  if(counter != 0) {
    counter--;
    return words[counter];
  }
  return "NIL";
}