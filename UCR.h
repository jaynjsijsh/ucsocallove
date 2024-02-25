#ifndef UCR_H
#define UCR_H

#include <iostream>

using namespace std;

#include "Character.h"

class UCR : public Character {
private:
  //something ucr only has??
public: 
  UCR(string name, int moodPoints, vector<string> likes, vector<string> dislikes);
  void UpdateCharacterCard();
  void DisplayMoodPoints();
  void DisplayCharacterCard();


};

#endif 