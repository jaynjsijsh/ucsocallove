#include "../header/UCSD.h"
#include "../header/SlowTyping.h"
#include "../header/Character.h"
using namespace std;
#include <iostream>
#include <vector>


UCSD::UCSD(string name, int moodPoints, vector<string> likes,
         vector<string> dislikes, string playerName) {
  this->name = name;
  this->moodPoints = moodPoints;
  this->likes = likes;
  this->dislikes = dislikes;
  this->playerName = playerName;
}

UCSD::~UCSD() {
  // for (auto like : likes) {
  //       delete like;
  //   }
    likes.clear();

    // for (auto dislike : dislikes) {
    //     delete dislike;
    // }
    dislikes.clear();
    
}

vector<string> UCSD::GetLikes() {
  return {this->likes};
}

vector<string> UCSD::GetDislikes(){
  return {this->dislikes};
}

string UCSD::GetName() {
  return this->name;
}

void UCSD::SetPlayerName(string n){
  this->playerName = n;
}
int UCSD::GetMoodPoints(){return this->moodPoints;}

void UCSD::DisplayMoodPoints() {
  if (this->GetMoodPoints() >= 10) {
    std::cout << "Mood Points: " << this->GetMoodPoints() << endl;
    std::cout << this->name << " thinks you are a lover!! <3" << endl;
  } else if (this->GetMoodPoints() >= 5) {
    std::cout << "Mood Points: " << this->GetMoodPoints() << endl;
    std::cout << this->name << " thinks you are a friend. :) " << endl;
  } else if (this->GetMoodPoints() >= 0) {
    std::cout << "Mood Points: " << this->GetMoodPoints() << endl;
    std::cout << this->name << " thinks you are a stranger... :/" << endl;
  } else {
    std::cout << "Mood Points: " << this->GetMoodPoints() << endl;
    std::cout << this->name << " hates you >:(" << endl;
  }
}
void UCSD::DisplayCharacterCard() {
  // Print name
  std::cout << "Name: " << this->name << endl;
  // Print likes
  std::cout << this->name << " likes: ";
  for (int i = 0; i < this->likes.size(); i++) {
    std::cout << this->likes[i] << ", ";
  }
  std::cout << endl;
  // Print dislikes
  std::cout << this->name << " dislikes: ";
  for (int i = 0; i < this->dislikes.size(); i++) {
    std::cout << this->dislikes[i] << ", ";
  }
  cout << endl;
}

void UCSD::addLikes(string like) { likes.push_back(like); }
void UCSD::addDislikes(string dislike) { dislikes.push_back(dislike); }

void UCSD::IncreaseMoodPoints(int mPoints) { moodPoints += mPoints; }

void UCSD::DisplayCoffeeScene(int drink) {
  int option;
  const string trisScene{
      "\nYou stumble upon Tris deeply engrossed in a portable game console. Curious, you ask about the game," 
      "and Tris's explanation turns into an impromptu gaming session. Their passion for innovation and strategy "
      "shines through, and their patience in teaching you the ropes reveals a caring side. "
      "Would you like to hang out with me? (1 for yes, any other input is no)\n\n"};

  std::cout << SlowTyping(trisScene);
  std::cin >> option;
  if (option == 1) {
    IncreaseMoodPoints(7);
    const string coffeeTime{
        "\nThanks for hanging out with me\n What drink did you get from here?\n"};
    std::cout << SlowTyping(coffeeTime);
  }
  else {
    const string rejection {"Tris: Oh... okay, I understand. You're a bum.\n "};
    std::cout << SlowTyping(rejection);
    IncreaseMoodPoints(-10);
    return;
  };

    switch (drink) {
    case 1: {
      const string drinkChoice1{
          "\n" + playerName +" : I got an expresso! \n\n"
          " Tris: Espresso embodies a certain boldness, doesn't it? It's direct, potent, a bit too much for me. \n\n"};
      std::cout << SlowTyping(drinkChoice1);
      break;
    }
    case 2: {
      const string drinkChoice2{
          "\n" + playerName + ": I got an herbal tea to soothe me.\n\n "
          " Tris: Herbal tea is like a quiet conversation, understated and serene. It's pleasant but forgettable. \n\n"};
      std::cout << SlowTyping(drinkChoice2);
      break;
    }
    case 3: {
      const string drinkChoice3{"\n" + playerName + ": I got an iced latte!\n\n "
      "Tris:  It's an agreeable choice for many, but I find it lacks character.\n\n"};
      std::cout << SlowTyping(drinkChoice3);
      break;
    }
    case 4: {
      const string drinkChoice4{
          "\n " +playerName+ ": I got a hot chocolate! \n\n "
          "Tris: Oh, hot chocolate! Now that's what I'm talking about. It's just perfect—warm, sweet, and it makes you feel good. Definitely my go-to drink. It's like getting a cozy hug in a mug!\n\n"};
      std::cout << SlowTyping(drinkChoice4);
      addLikes("Hot Chocolate");
      break;
    }
    case 5: {
      const string drinkChoice5{
          "\n" + playerName + ": I got a refreshing fruit smoothie.\n\n "
          "Tris:  It's an agreeable choice for many, but I find it lacks character.\n\n"};
      std::cout << SlowTyping(drinkChoice5);
      break;
    }
    default:
      
      break;
    }
  } 


void UCSD::DisplayBeachScene() {
  int option;
  const string s{" Traverse the shoreline in search of unique seashells with Tris\n\n"
                "Narrator: You approach Tris, who's meticulously sorting through seashells by the water's edge."
                "Their focus is palpable, each shell a testament to the ocean's secret life.\n \n"
                 + playerName +": These shells are fascinating. What draws you to them? \n"
                 "Tris: Each one tells a story, a snapshot of the ocean's vast ecosystem. \n"
                "It's the thrill of discovery, of finding order in chaos.\n \n"
                 "1: Ask about their love for diving\n"
                 "2: Suggest moving to a crowded part of the beach \n"};
  std::cout << SlowTyping(s);
  std::cin >> option;
  if (option == 1) {
    addLikes("Diving");
    const string s{"\n Tris: Diving is amazing. It's like being in a whole new world, so peaceful and so different. It makes you appreciate the quiet and the beauty down there.\n"};
    std::cout << SlowTyping(s);
  } else if (option == 2) {
    addLikes("Diving");
    const string s{"\nTris: Hmm, I prefer the quiet. I hate seeing people.\n\n"};
    std::cout << SlowTyping(s);
  } else {
    // u dont learn shti
  }
}

void UCSD::UCSDBigDate() {
  int option;
  const string s{
      "\n Narrator: As you step into the dimly lit aquarium, the sound of water and the soft ambient music "
      "transport you into an underwater world. It's here, among the serene beauty of marine life, where you've"
      " agreed to meet Tris for an intriguing first date. The aquarium offers a stark contrast to the usual "
      "date settings, providing a backdrop that's both mysterious and calming. As you spot Tris standing near"
      " a large, mesmerizing jellyfish exhibit, their contemplative gaze seems to mirror the depth and mystery "
      " of the ocean itself. \n"
      "Tris: Hey... I'm glad you chose this place. It's... different. Quiet, but filled with mysteries of the deep. \n\n"

      "1. Propose exploring the ethereal jellyfish exhibit.\n"
      "2. Propose a visit to the colorful tropical fish section..\n"
      "3. Suggest attending the interactive dolphin show.\n"
      "4. Express interest in the deep-sea creatures exhibit.\n"};

  std::cout << SlowTyping(s);
  cin >> option;
  switch (option) {
  case 1: {
    const string option1{
        "\n" + playerName + ": The jellyfish exhibit seems otherworldly. Care to drift along with the current for a bit?\n\n "
        "Tris: Yeah, I do. They're like living dreams, aren't they? Ghostly and graceful... I could watch them for hours.\n\n "};
    addLikes("Jellyfish");
    IncreaseMoodPoints(5);
    std::cout << SlowTyping(option1);
    break;
  }
  case 2: {
    const string option2{
        "\n" + playerName + ": How about we visit the tropical fish section? The colors and variety seem amazing. \n \n"
        "Tris: Sure, I guess it's... visually stimulating. But sometimes, I wonder if they miss the open sea. \n \n"};
    addDislikes("Forced enclosure");
    IncreaseMoodPoints(1);
    std::cout << SlowTyping(option2);
    break;
  }
  case 3: {
    const string option3{
        "\n" + playerName + ": Maybe we could catch the dolphin show? It's supposed to be interactive and fun. \n\n"
      "Tris: Hmm, I'm not really into performances. Feels a bit too... cheerful and loud for my taste. \n\n"};
    addDislikes("Interactions");
    IncreaseMoodPoints(-5);
    std::cout << SlowTyping(option3);
    break;
  }
  case 4: {
    const string option4{
        "\n" + playerName + ": I'm curious about the deep-sea creatures exhibit. It's a glimpse into an almost alien world.\n\n"
        "Tris: Ah, now that's more my speed. There's something hauntingly beautiful about the creatures that thrive in complete darkness.\n\n"};
    addLikes("Beautiful darkness");
    IncreaseMoodPoints(3);
    std::cout << SlowTyping(option4);
    break;
  }

  default:
    std::cout << "Invalid input. Please type in another input" << endl;
    cin >> option;

    break;
  }

  int foodChoice;
  const string food{
      "[Scene:  An Intimate Japanese Restaurant]\n\n"
      "Narrator: Evening's approach softly dims the sky as you and Tris step into "
      " a Japanese restaurant that whispers of tranquility. The delicate clinking "
      "of dishware and the subtle infusion of oceanic aromas suggest it's the simplicity "
      "and the subtle art of the cuisine that take center stage. \n\n"
      "Tris: This place... it's got a quiet charm, doesn't it? Feels like everything's "
      "chosen with intention, from the decor to the menu. \n \n"

      "What would you like to eat? \n"
      "1.An elegantly arranged sushi platter \n"
      "2.A warming bowl of miso soup with a side of tempura \n"
      "3.A lavish chirashi bowl, a colorful array of fish on a bed of sushi rice.\n"};
      cout << SlowTyping(food);
cin >> foodChoice;
  switch (foodChoice) {
  case 1: {
    const string option1{
        "\n" + playerName + ": I'm thinking about the sushi platter. It looks like an edible form of art.\n\n"
        "Tris: Good eye. Sushi is honest food. Simple ingredients, but it's all about the craft. It's... genuine, which is refreshing.\n\n"
        
        "Narrator:The lunch unfolds slowly, each bite and word shared adding another stitch to the fabric"
        " of your growing connection. Tris's reflective nature turns the meal into an experience not just "
        "of flavors, but of thoughts and shared silences that speak as loud as words..\n\n"};
    IncreaseMoodPoints(5);
    std::cout << SlowTyping(option1);
    break;
  }
  case 2: {
    const string option2{
      "\n" + playerName + ": How about some miso soup to start? It's soul-warming, and maybe some tempura on the side?\n"
      "Tris: Miso is comforting, and tempura? I guess it has its place. Sometimes you need a bit of crunch.\n\n"
      
      "Narrator:The lunch unfolds slowly, each bite and word shared adding another stitch to the fabric"
        " of your growing connection. Tris's reflective nature turns the meal into an experience not just "
        "of flavors, but of thoughts and shared silences that speak as loud as words..\n\n"};
    IncreaseMoodPoints(3);
    std::cout << SlowTyping(option2);
    break;
  }
  case 3: {
    const string option3{
       "\n" + playerName + ": The chirashi bowl seems interesting. It's kind of like a treasure box of the sea.\n\n"
        "Tris: Chirashi? It's a bit... scattered for me. Too many things going on. I prefer when the flavors have space to breathe.\n\n"

        "Narrator:The lunch unfolds slowly, each bite and word shared adding another stitch to the fabric"
        " of your growing connection. Tris's reflective nature turns the meal into an experience not just "
        "of flavors, but of thoughts and shared silences that speak as loud as words..\n\n"};
    IncreaseMoodPoints(-5);
    std::cout << SlowTyping(option3);
    break;
  }
  default:
    std::cout << "Invalid input. Please type in another input" << endl;
    break;
  }

  const string evening{
      "Narrator: As the evening unfolds, a quiet stroll with Tris through the beach feels "
      " like the world is holding its breath. The moon casts a gentle glow on the path ahead, revealing"
      " the night's serene beauty—a fitting end to a day that has been both engaging and introspective.\n\n"};
      cout << SlowTyping(evening);

  if (moodPoints >= 15) {
    const string kiss{
        "Tris: Today was... more than I could've asked for. Being with "
        "someone who appreciates the simple things, the beauty of nature... "
        "it's been really special.\n"
        "\n" + playerName + ": I feel the same. It's rare to find someone who you can share "
        "these moments with. Moments that feel genuine and fulfilling.\n"
        "Narrator: Tris stops, turning to face you, their eyes reflecting "
        "the moonlight. The air is charged with a palpable connection between "
        "you two.\n"
        "Tris: I'm really glad we did this. You... you've made today "
        "memorable in ways I can't fully express.\n\n"
        "* Gently, you lean in and place a soft kiss on Tris's cheek, a "
        "silent thank you for the day *\n\n"
        "Tris: Wow, that... that was really sweet. Thank you for today. It "
        "means a lot to me."};
    std::cout << SlowTyping(kiss);
  } else if (moodPoints <= 7) {
    const string hug{
        "Tris: You know, I wasn't sure what to expect from today, but I'm "
        "really happy we spent it together. It's been... nice, really nice. \n "
        "\n" + playerName + ": Yeah, I've enjoyed every moment of it. It's been a day full "
        "of simple pleasures and great company. \n Narrator: There's a brief "
        "pause as you both stand there, soaking in the moment. Then, almost "
        "instinctively, you extend your arms towards Tris. \n\nOffer a hug. "
        "\n*You open your arms, and Tris steps into a warm "
        "embrace, a comforting end to the day.*\n\nTris: This hug... it's "
        "perfect. Thanks for being here, for making today what it was.\n\n"};
    std::cout << SlowTyping(hug);
  }
  else {
    const string reject {
      
    };
  }

  const string lastScene{
      "Narrator: The gesture cements a day of shared experiences and mutual "
      "affection. As you part ways, you feel a promise in the air, a hint of "
      "more days like this to come.\n"};
  std::cout << SlowTyping(lastScene);
}

