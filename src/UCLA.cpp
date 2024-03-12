#include "../header/UCLA.h"
#include "../header/SlowTyping.h"
#include <iostream>

using namespace std;

UCLA::UCLA(string name, int moodPoints, vector<string> likes,
         vector<string> dislikes, string playerName) {
  this->name = name;
  this->moodPoints = moodPoints;
  this->likes = likes;
  this->dislikes = dislikes;
  this->playerName = playerName;
}

void UCLA::UpdateCharacterCard() {
  // Update likes
  // Update dislikes
}
void UCLA::DisplayMoodPoints() {
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
void UCLA::DisplayCharacterCard() {
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

void UCLA::addLikes(string like) { likes.push_back(like); }
void UCLA::addDislikes(string dislike) { dislikes.push_back(dislike); }

void UCLA::IncreaseMoodPoints(int mPoints) { moodPoints += mPoints; }

void UCLA::DisplayCoffeeScene(int drink) {
  int option;
  const string angelScene{
      "\nWith Angel: You join Angel at a table laden with notes and laptops. Strategy is key, both in games and projects they say "
      "offering to share their insights on leadership and teamwork. Would you like "
      "to hang out with them? (1 for yes, any other input is no)\n\n"};
  cout << SlowTyping(angelScene);
  cin >> option;
  if (option == 1) {
    IncreaseMoodPoints(7);
    const string coffeeTime{
        "\nThanks for hanging out with me\n What drink did you get from here?\n"};
    cout << SlowTyping(coffeeTime);
  }
  else {
    const string rejection {"Angel: Okay, I understand. Maybe next time.\n "};
    cout << SlowTyping(rejection);
    IncreaseMoodPoints(-10);
    return;
  };

    switch (drink) {
    case 1: {
      const string drinkChoice1{
          "\n" + name +" : I got an expresso! \n Angel: I love a good espresso!! It's great that we have so much alike!\n\n"};
      cout << SlowTyping(drinkChoice1);
      IncreaseMoodPoints(3);
      addLikes("expresso");
      break;
    }
    case 2: {
      const string drinkChoice2{
          "\n" + name + ": I got an herbal tea to soothe me.\n Angel: Oh that's cool! You can't go wrong with herbal tea...\n\n"};
      cout << SlowTyping(drinkChoice2);
      IncreaseMoodPoints(1);
      break;
    }
    case 3: {
      const string drinkChoice3{"\n" + name + ": I got an iced latte!\n Angel: Oh I enjoy a good latte as well.\n\n"};
      cout << SlowTyping(drinkChoice3);
      IncreaseMoodPoints(1);
      break;
    }
    case 4: {
      const string drinkChoice4{
          "\n " +name+ ": I got a hot chocolate! \n Angel: Hot chocolate? But it's not even winter?!\n\n"};
      cout << SlowTyping(drinkChoice4);
      IncreaseMoodPoints(-2);
      break;
    }
    case 5: {
      const string drinkChoice5{
          "\n" + name + ": I got a refreshing fruit smoothie.\n Angel: Ohhh interesting! Not a big fan of those :|\n\n"};
      cout << SlowTyping(drinkChoice5);
      IncreaseMoodPoints(-1);
      break;
    }
    default:
      
      break;
    }
  } 


void UCLA::DisplayBeachScene() {
  int option;
  const string s{"Reading Beside Angel\n\n"
                 "Narrator: Angel is engrossed in a thick book, their expression "
                 "a mix of concentration and delight. You sit beside them, the sound of waves a gentle backdrop.\n"
                 + name +": It's such a beautiful day, isn't it?\n"
                 "Angel: It's an exploration of leadership strategies through history. Understanding these concepts fuels my drive for achievement.\n\n"
                 "1: Discuss the importance of museums for learning (Like)\n"
                 "2: Complain about the necessity of ambition (Dislike) "};
  cout << SlowTyping(s);
  cin >> option;
  if (option == 1) {
    addLikes("Ambition and Learning");
    const string s{"\nAngel: i love museums too! ;)\n"};
    cout << SlowTyping(s);
  } else if (option == 2) {
    addLikes("Music Festivals");
    const string s{"\nAngel: I see... well I don't necessarily agree... \n"};
    cout << SlowTyping(s);
  } else {
    // u dont learn shti
  }
}

void UCLA::AngelBigDate() {
  int option;
  const string s{
      "\nNarrator: Under the vast canopy of the museum's marbled dome, you await "
        "Angel's arrival, the air thick with anticipation and the quiet buzz of "
        "cultured discussions. Museums, where history and innovation intertwine, "
        "make the perfect playground for a mind as sharp and ambitious as Angel's. "
        "As they approach, their initial glance seems to sweep over the exhibits with a "
        "calculated curiosity, a ch allenge to the world to impress them.\n\n"
      "Angel: I must say, choosing a museum is a bold move. Let's see if the day lives up to my... our expectations.\n\n"
      "1. Suggest exploring the uphill trail for a panoramic view.\n"
      "2. Propose sitting by the koi pond for a calm reflection.\n"
      "3. Propose a leisurely walk through the aromatic herb garden.\n"
      "4. Express interest in heading inside the museum for the AC and "
      "exhibits.\n"};
  cout << SlowTyping(s);
  cin >> option;
  switch (option) {
  case 1: {
    const string option1{
        "\n" + name + ": How about we take the trail uphill? I bet the view from the "
        "top is amazing\nScotty: That sounds perfect! I love a bit of a "
        "workout and getting to explore. It's energizing, don't you "
        "think?\n\n "};
    addLikes("activities involving exploring and outdoors");
    IncreaseMoodPoints(5);
    cout << SlowTyping(option1);
    break;
  }
  case 2: {
    const string option2{
        "\n" + name + ": Maybe we could sit by the koi pond? It seems like a "
        "peaceful spot to just relax and talk. \n Scotty: I'm all for enjoying "
        "the moment, but I was hoping we could do a bit more walking. Still, "
        "this is nice.\n\n"};
    addDislikes("inactivity");
    IncreaseMoodPoints(1);
    cout << SlowTyping(option2);
    break;
  }
  case 3: {
    const string option3{
        "\nPlayer: How about a stroll through the herb garden? I've heard it's "
        "aromatic and quite relaxing.\nScotty: That sounds perfect. It's nice "
        "to slow down and enjoy the simple pleasures, like the scent of fresh "
        "herbs.\n\n"};
    addLikes("nature");
    IncreaseMoodPoints(3);
    cout << SlowTyping(option3);
    break;
  }
  case 4: {
    const string option4{
        "\nMaybe we could go inside the museum? It's a bit hot, and I'd love "
        "to enjoy the AC while looking at the exhibits.\n"
        "Scotty: Oh, I was hoping we'd spend more time outside, but sure, "
        "let's see what the exhibits offer.\n"};
    addDislikes("indoors");
    IncreaseMoodPoints(-5);
    cout << SlowTyping(option4);
    break;
  }

  default:
    cout << "Invalid input. Please type in another input" << endl;
    cin >> option;

    break;
  }

  int foodChoice;
  const string food{
      "[Scene: A Cozy Café Near the Gardens]\n\n"
      "Narrator: The late afternoon finds you and Scotty at a quaint café "
      "known for its commitment to local produce and serene garden views. The "
      "relaxed atmosphere perfectly complements the day's theme of connecting "
      "with nature.\n\n"
      "Scotty: This place has a great selection. Everything's fresh and "
      "locally sourced. Makes choosing a bit tough, huh?\n\n"

      "1.A hearty vegetable stew, rich in flavors and served with artisan "
      "bread.\n"
      "2.Grilled chicken salad with a side of fresh fruit.\n"
      "3.A classic cheeseburger with a side of seasoned fries.\n"};
cin >> foodChoice;
  switch (foodChoice) {
  case 1: {
    const string option1{
        "Player: The vegetable stew sounds amazing. It's great to enjoy "
        "something so connected to the earth.\n"
        "Scotty (if chosen): Oh, good choice! It's actually my favorite here. "
        "Love how it tastes just like a garden feels.\n\n"};
    IncreaseMoodPoints(5);
    cout << SlowTyping(option1);
    break;
  }
  case 2: {
    const string option2{"Player: I think I'll go with the grilled chicken "
                         "salad. Seems like a refreshing option.\n"
                         "Scotty (neutral): That's a solid choice. Their "
                         "salads are always crisp and refreshing.\n\n"};
    IncreaseMoodPoints(3);
    cout << SlowTyping(option2);
    break;
  }
  case 3: {
    const string option3{
        "Player: Maybe I'll indulge a bit and go for the cheeseburger. Comfort "
        "food, right?\n"
        "Scotty (negative): Ah, I usually prefer something a bit more in tune "
        "with nature. Processed foods don't really resonate with me, but go "
        "ahead and enjoy!\n\n"
        "Narrator: As you both enjoy your chosen meals, the conversation flows "
        "easily. Scotty's enthusiasm for local produce and a connection to "
        "nature becomes even more apparent, deepening the bond between you.\n"};
    IncreaseMoodPoints(-5);
    cout << SlowTyping(option3);
    break;
  }
  default:
    cout << "Invalid input. Please type in another input" << endl;
    break;
  }

  const string evening{
      "Narrator: As the evening deepens, you and Scotty meander back through "
      "the botanical gardens, now bathed in the gentle glow of moonlight. The "
      "night's serene beauty encapsulates the perfect day you've shared, "
      "filled with laughter, shared stories, and moments of quiet "
      "reflection.\n\n"};

  if (moodPoints >= 15) {
    const string kiss{
        "Scotty: Today was... more than I could've asked for. Being with "
        "someone who appreciates the simple things, the beauty of nature... "
        "it's been really special.\n"
        "Player: I feel the same. It's rare to find someone who you can share "
        "these moments with. Moments that feel genuine and fulfilling.\n"
        "Narrator: Scotty stops, turning to face you, their eyes reflecting "
        "the moonlight. The air is charged with a palpable connection between "
        "you two.\n"
        "Scotty: I'm really glad we did this. You... you've made today "
        "memorable in ways I can't fully express.\n\n"
        "* Gently, you lean in and place a soft kiss on Scotty's cheek, a "
        "silent thank you for the day *\n\n"
        "Scotty: Wow, that... that was really sweet. Thank you for today. It "
        "means a lot to me."};
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

void UCLA::AngelLibraryScene(int option){
  switch(option){
    case 1: {
      //scottys reaction to book1
      //increase or decrease mood points
      const string s { "Scotty: This book is a reflection of my own beliefs. The way it weaves the stories of people and trees together is just beautiful."};
    cout << SlowTyping(s);
    IncreaseMoodPoints(5);
    break;
    }
  case 2: {
     const string s {"Scotty: I guess understanding intuition is important, but I'd rather be outside, feeling the sun, than reading about it."};
    cout << SlowTyping(s);
    IncreaseMoodPoints(-3);
    break;
    }
  case 3: {
    const string s {"Scotty: It's a bit whimsical for my taste, but I can appreciate the creativity and magic behind the storytelling."};
    cout << SlowTyping(s);
    IncreaseMoodPoints(-2);
    break;
  }
  case 4: {
    const string s {"Scotty: I hate video games."};
    cout << SlowTyping(s);
    IncreaseMoodPoints(-5);
    break;
  } 
    case 5: {
      const string s {"Scotty: It's alright. It resonates with my own journey towards finding connection in nature."};
      cout << SlowTyping(s);
      IncreaseMoodPoints(2);
      break;
    }
  default:

    break;
  }
}