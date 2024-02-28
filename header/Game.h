#ifndef GAME_H
#define GAME_H
#include <string>
#include <iostream>


using namespace std;

class Game{
public: 
Game();

void DisplayIntroMenu();
void DisplaySubMenu();
void DisplayHowToPlay();
void DisplayQuitScreen();
void GameDescription();
};

#endif