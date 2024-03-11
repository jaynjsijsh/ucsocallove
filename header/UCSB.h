#ifndef UCSB_H
#define UCSB_H

#include <iostream>

using namespace std;

#include "../header/Character.h"

class UCSB : public Character {
private:
  //something ucr only has??
public: 
  UCSB(string name, int moodPoints, vector<string> likes, vector<string> dislikes, string playerName);
  void UpdateCharacterCard();
  void DisplayMoodPoints();
  void IncreaseMoodPoints(int mPoints);
  void DisplayCharacterCard();
  void addLikes(string like);
  void addDislikes(string dislike);
  void DisplayCoffeeScene(int drink);
  void DisplayBeachScene();
  void SantiBigDate();
  void SantiLibraryScene(int option);

};

#endif