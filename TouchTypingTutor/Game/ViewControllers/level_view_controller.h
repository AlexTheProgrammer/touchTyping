//
//  level_view_controller.h
//  TouchTypingTutor
//
//  Created by Alexander Streeter on 13/03/2014.
//  Copyright (c) 2014 Stephen Broadfoot. All rights reserved.
//

#ifndef __TouchTypingTutor__level_view_controller__
#define __TouchTypingTutor__level_view_controller__

#include <iostream>
#include "Game/ViewControllers/view_controller.h"


class LevelViewController: public ViewController{
public:
    sf::Text text;
    sf::Font font;
    void UpdateDisplay(std::shared_ptr<sf::RenderWindow> window);
    void Init();
};

#endif /* defined(__TouchTypingTutor__level_view_controller__) */
