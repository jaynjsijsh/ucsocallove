#ifndef GAME_H
#define GAME_H
#include <string>
#include <iostream>


using namespace std;

class Game{
public: 
string name;
Game();

void DisplayIntroMenu();
void StartGame();
void DisplaySubMenu();
void DisplayHowToPlay();
void DisplayQuitScreen();
void GameDescription();
void DisplayOrientation();
void CoffeeScene();
void PromptSubMenu();
void BeachScene();
void Bonfire();
void LibraryScene();
void MallScene();
void DanceScene();
};

#endif