//
//  Level1.h
//  TouchTypingTutor
//
//  Created by Alexander Streeter on 8/07/2014.
//  Copyright (c) 2014 Stephen Broadfoot. All rights reserved.
//

#ifndef __TouchTypingTutor__Level1__
#define __TouchTypingTutor__Level1__

#include <vector>
#include <string>
#include <iostream>
#include "Level.h"


class Level1 : public Level {
public:
  Level1();
  std::string getWord();
};

#endif /* defined(__TouchTypingTutor__Level1__) */
