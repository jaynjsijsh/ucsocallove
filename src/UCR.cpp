#include "../header/UCR.h"
#include "../header/SlowTyping.h"
#include "../header/Character.h"

//UCR::UCR();
UCR::UCR(string name, int moodPoints, vector<string> likes,
         vector<string> dislikes, string playerName) {
  this->name = name;
  this->moodPoints = moodPoints;
  this->likes = likes;
  this->dislikes = dislikes;
  this->playerName = playerName;
}

UCR::~UCR() {
  // for (auto like : likes) {
  //       delete like;
  //   }
    likes.clear();

    // for (auto dislike : dislikes) {
    //     delete dislike;
    // }
    dislikes.clear();
    
}
vector<string> UCR::GetLikes() {
  return {this->likes};
}

vector<string> UCR::GetDislikes(){
  return {this->dislikes};
}

string UCR::GetName() {
  return this->name;
}
//void UCR::UpdateCharacterCard() {}

void UCR::DisplayMoodPoints() {
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
void UCR::DisplayCharacterCard() {
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
  cout << endl;
}

void UCR::addLikes(string like) { likes.push_back(like); }
void UCR::addDislikes(string dislike) { dislikes.push_back(dislike); }
int UCR::GetMoodPoints(){return this->moodPoints;}
void UCR::IncreaseMoodPoints(int mPoints) { moodPoints += mPoints; }

// Should We include a parameter in each scene that includes the inital
// interaction's choice (ex: Since it's coffee scene, parameter for the function
// will be an int. The int represents the choice the player made about which
// drink they got)

// Ok the way this goes, Scotty asks if they want to hang out, to make sure
// we're not limiting the character with the iced latter choice. Then we are
// able to use the parameter to determine what the player chose and how the
// character will react (with a positive of negative mood point change))
void UCR::DisplayCoffeeScene(int drink) {
  int option;
  const string scottyScene{
      "\nWith Scotty: Scotty is outside, sketchbook in hand, capturing the "
      "vibrant campus life. Nature's details are fascinating, they remark, "
      "inviting you to appreciate the simple beauty around you. Would you like "
      "to hang out with me? (1 for yes, any other input is no)\n\n"};
  cout << SlowTyping(scottyScene);
  cin >> option;
  if (option == 1) {
    IncreaseMoodPoints(7);
    const string coffeeTime{
        "\nThanks for hanging out with me\n What drink did you get from here?\n"};
    cout << SlowTyping(coffeeTime);
  }
  else {
    const string rejection {"Scotty: Oh... okay, I understand. Maybe next time.\n "};
    cout << SlowTyping(rejection);
    IncreaseMoodPoints(-10);
    return;
  };

    switch (drink) {
    case 1: {
      const string drinkChoice1{
          "\n" + playerName +" : I got an expresso! \n Scotty: I hate the bitterness of a raw espresso!!\n\n"};
      cout << SlowTyping(drinkChoice1);
      IncreaseMoodPoints(-2);
      break;
    }
    case 2: {
      const string drinkChoice2{
          "\n" + playerName + ": I got an herbal tea to soothe me.\n Scotty: Ohh a soothing herbal tea is fine ig...\n\n"};
      cout << SlowTyping(drinkChoice2);
      IncreaseMoodPoints(-1);
      break;
    }
    case 3: {
      const string drinkChoice3{"\n" + playerName + ": I got an iced latte!\n Scotty: Omgmg I LOVEEEE iced Lattes.\n\n"};
      cout << SlowTyping(drinkChoice3);
      addLikes("lattes");
      break;
    }
    case 4: {
      const string drinkChoice4{
          "\n " +playerName+ ": I got a hot chocolate! \n Scotty: Hot chocolate is nice in the winter...\n\n"};
      cout << SlowTyping(drinkChoice4);
      IncreaseMoodPoints(-1);
      break;
    }
    case 5: {
      const string drinkChoice5{
          "\n" + playerName + ": I got a refreshing fruit smoothie.\n Scotty: Fruit smoothies are a no-go. I only really like caffine.\n\n"};
      cout << SlowTyping(drinkChoice5);
      IncreaseMoodPoints(-2);
      break;
    }
    default:
      
      break;
    }
  } 


void UCR::DisplayBeachScene() {
  int option;
  const string s{"Sunbathing Near Scotty\n\n"
                 "Narrator: Scotty is stretched out on a towel, their eyes "
                 "closed in serene contentment. You decide to join them, "
                 "soaking in the peaceful atmosphere.\n"
                 + playerName +": It's such a beautiful day, isn't it?\n"
                 "Scotty: Absolutely. There's something about the sun and the "
                 "sand that reconnects us to the earth.\n\n"
                 "1: Mention your appreciation for music festivals (Like)\n"
                 "2: Express disdain for outdoor activities (Dislike)"};
  cout << SlowTyping(s);
  cin >> option;
  if (option == 1) {
    addLikes("Music Festivals");
    const string s{"\nScotty: i love music festivals <33333\n"};
    cout << SlowTyping(s);
  } else if (option == 2) {
    addLikes("Music Festivals");
    const string s{"\nScotty: oh.....\n"};
    cout << SlowTyping(s);
  } else {
    // u dont learn shti
  }
}

void UCR::ScottyBigDate() {
  int option;
  const string s{
      "\nNarrator: The gentle rays of the afternoon sun cast a soft glow over "
      "the botanical gardens, where you've planned to meet Scotty for your "
      "first date. The air is filled with the fragrance of blooming flowers, "
      "and the sounds of nature create a serene backdrop. As you find Scotty "
      "waiting by a fountain, their presence seems to harmonize with the "
      "surroundings, embodying the tranquility of the gardens.\n\n"
      "Scotty: Hey! I'm glad you suggested this place. It feels like we're "
      "away from the world.\n\n"
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
        "\n" + playerName + ": How about we take the trail uphill? I bet the view from the "
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
        "\n" + playerName + ": Maybe we could sit by the koi pond? It seems like a "
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
        "\n"+ playerName +": How about a stroll through the herb garden? I've heard it's "
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
        "\n" + playerName + "Maybe we could go inside the museum? It's a bit hot, and I'd love "
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
        "\n" + playerName + ": The vegetable stew sounds amazing. It's great to enjoy "
        "something so connected to the earth.\n"
        "Scotty (if chosen): Oh, good choice! It's actually my favorite here. "
        "Love how it tastes just like a garden feels.\n\n"};
    IncreaseMoodPoints(5);
    cout << SlowTyping(option1);
    break;
  }
  case 2: {
    const string option2{"\n" + playerName + ": I think I'll go with the grilled chicken "
                         "salad. Seems like a refreshing option.\n"
                         "Scotty (neutral): That's a solid choice. Their "
                         "salads are always crisp and refreshing.\n\n"};
    IncreaseMoodPoints(3);
    cout << SlowTyping(option2);
    break;
  }
  case 3: {
    const string option3{
        "\n" + playerName + ": Maybe I'll indulge a bit and go for the cheeseburger. Comfort "
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

  if (GetMoodPoints() >= 15) {
    const string kiss{
        "Scotty: Today was... more than I could've asked for. Being with "
        "someone who appreciates the simple things, the beauty of nature... "
        "it's been really special.\n"
        "\n" + playerName + ": I feel the same. It's rare to find someone who you can share "
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
        "\n" + playerName + ": Yeah, I've enjoyed every moment of it. It's been a day full "
        "of simple pleasures and great company. \n Narrator: There's a brief "
        "pause as you both stand there, soaking in the moment. Then, almost "
        "instinctively, you extend your arms towards Scotty. \n\nOffer a hug. "
        "\n" + playerName + " action: You open your arms, and Scotty steps into a warm "
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