#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include <vector>

using namespace std;

class Character {
  
public:
Character();
Character(string name, int moodPoints, vector<string> likes, vector<string> dislikes);

//int SetMoodPoints(int moodPoints);
int IncreaseMoodPoints(int mPoints);
int GetMoodPoints();

protected:
vector<string> likes;
vector<string> dislikes;
int moodPoints;
string name;
//virtual void UpdateCharacterCard() = 0;
virtual void DisplayMoodPoints() = 0;
virtual void DisplayCharacterCard() = 0;
void addLikes(string like);
void addDislikes(string dislike);
};

#endif