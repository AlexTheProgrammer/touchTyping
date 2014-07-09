//
//  Level.h
//  TouchTypingTutor
//
//  Created by Alexander Streeter on 8/07/2014.
//  Copyright (c) 2014 Stephen Broadfoot. All rights reserved.
//

#ifndef __TouchTypingTutor__Level__
#define __TouchTypingTutor__Level__

#include <string>
#include <iostream>

class Level {
public:
  Level();
  virtual std::string getWord()=0;
  
protected:
  std::string words[10];
  int counter = 9;
};


#endif /* defined(__TouchTypingTutor__Level__) */
