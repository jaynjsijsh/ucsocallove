#ifndef UCR_H
#define UCR_H

#include <iostream>

using namespace std;

#include "../header/Character.h"

class UCR : public Character {
private:
  //something ucr only has??
public: 
  UCR(string name, int moodPoints, vector<string> likes, vector<string> dislikes, string playerName);
  void UpdateCharacterCard();
  void DisplayMoodPoints();
  void IncreaseMoodPoints(int mPoints);
  void DisplayCharacterCard();
  void addLikes(string like);
  void addDislikes(string dislike);
  void DisplayCoffeeScene();
};

#endif 