#include "../header/UCSB.h"

UCSB::UCSB(string name, int moodPoints, vector<string> likes,
         vector<string> dislikes, string playerName) {
  this->name = name;
  this->moodPoints = moodPoints;
  this->likes = likes;
  this->dislikes = dislikes;
  this->playerName = playerName;
}

void UCSB::DisplayMoodPoints() {
  if (this->GetMoodPoints() >= 10) {
    cout << "Mood Points: " << this->GetMoodPoints() << endl;
    cout << this->name << " thinks you are a lover!! <3" << endl;
  } else if (this->GetMoodPoints() >= 5) {
    cout << "Mood Points: " << this->GetMoodPoints() << endl;
    cout << this->name << " thinks you are a friend. :) " << endl;
  } else if (this->GetMoodPoints() >= 0) {
    cout << "Mood Points: " << this->GetMoodPoints() << endl;
    cout << this->name << " thinks you are a stranger... :/" << endl;
  } else {
    cout << "Mood Points: " << this->GetMoodPoints() << endl;
    cout << this->name << " hates you >:(" << endl;
  }
}

void UCSB::DisplayCharacterCard() {
  // Print name
  cout << "Name: " << this->name << endl;
  // Print likes
  cout << this->name << " likes: ";
  for (int i = 0; i < this->likes.size(); i++) {
    cout << this->likes[i] << ", ";
  }
  cout << endl;
  // Print dislikes
  cout << this->name << " dislikes: ";
  for (int i = 0; i < this->dislikes.size(); i++) {
    cout << this->dislikes[i] << ", ";
  }
}

void UCSB::addLikes(string like) { likes.push_back(like); }
void UCSB::addDislikes(string dislike) { dislikes.push_back(dislike); }

void UCSB::IncreaseMoodPoints(int mPoints) { moodPoints += mPoints; }

void UCSB::DisplayCoffeeScene(int drink) {
  int option;
  const string Scene{
      "\nWith Santi: Santi is the life of the party, even in a coffee shop."
      "Everyone has a story to tell, they proclaim, encouraging you to share yours and"
      " listen to others, making new connections. Would you like "
      "to hang out with me? (1 for yes, any other input is no)\n\n"};
  cout << SlowTyping(Scene);
  cin >> option;
  if (option == 1) {
    IncreaseMoodPoints(7);
    const string coffeeTime{
        "\nThanks for hanging out with me\n What drink did you get from here?\n"};
    cout << SlowTyping(coffeeTime);
  }
  else {
    const string rejection {"Santi: Oh... okay, I understand. Maybe next time.\n "};
    cout << SlowTyping(rejection);
    IncreaseMoodPoints(-10);
    return;
  };

    switch (drink) {
    case 1: {
      const string drinkChoice1{
          "\n" + name +" : I got an expresso! \n Santi: I hate the bitterness of a raw espresso!!\n\n"};
      cout << SlowTyping(drinkChoice1);
      break;
    }
    case 2: {
      const string drinkChoice2{
          "\n" + name + ": I got an herbal tea to soothe me.\n Scotty: Ohh a soothing herbal tea is fine ig...\n\n"};
      cout << SlowTyping(drinkChoice2);
      break;
    }
    case 3: {
      const string drinkChoice3{"\n" + name + ": I got an iced latte!\n Scotty: Omgmg I LOVEEEE iced Lattes.\n\n"};
      cout << SlowTyping(drinkChoice3);
      addLikes("lattes");
      break;
    }
    case 4: {
      const string drinkChoice4{
          "\n " +name+ ": I got a hot chocolate! \n Scotty: Hot chocolate is nice in the winter...\n\n"};
      cout << SlowTyping(drinkChoice4);
      break;
    }
    case 5: {
      const string drinkChoice5{
          "\n" + name + ": I got a refreshing fruit smoothie.\n Scotty: Fruit smoothies are a no-go. I only really like caffine.\n\n"};
      cout << SlowTyping(drinkChoice5);
      break;
    }
    default:
      
      break;
    }
  } 
