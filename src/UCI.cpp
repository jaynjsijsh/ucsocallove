#include "../header/UCI.h"
#include "../header/SlowTyping.h"
#include "../header/Character.h"

UCI::UCI(string name, int moodPoints, vector<string> likes,
         vector<string> dislikes, string playerName) {
  this->name = name;
  this->moodPoints = moodPoints;
  this->likes = likes;
  this->dislikes = dislikes;
  this->playerName = playerName;
}

UCI::~UCI() {
  // for (auto like : likes) {
  //       delete like;
  //   }
    likes.clear();

    // for (auto dislike : dislikes) {
    //     delete dislike;
    // }
    dislikes.clear();
    
}

vector<string> UCI::GetLikes() {
  return {this->likes};
}

vector<string> UCI::GetDislikes(){
  return {this->dislikes};
}

string UCI::GetName() {
  return this->name;
}

void UCI::DisplayMoodPoints() {
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
void UCI::DisplayCharacterCard() {
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

void UCI::addLikes(string like) { likes.push_back(like); }
void UCI::addDislikes(string dislike) { dislikes.push_back(dislike); }
int UCI::GetMoodPoints(){return this->moodPoints;}
void UCI::IncreaseMoodPoints(int mPoints) { moodPoints += mPoints; }

void UCI::DisplayCoffeeScene(int drink) {
  int option;
  const string petaScene{
      "\nWith Peta: You find Peta in a quiet corner, lost in a book. They welcome you with a smile,"
      "eager to discuss the story's themes and how they reflect on human nature. Would you"
      "care to join me? (1 for yes, any other input is no)\n\n"};
  cout << SlowTyping(petaScene);
  cin >> option;
  if (option == 1) {
    IncreaseMoodPoints(7);
    const string coffeeTime{
        "\nThanks for joining me\n What drink did you end up buying?\n"};
    cout << SlowTyping(coffeeTime);
  }
  else {
    const string rejection {"Scotty: Interesting... okay, until we meet another day.\n "};
    cout << SlowTyping(rejection);
    IncreaseMoodPoints(-10);
    return;
  };

    switch (drink) {
    case 1: {
      const string drinkChoice1{
          "\n" + name +" : I got an expresso! \n Peta: Disgusting vermin!! That is what you are!!\n\n"};
      cout << SlowTyping(drinkChoice1);
      this->IncreaseMoodPoints(-2);
      this->addDislikes("Has a vendetta against expressos.");
      break;
    }
    case 2: {
      const string drinkChoice2{
          "\n" + name + ": I got an herbal tea to soothe me.\n Peta: Iced lattes are alright, not"
      "too bad.\n\n"};
      cout << SlowTyping(drinkChoice2);
      this->IncreaseMoodPoints(1);
      break;
    }
    case 3: {
      const string drinkChoice3{"\n" + name + ": I got an iced latte!\n Peta: You.. have certainly good taste." 
      "We will definitely get along.\n\n"};
      cout << SlowTyping(drinkChoice3);
      addLikes("Lattes");
      break;
    }
    case 4: {
      const string drinkChoice4{
          "\n " +name+ ": I got a hot chocolate! \n Peta: Basic, but certainly not the worst.\n\n"};
      cout << SlowTyping(drinkChoice4);
      IncreaseMoodPoints(1);
      break;
    }
    case 5: {
      const string drinkChoice5{
          "\n" + name + ": I got a refreshing fruit smoothie.\n Peta: Fruit smoothies?? Really?"
           "Out of all drinks?\n\n"};
      cout << SlowTyping(drinkChoice5);
      IncreaseMoodPoints(-2);
      addDislikes("Has childhood trauma with fruit smoothies.");
      break;
    }
    default:
      
      break;
    }
  } 


void UCI::DisplayBeachScene() {
  int option;
  const string s{"Building Sandcastles Alongside Peta\n\n"
                 "Narrator: Peta is knee-deep in sand, their hands sculpting an elaborate castle. "
                 "You kneel beside them, intrigued by their creativity.\n"
                 + name + ": This castle is impressive. What inspires your designs?\n"
                 "Peta: I love bringing imagination to life. It's about"
                  "creating something beautiful from the simplest of materials. You know?\n\n"
                 "1: Share your thoughts on the value of volunteering\n"
                 "2: Criticize their unobtrusive nature"};
  cout << SlowTyping(s);
  cin >> option;
  if (option == 1) {
    addLikes("Volunteering");
    const string s{"\nPeta: Right!? Volunteering is what makes communities thrive. Why expect"
    "the good to automatically appear when you don't contribute to the good as well?\n"};
    cout << SlowTyping(s);
  } else if (option == 2) {
    addDislikes("Conflict-ridden situations");
    const string s{"\nScotty: Well So-rry you don't even want to the bare minimum of effort"
    "to not bother people. -_-\n"};
    cout << SlowTyping(s);
  } else {
    // u dont learn shti
  }
}

void UCI::PetaBigDate() {
  int foodChoice;
  const string s{
      "\nNarrator: Under the shade of towering trees in Aldrich Park, you and Peta lay out a cozy picnic.\n"
       "The air is filled with the gentle hum of nature and the distant chatter of students, creating a "
       "peaceful backdrop for your date. \n\n"
      "Peta: I thought this would be the perfect spot, away from the hustle and bustle. "
      "I hope you like it. What did you end up bringing?\n\n"
      "1. Vegetarian Wraps\n"
      "2. Fruit Salad\n"
      "3. Cheese and Crackers\n"
      "4. Homemade Lemonade\n"};
  cout << SlowTyping(s);
  cin >> foodChoice;
  switch (foodChoice) {
  case 1: {
    const string option1{
        "\n" + name + ": How about snacking on vegetarian wraps?\n"
        "Peta: Great choice! I love how each ingredient comes together to create something "
        "delightful. It's like us, different but better together.\n\n "};
    IncreaseMoodPoints(5);
    cout << SlowTyping(option1);
    break;
  }
  case 2: {
    const string option2{
        "\n" + name + ": I brought fruit salads! It seems like a \n" 
         "Peta: Fruit salad! Fresh and sweet, just like this moment. "
         "There's something special about sharing simple joys.\n\n"};
    IncreaseMoodPoints(3);
    cout << SlowTyping(option2);
    break;
  }
  case 3: {
    const string option3{
        "\n" +name + ":I only brought cheese and crackers. Is that alright?\n"
        "Peta: Classic and elegant, I like your style! It's the simple things that make life beautiful, isn't it?\n\n"};
    IncreaseMoodPoints(1);
    cout << SlowTyping(option3);
    break;
  }
  case 4: {
    const string option4{
        "\n" +name + "I brought Homemade Lemonade!\n"
        "Peta: Nothing beats homemade lemonade on a sunny day. But like, where's the food....\n"};
    IncreaseMoodPoints(-3);
    cout << SlowTyping(option4);
    break;
  }

  default:
    cout << "Invalid input. Please type in another input" << endl;
    cin >> foodChoice;

    break;
  }

    int activity;
  const string activtyOptions{
    "Narrator: As you enjoy your picnic, conversation flows freely. Peta shares stories of "
    "their passions and dreams, and you find yourself drawn into their world of empathy and creativity.\n"
     "The afternoon slips away in a blend of laughter, shared stories, and a growing connection.\n\n"
      "After enjoying your chosen picnic treats, Peta looks at you with a spark of inspiration. \n"
"Peta: I brought something special for us to do together. What do you think about writing a short poem or story?"
   "\n. We can draw inspiration from our surroundings and how we're feeling right now.\n\n"

      "1.Write a Poem Together\n"
      "2.Write a Short Story Together\n"
      "3.Politely Decline\n"};
cin >> activity;
  switch (activity) {
  case 1: {
    const string option1{
        "A poem! Perfect! "
        "Let's capture this moment in words, the beauty around us, and the connection we're sharing right now."
        "\n\n"};
    IncreaseMoodPoints(5);
    cout << SlowTyping(option1);
    break;
  }
  case 2: {
    const string option2{"A short story, how exciting! We can create a world of our own, "
     "right here from this very spot.\n\n"};
    IncreaseMoodPoints(5);
    
    cout << SlowTyping(option2);
    break;
  }
  case 3: {
    const string option3{
        "That's okay, I'm just happy to be here with you. Let's just sit back and enjoy the tranquility.\n"};
    IncreaseMoodPoints(0);
    cout << SlowTyping(option3);
    break;
  }
  default:
    cout << "Invalid input. Please type in another input" << endl;
    break;
  }

  const string evening{
      "Narrator: Whether you choose to write together or simply enjoy the moment, "
      "Peta's gentle enthusiasm and creative spirit make the day truly special."
      " The activity brings you closer, highlighting the depth of your connection\n\n"};

  if (GetMoodPoints() >= 15) {
    const string kiss{
        "As the sun sets, casting a soft glow over the park, "
        "you and Peta finish your creative writing activity. "
        "Peta looks at you, eyes shining with a mix of admiration and affection.\n"

        "Peta: Today was beautiful. Sharing this creative space with you... it's been a highlight for me.\n"
        + name + ": I feel the same, Peta. There's something special about today.. about us."

        "Narrator: Leaning in slowly, checking for any hesitation, you both share a tender, "
         "heartfelt kiss. It's a perfect reflection of the day's intimacy and the deep connection"
          "you've fostered.\n"};
    cout << SlowTyping(kiss);
  } else if (GetMoodPoints() >= 7) {
    const string hug{
      "Narrator: Packing up the picnic, you notice Peta's gentle smile, their eyes filled with warmth.\n"
        "Peta: Thank you for today. It was perfect. "
        + name  + ": Thank you, Peta. I really enjoyed our time together."
        "[In response, Peta opens their arms for a hug. It's a warm, "
        "comforting embrace that speaks volumes of the bond you've shared and the" 
        "potential for more heartfelt moments.]\n\n"};
    cout << SlowTyping(hug);
  }
  else{
    const string rejection{
      "Narrator: As the picnic comes to an end, Peta gathers their things, their demeanor thoughtful.\n"
        "Peta: I've had a lovely time today. I hope you did too."
        + name  + ": I did, Peta. I was hoping we could...\n"
        "[Before you can finish, Peta gently interrupts.]\n"
        "Peta: You're wonderful, but I think we're better as friends. I hope that's okay.\n"
        "Narrator: Though it's not the outcome you hoped for, Peta's kindness and respect make "
         "it clear that a beautiful friendship is still a precious outcome.\n"};
    cout << SlowTyping(rejection);
  }

  const string lastScene{
      "Narrator: The gesture cements a day of shared experiences and mutual "
      "affection. As you part ways, you feel a promise in the air, a hint of "
      "more days like this to come.\n"};
  cout << SlowTyping(lastScene);
}
