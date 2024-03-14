#ifndef UCSB_H
#define UCSB_H

#include <iostream>

using namespace std;

#include "../header/Character.h"

class UCSB : public Character {
private:
  int moodPoints;
public: 
  UCSB(string name, int moodPoints, vector<string> likes, vector<string> dislikes, string playerName);
  
  int GetMoodPoints();
  ~UCSB();
  vector<string> GetLikes();
  vector<string> GetDislikes();
  string GetName();
  void DisplayMoodPoints();
  void IncreaseMoodPoints(int mPoints);
  void DisplayCharacterCard();
  void addLikes(string like);
  void addDislikes(string dislike);
  void DisplayCoffeeScene(int drink);
  void DisplayBeachScene();
  void SantiBigDate();

};

#endif