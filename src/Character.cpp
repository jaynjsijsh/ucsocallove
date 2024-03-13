#include "../header/Character.h"

Character::Character()
{
   name = "";
   moodPoints = 0;
  likes = {};
  dislikes = {};
  playerName = "";
}

Character::Character(string name, int moodPoints, vector<string> likes, vector<string> dislikes, string playerName)
{
  this->name = name;
  this->moodPoints = moodPoints;
  this->likes = likes;
  this->dislikes = dislikes;
}

Character::~Character(){}

// int Character::GetMoodPoints(){
//   return moodPoints;
// }