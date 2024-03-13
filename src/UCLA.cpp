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
      addDislikes("hot chocolate in any season except winter");
      IncreaseMoodPoints(-2);
      break;
    }
    case 5: {
      const string drinkChoice5{
          "\n" + name + ": I got a refreshing fruit smoothie.\n Angel: Ohhh interesting! Not a big fan of those :|\n\n"};
      cout << SlowTyping(drinkChoice5);
      addDislikes("fruit smoothies cause its basic");
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
        "calculated curiosity, a challenge to the world to impress them.\n\n"
      "Angel: I must say, choosing a museum is a bold move. Let's see if the day lives up to my... our expectations.\n\n"
      "1. Propose heading towards the Renaissance masterpieces.\n"
      "2. Suggest the avant-garde art exhibit.\n"
      "3. Mention the celebrity-themed pop art.\n"
      "4. Propose visiting the contemporaty art secion\n"};
  cout << SlowTyping(s);
  cin >> option;
  switch (option) {
  case 1: {
    const string option1{
        "\n" + name + ": How about we explore the Renaissance section first? The blend of art, science, and humanism is fascinating. "
        "\nAngel: Ah, the Renaissance—when the world awoke anew. Fine choice! There's nothing like the audacious spirit of innovation to stir the soul."
        "\n\n "};
    addLikes("historical achievements");
    IncreaseMoodPoints(5);
    cout << SlowTyping(option1);
    break;
  }
  case 2: {
    const string option2{
        "\n" + name + ": Maybe the avant-garde art exhibit could be interesting? "
        "It's all about challenging norms and pushing boundaries. \n Angel: Hm, avant-garde, you say? "
        "A test of one's ability to see beyond the conventional. I'm curious to see if you can keep up with the challenge. Lead the way! "
        "\n\n"};
    addLikes("challenges");
    IncreaseMoodPoints(3);
    cout << SlowTyping(option2);
    break;
  }
  case 3: {
    const string option3{
        "\n "+ name +": What about checking out the celebrity-themed pop art? "
        "It could be fun to see the modern takes on fame.\nAngel: Pop art? Celebrity culture? "
        " I suppose there's merit in understanding the masses... but let's not dawdle. I'd rather seek out art that "
        "challenges the mind, not what panders to it.\n\n"};
    addDislikes("celebrity culture");
    IncreaseMoodPoints(-1);
    cout << SlowTyping(option3);
    break;
  }
  case 4: {
    const string option4{
        "\nWhat about the contemporary art section? It's all about challenging norms and expressing individuality. "
        "\nAngel: Contemporary art? That's... quite the gamble. It's often a hit or miss for me, teetering between brilliance and nonsensical. But fine, let's critique it together. I'm curious to see what you find 'expressive.'"
        "\n\n"};
    addDislikes("contemporary art");
    IncreaseMoodPoints(1);
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
      "[Scene: A Cozy Café in the Museum]\n\n"
      "Narrator: As you walk through the grand hallways of the museum with Angel, their eyes lit "
      "with a blend of curiosity and ambition, you both decide to take a break and visit the museum "
      "café. The café, much like the museum itself, offers a selection of unique and diverse options. "
      "Angel looks at the menu with a thoughtful gaze.\n\n"
      "Angel: This place has a great selection. Everything's seems lovely. "
      "Makes choosing a bit difficult, right?\n\n"

      "1. Artisanal Sandwiches with a side of chips\n"
      "2. Seasonal Salad.\n"
      "3.A Gourmet Pizza with a drink of choice.\n"};
cin >> foodChoice;
  switch (foodChoice) {
  case 1: {
    const string option1{
        ""+ name +" : The sandwiches sound amazing. It's great to enjoy "
        "something with so much nutrition in it.\n"
        "Angel: Oh, great choice! I'm a big fan of sandwiches too\n\n"};
    IncreaseMoodPoints(2);
    cout << SlowTyping(option1);
    break;
  }
  case 2: {
    const string option2{""+ name +": I think I'll go with the seasonal "
                         "salad. Seems like a refreshing option.\n"
                         "Angel: Opting for a fresh, natural option, much like the sustainability efforts we pride ourselves on at UCLA. It's both healthy and environmentally conscious. Impressive decision.\n\n"};
    IncreaseMoodPoints(5);
    cout << SlowTyping(option2);
    break;
  }
  case 3: {
    const string option3{
        ""+ name +" : Maybe I'll indulge a bit and go for the pizza. Comfort "
        "food, right?\n"
        "Angel: Gourmet pizza, in a museum café? I usually prefer something a bit more healthy and processed foods are not really my thing. Go ahead though!\n\n"};
    IncreaseMoodPoints(-5);
    cout << SlowTyping(option3);
    break;
  }
  default:
    cout << "Invalid input. Please type in another input" << endl;
    break;
  }
  const string fd{"Narrator: As you make your selection, Angel engages in a lively discussion about the "
        "parallels between food and art, their ambitious nature shining through as they relate culinary choices to personal and "
        "academic excellence. The meal not only satisfies your hunger but also deepens your connection, offering insights into Angel's world at UCLA.\n"};
  cout << SlowTyping(fd);
  const string evening{
      "Narrator: As the day winds down, you and Angel find yourselves alone in a secluded part of the museum, surrounded by breathtaking art. The quiet ambiance sets a romantic tone.\n\n"};

  if (moodPoints >= 15) {
    const string kiss{
        ""+ name +" : TToday was incredible, Angel. I've never seen art and life blend so seamlessly.\n"
        "Angel: I agree. It's rare to find someone who appreciates the depth of these experiences. You... you've made today special.\n"
        "Narrator: Angel steps closer, their eyes reflecting the museum's soft lighting, showcasing a mix of vulnerability and the usual confidence.\n"
        ""+ name +" : Angel, I feel there's something between us... more than just shared interests. "
        "\n\n"
        "Angel smiles, a hint of warmth breaking through their usually composed demeanor.\n\n"
        "Angel: I've felt it too. It's like we've connected on a level I didn't expect.\n"
        "Leaning in, the space between you diminishes until your lips meet. The kiss is soft, tentative at first, but grows more confident, "
        "mirroring the passion of the art that surrounds you. It's a moment of shared vulnerability and understanding, a promise of future explorations, "
        "both personal and intellectual."};
    cout << SlowTyping(kiss);
  } else if (moodPoints >= 7){
    const string hug{
        "After an engaging day, you both stand at the museum's exit, reluctant to end the shared adventure.\n\n"
        ""+ name +": Thank you for today, Angel. I've learned so much from you. \n "
        "Angel: And I from you. You've opened my eyes to new perspectives. \n "
        "Narrator: There's a pause, filled with unspoken thoughts and feelings. Angel looks at you, a softness in their eyes. \n"
        "Angel: Would it be alright if I hugged you? It seems a fitting end to such a memorable day. \n"
        "Narrator: You nod, smiling, and Angel wraps you in a warm, genuine embrace. It's a moment of comfort and closeness, a silent acknowledgment of the bond formed throughout the day\n\n"};
    cout << SlowTyping(hug);
  }
  else{
    const string rejection{ 
      "Narrator: As you express a desire to deepen the connection, Angel takes a moment before responding, their expression thoughtful and kind. \n"
      ""+ name +" I've really enjoyed today, Angel. I was hoping we could...\n"
      "Angel: You mean a lot to me, but I think our journey is meant to be one of friendship and intellectual companionship. \n"
      "Narrator: There's a pause, filled with a mix of disappointment and understanding.\n"
      ""+ name +"I see. I respect your feelings, Angel. \n"
      "Angel: I truly value what we've shared today. Let's continue to explore this world, side by side, as friends. \n\n"
    };
  }

  const string lastScene{
      "Narrator: Though not the outcome you hoped for, there's a mutual respect and a promise of future adventures, albeit on different terms. \n\n"};
  cout << SlowTyping(lastScene);
}

