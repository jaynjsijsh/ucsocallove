#ifndef UCR_H
#define UCR_H
#include "../header/Character.h"
#include <iostream>

using namespace std;



class UCR : public Character {
private:
  //something ucr only has??
  int moodPoints;
public: 
  //UCR();
  UCR(string name, int moodPoints, vector<string> likes, vector<string> dislikes, string playerName);
  
  int GetMoodPoints();
  ~UCR();
  vector<string> GetLikes();
  vector<string> GetDislikes();
  string GetName();
  //void UpdateCharacterCard();
  void DisplayMoodPoints();
  void IncreaseMoodPoints(int mPoints);
  void DisplayCharacterCard();
  void addLikes(string like);
  void addDislikes(string dislike);
  void DisplayCoffeeScene(int drink);
  void DisplayBeachScene();
  void ScottyBigDate();

};

#endif 