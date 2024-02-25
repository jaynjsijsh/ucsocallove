#include "Character.h"

Character::Character()
{
  name = "";
  moodPoints = 0;
  likes = {};
  dislikes = {};
}

Character::Character(string name, int moodPoints, vector<string> likes, vector<string> dislikes)
{
  this->name = name;
  this->moodPoints = moodPoints;
  this->likes = likes;
  this->dislikes = dislikes;
}

int Character::IncreaseMoodPoints(int mPoints){
  moodPoints += mPoints;
  return moodPoints;
}

int Character::GetMoodPoints(){
  return moodPoints;
}

