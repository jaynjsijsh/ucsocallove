#ifndef UCSD_H
#define UCSD_H

#include <iostream>

using namespace std;

#include "Character.h"

class UCSD : public Character {
private:
  //something ucr only has??
public: 
  UCSD(string name, int moodPoints, vector<string> likes, vector<string> dislikes, string playerName);
  //void changeDanceChoice(bool isDate);
  //bool isDanceChoice();
  void DisplayMoodPoints();
  void IncreaseMoodPoints(int mPoints);
  void DisplayCharacterCard();
  void addLikes(string like);
  void addDislikes(string dislike);
  void DisplayCoffeeScene(int drink);
  void DisplayBeachScene();
  void UCSDBigDate();
  //void UCSDLibraryScene(int option);
  //void UCSDDanceScene(int outfitChoice);
};

#endif 