#ifndef UCLA_H
#define UCLA_H

#include <iostream>

using namespace std;

#include "Character.h"

class UCLA : public Character {
private:
  //something ucr only has??
public: 
  UCLA(string name, int moodPoints, vector<string> likes, vector<string> dislikes);
  void UpdateCharacterCard();
  void DisplayMoodPoints();
  void DisplayCharacterCard();


};

#endif 