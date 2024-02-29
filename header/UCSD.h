#ifndef UCSD_H
#define UCSD_H

#include <iostream>

using namespace std;

#include "Character.h"

class UCSD : public Character {
private:
  //something ucr only has??
public: 
  UCSD(string name, int moodPoints, vector<string> likes, vector<string> dislikes);
  void UpdateCharacterCard();
  void DisplayMoodPoints();
  void DisplayCharacterCard();


};

#endif 