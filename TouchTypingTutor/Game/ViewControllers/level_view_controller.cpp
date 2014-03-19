//
//  level_view_controller.cpp
//  TouchTypingTutor
//
//  Created by Alexander Streeter on 13/03/2014.
//  Copyright (c) 2014 Stephen Broadfoot. All rights reserved.
//

#include "level_view_controller.h"
#include "Utils/resource_path.hpp"
#include <String>

void LevelViewController::UpdateDisplay(std::shared_ptr<sf::RenderWindow> window)
{
    //Init() will later be called from a resource manager, for now init() on every refresh to get code working.
    Init();
    window->clear(sf::Color::White);
    window->draw(text);
}

void LevelViewController::Init()
{
    //load a font
    if(!LevelViewController::font.loadFromFile(resourcePath() + "Arial.ttf"))
    {

    }
    // select the font
    LevelViewController::text.setFont(font); // font is a sf::Font
    
    // set the string to display
    LevelViewController::text.setString("Hello world");
    
    // set the character size
    LevelViewController::text.setCharacterSize(24); // in pixels, not points!
    
    // set the color
    LevelViewController::text.setColor(sf::Color::Red);
    
    // set the text style
    LevelViewController::text.setStyle(sf::Text::Bold | sf::Text::Underlined);

}

//variable Current_words to keep track of words on screen
std::string wordsOnScreen[5];
int score;
int wordCount;

//generate text: randomly generates words
sf::Text generate_word();

//print word: print word at random point at top of screen and set it cascading downwards
void print_word(std::string word)
{
    //print word at top of screen
}

//set score: set score to zero at start of game and then
int set_score();


//Pop correct typed word
void correct_word(sf::String word)
{
    for(int i = 0; i < wordCount; i++)
    {
        if(wordsOnScreen[i] == word)
        {
            score++;
            wordCount--;
            wordsOnScreen[i] = "";
        }
    }
}
