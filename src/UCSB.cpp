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
          "\n" + name + ": I got an herbal tea to soothe me.\n Santi: A soothing herbal tea always helps to calm me.\n\n"};
      cout << SlowTyping(drinkChoice2);
      break;
    }
    case 3: {
      const string drinkChoice3{"\n" + name + ": I got an iced latte!\n Santi: I'm not really a big fan of caffeine\n\n"};
      cout << SlowTyping(drinkChoice3);
      break;
    }
    case 4: {
      const string drinkChoice4{
          "\n " +name+ ": I got a hot chocolate! \n Santi: Hot chocolate is nice in the winter...\n\n"};
      cout << SlowTyping(drinkChoice4);
      break;
    }
    case 5: {
      const string drinkChoice5{
          "\n" + name + ": I got a refreshing fruit smoothie.\n Santi: Fruit smoothies are my fave! I always go for the tropical ones.\n\n"};
      cout << SlowTyping(drinkChoice5);
      addLikes("Fruit smoothies");
      break;
    }
    default:
      
      break;
    }
  } 

void UCSB::DisplayBeachScene() {
  int option;
  const string s{"Narrator: Santi is in the middle of a heated volleyball game, their energy infectious."
  " You jump in, caught up in the excitement and camaraderie.\n"
  + name + ": You're really into this game, aren't you?\n"
  " Santi: There's nothing like the thrill of the game. It's all about living in the moment and enjoying life to the fullest.\n\n"

                 "1: Express your love for parties (Like)"
                "2: Complain about the noise and chaos of parties (Dislike)"};
  cout << SlowTyping(s);
  cin >> option;
  if (option == 1) {
    addLikes("Parties");
    const string s{"\nSanti: Partying is one of my favorite activities!!\n"};
    cout << SlowTyping(s);
  } else if (option == 2) {
    addLikes("Parties");
    const string s{"\nSanti: oh.....\n"};
    cout << SlowTyping(s);
  } else {
    // u dont learn shti
  }
}

void UCSB::SantiBigDate() {
  int option;
  const string s{
      "\nNarrator: The sun begins its descent, casting a golden hue over the UCSB campus. Santi,"
      " with their unmistakable energy, has invited you to a beach party, promising an evening of fun, "
      "freedom, and unforgettable memories.\n\n"

      "[The scene shifts to the beach, where the party is in full swing]\n\n"

      "Santi: Glad you could make it! There's no place like the beach at sunset. What do you say we kick off with some beach volleyball?\n\n"

      "1. Join in on the volleyball game.\n"
      "2. Suggest a walk along the shore.\n"
      "3. Opt for a quiet spot to watch the sunset together.\n"};
  cout << SlowTyping(s);
  cin >> option;
  switch (option) {
  case 1: {
    const string option1{
        "\n" + name + ": How about we take part in the volleyball game going on? I bet it'll be super fun. "
        "top is amazing\nSanti: Santi: That's the spirit! Let's show them what we've got!\n The game is intense and exhilarating, with Santi "
        "and cheering every point. Their competitive yet playful nature shines through, making the activity even more enjoyable.\n\n "};
    addLikes("volleyball");
    IncreaseMoodPoints(5);
    cout << SlowTyping(option1);
    break;
  }
  case 2: {
    const string option2{
        "\n" + name + ": How about a stroll along the shore? I've heard it's "
        "aromatic and quite relaxing.\nSanti: A walk sounds perfect. There's something about the ocean... It's"
        " like instant peace.\n As you walk, Santi shares stories of their adventures at UCSB, their love for the"
        " ocean evident in every word. The walk turns into a moment of connection, set against the soothing backdrop of waves.\n\n"};
    addLikes("beach walks");
    IncreaseMoodPoints(1);
    cout << SlowTyping(option2);
    break;
  }
  case 3: {
    const string option3{
        "\n" + name + ": How about watching the sunset?\nSanti: um... I'm more for something active but I guess we can watch"
        "the sunset if thats what you enjoy.\n Although you enjoy watching the sun set, you see Santi frowning through the corner of your eye.\n\n"};
    IncreaseMoodPoints(-3);
    addDislikes("inactivity");
    cout << SlowTyping(option3);
    break;
  }
 

  default:
    cout << "Invalid input. Please type in another input" << endl;
    cin >> option;

    break;
  }

  int foodChoice;
  const string food{
      "[Scene: A Sunset Barbeque]\n\n"
      "Narrator: As the sun dips lower, casting a warm glow over the beach, Santi guides you to the barbecue area, "
      "where the scent of grilling fills the air. Their enthusiasm is contagious, promising a feast not just for the "
      "stomach but for the soul.\n\n"

      "Santi: Ready for some classic UCSB grub? I hope you brought your appetite!\n\n"

      "1. Grilled Seafood\n"
      "2. Vegetarian Skewers\n"
      "3. BBQ Ribs\n"};
cin >> foodChoice;
  switch (foodChoice) {
  case 1: {
    const string option1{
        "\n" + name + ": The grilled seafood sounds amazing. It's great to enjoy "
        "something so connected to the earth.\n"
        "Santi : Ah, you're a person of the ocean, I see! These are fresh from today's "
        "catch. Can't get more Santa Barbara than this\n\n"};
    IncreaseMoodPoints(5);
    cout << SlowTyping(option1);
    break;
  }
  case 2: {
    const string option2{"Player: I think I'll go with the vegetable skewers "
                         "salad. Seems like a refreshing option.\n"
                         "Santi: ugh I'm not a fan of vegetables.\n\n"};
    IncreaseMoodPoints(3);
    cout << SlowTyping(option2);
    break;
  }
  case 3: {
    const string option3{
        "Player: Maybe I'll indulge a bit and go for the ribs. Comfort "
        "food, right?\n"
        "Santi: Now you're speaking my language! These ribs are a local favorite, "
        "slow-cooked to perfection. Get ready for a flavor explosion!\n\n"};
    IncreaseMoodPoints(10);
    cout << SlowTyping(option3);
    break;
  }
  default:
    cout << "Invalid input. Please type in another input" << endl;
    break;
  }
  const string endScene {"Narrator: As you enjoy your meal, Santi shares tales of beach bonfires, "
  "surfing at dawn, and the vibrant student life at UCSB. The food, much like the company, leaves "
  "you feeling satisfied and eager for more adventures with Santi.\n\n"};
  cout << SlowTyping(endScene);

  if (moodPoints >= 15) {
    const string kiss{
        "As the party dwindles and the fire casts a warm glow, Santi leads you away from the crowd to "
        "a quiet spot by the shore. The sound of waves and the soft sand beneath your feet set a perfect backdrop.\n\n"

        "Santi: Today was amazing, wasn't it? There's something magical about the beach at night.\n\n"

        "You nod, your heart racing as you turn to face them, the moonlight reflecting in their eyes.\n\n"

        + name + ": It was unforgettable, thanks to you. I've never felt so alive.\n\n"

        "Santi steps closer, the distance between you melting away. You can feel their breath on your face.\n\n "

        "Santi: I'm glad I got to share it with you. You make every moment brighter.\n\n"

        "Leaning in, your lips meet in a gentle, lingering kiss that feels like the culmination of the day's shared joy and connection.\n\n"};
    cout << SlowTyping(kiss);
  } else {
    const string hug{
        "Scotty: You know, I wasn't sure what to expect from today, but I'm "
        "really happy we spent it together. It's been... nice, really nice. \n "
        "Player: Yeah, I've enjoyed every moment of it. It's been a day full "
        "of simple pleasures and great company. \n Narrator: There's a brief "
        "pause as you both stand there, soaking in the moment. Then, almost "
        "instinctively, you extend your arms towards Scotty. \n\nOffer a hug. "
        "\nPlayer action: You open your arms, and Scotty steps into a warm "
        "embrace, a comforting end to the day.\n\nScotty: This hug... it's "
        "perfect. Thanks for being here, for making today what it was.\n\n"};
    cout << SlowTyping(hug);
  }

  const string lastScene{
      "Narrator: The gesture cements a day of shared experiences and mutual "
      "affection. As you part ways, you feel a promise in the air, a hint of "
      "more days like this to come.\n"};
  cout << SlowTyping(lastScene);
}
