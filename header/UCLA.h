#ifndef UCLA_H
#define UCLA_H

#include <iostream>
using namespace std;
#include "../header/Character.h"

class UCLA : public Character {
private:
int moodPoints;
public: 
  UCLA(string name, int moodPoints, vector<string> likes, vector<string> dislikes, string playerName);

  int GetMoodPoints();
  ~UCLA();
  vector<string> GetLikes();
  vector<string> GetDislikes();
  string GetName();
  void SetPlayerName(string n);
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