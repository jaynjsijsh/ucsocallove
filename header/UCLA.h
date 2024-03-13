#ifndef UCLA_H
#define UCLA_H

#include <iostream>
using namespace std;

#include "Character.h"

class UCLA : public Character {
private:
public: 
  UCLA(string name, int moodPoints, vector<string> likes, vector<string> dislikes, string playerName);
  void UpdateCharacterCard();
  void DisplayMoodPoints();
  void IncreaseMoodPoints(int mPoints);
  void DisplayCharacterCard();
  void addLikes(string like);
  void addDislikes(string dislike);
  void DisplayCoffeeScene(int drink);
  void DisplayBeachScene();
  void AngelBigDate();


};

#endif 