#ifndef UCI_H
#define UCI_H
#include "../header/Character.h"
#include <iostream>

using namespace std;

class UCI : public Character {
private:
  //something ucr only has??
  int moodPoints;
public: 
  UCI(string name, int moodPoints, vector<string> likes, vector<string> dislikes, string playerName);
  ~UCI();

  vector<string> GetLikes();
  vector<string> GetDislikes();
  string GetName();
  
  void UpdateCharacterCard();
  void DisplayMoodPoints();
  void IncreaseMoodPoints(int mPoints);
  int GetMoodPoints();
  void DisplayCharacterCard();
  void addLikes(string like);
  void addDislikes(string dislike);
  void DisplayCoffeeScene(int drink);
  void DisplayBeachScene();
  void PetaBigDate();

};

#endif