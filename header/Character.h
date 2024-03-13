#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include <vector>

using namespace std;

class Character {
  
public:
Character();
Character(string name, int moodPoints, vector<string> likes, vector<string> dislikes, string playerName);

//int SetMoodPoints(int moodPoints);
int GetMoodPoints();

protected:
vector<string> likes;
vector<string> dislikes;
int moodPoints;
string name;
string playerName;
bool isDate;
virtual void DisplayMoodPoints() = 0;
virtual void DisplayCharacterCard() = 0;
virtual void DisplayCoffeeScene(int drink) = 0;
void addLikes(string like);
void addDislikes(string dislike);
virtual void IncreaseMoodPoints(int mPoints) = 0;
virtual void changeDanceChoice() = 0;
virtual bool isDanceChoice() = 0;
};

#endif