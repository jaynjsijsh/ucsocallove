#include "../header/Character.h"

Character::Character()
{
  string name = "";
  int moodPoints = 0;
  vector<string> likes = {};
  vector<string> dislikes = {};
  string playerName = "";
}

Character::Character(string name, int moodPoints, vector<string> likes, vector<string> dislikes, string playerName)
{
  this->name = name;
  this->moodPoints = moodPoints;
  this->likes = likes;
  this->dislikes = dislikes;
}


int Character::GetMoodPoints(){
  return moodPoints;
}

