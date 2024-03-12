
#include "../header/Game.h"
#include "../header/UCR.h"
#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include "../header/SlowTyping.h"
using namespace std;

// global var
// string name;
string name;

int ucrmood = 0;
vector<string> UCRLikes = {};
vector<string> UCRDislikes = {};
string playerName = name;
UCR Scotty("Scotty", ucrmood, UCRLikes, UCRDislikes, playerName);

// constructor
Game::Game(){};

void Game::DisplayIntroMenu() {
  char input;
  do {
    cout << "Main Menu:\n\n"
         << "c: continue/start game\n"
         << "h: how to play\n"
         << "g: game description\n"
         << "q: quit\n\n"
         << "Enter your choice: ";
    cin >> input;

    cout << endl;

    switch (input) {
    case 'c':
      StartGame();
      // After starting the game, we don't want to display the menu again
      return; // Exit the function to avoid showing the menu again
    case 'h':
      DisplayHowToPlay();
      cout << "Sending you back to the menu!! ;)" << endl << endl;
      break; // Break here to loop and show the menu again
    case 'g':
      GameDescription();
      cout << "Sending you back to the menu!! ;)" << endl << endl;
      break; // Break here to loop and show the menu again
    case 'q':
      DisplayQuitScreen();
      cout << "Sending you back to the menu!! ;)" << endl << endl;
      return; // If 'q' is selected in DisplayQuitScreen(), it exits the
              // program; otherwise, return to avoid showing the menu again
    default:
      cout << "Invalid input. Please try again.\n\n";
      break; // Show the menu again for any other input
    }
  } while (input != 'q'); // Continue showing the menu until 'q' is chosen
}

void Game::StartGame() {

  const string introDialogue { "--- Welcome to the UC Socal Love Quest ---  \n "
          "\nNarrator: Ah, the vibrant life of a university student, filled "
          "with opportunities, adventures, and the chance to meet some truly "
          "unforgettable people. Welcome, traveler, to a journey where your "
          "choices shape your destiny in the eclectic world of the University "
          "of California campuses. \n"
          "\n\nNarrator: But before we embark on this adventure, may I ask how "
          "you prefer to be addressed?\n\n"
          "Please enter your name: "};
  cout << SlowTyping(introDialogue);
  cin.ignore(numeric_limits<streamsize>::max(),
             '\n'); // Ignore characters until a newline is found

  getline(cin, name); // Use getline to read the entire line, including spaces.
  // this->name = name;
  const string introDialogue2 { "\nNarrator: Wonderful to meet you, " + name
       + ". It's always a pleasure to guide a new face through the twists and "
          "turns of university life.\n"
        
          "\nNarrator: Now, let's get started. Are you ready to embark on a "
          "journey of love <3 \n"};
  cout << SlowTyping(introDialogue2);
  return;
}
void Game::PromptSubMenu() {
  int dispSub;

  cout
      << "Would you like to see the submenu? (1 for yes, any other input is no)"
      << endl;
  cin >> dispSub;
  if (dispSub == 1) {
    DisplaySubMenu();
  } else {
    // continue to next event
    return;
  }
}
void Game::DisplaySubMenu() {
  char input;
  cout << "Welcome to the in-game menu screen :3" << endl;
  cout << "c: continue and exit the submenu \n q: quit \n v: display your "
          "character card"
       << endl
       << endl;
  cin >> input;
  switch (input) {
  case 'c':
    break; // break and return to dialogue
  case 'q':
    DisplayQuitScreen();
    break;
  case 'v':
    // display the character card
    int cardOption;
    cout << "Welcome to your character cards, which characters stats would you "
            "like to see?\n\n"
            "1: UCR\n"
            "2: UCLA\n"
            "3: UCI\n"
            "4: UCSD\n"
            "5: UCSB\n"
         << endl;
    cin >> cardOption;
    // using card option display a specific characters card
    switch (cardOption) {
    case 1:
      Scotty.DisplayCharacterCard();
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    // default case for character card
    default:
      cout << "Invalid input. Please try again.\n\n";
      break; // Show the menu again for any other input
    }
    break;

  // default case for submenu
  default:
    cout << "Invalid input. Please try again.\n\n";
    break; // Show the menu again for any other input
  }
}

void Game::DisplayHowToPlay() {
  cout << "How to play UC Socal Love Quest <3" << endl;
  cout << "Player will be given the options between 1, 2, 3, 4, or 5 to choose "
          "specific dialogue options"
       << endl;
  cout << "1 is the first dialogue option, 2 is the second, etc" << endl;
 
  char input;
  // cout << "press m to return to the main menu" << endl;"
  // cin >> input;
  // if (input == 'm'))
}

void Game::DisplayQuitScreen() {
  char input;
  cout << "Are you sure you wanna quit? (press q again to quit)" << endl;
  cin >> input;
  if (input == 'q') {
    cout << "Thank you for playing UC Socal Love Quest <3" << endl;
    exit(0);
  } else {
    DisplayIntroMenu();
  }
}

void Game::GameDescription() {
  const string gameDesc { "Game description:\n"
 "This project explores the different dating options and stereotypes "
          "of the UC’s in Southern California as we "
          "create personalities for each of the UC’s. The player (new transfer "
          "student) will have the opportunity to choose between multiple "
          "text options and depending on the player's choice, it can either "
          "make the characters like or dislike the player. At the end of the "
          "game, the mascot the player matches with the most will be the "
          "school they transfer to."};
  cout << SlowTyping(gameDesc) << endl;
  return;
}

void Game::DisplayOrientation() {
  string activity;
  const string orientation { "\n\nNarrator: Welcome, everyone, to your first day! Today, you'll "
          "meet "
          "some remarkable     students, each with their own unique passions "
          "and stories. Let's hear from them directly about   their favorite "
          "outdoor activities. And you, " +
              name +
              ", what's an outdoor activity that   you enjoy? Feel free to "
              "share with us(enter a one word verb).\n\n"};
  cout << SlowTyping(orientation);
  cout << "Verb: ";
  cin.ignore();
  getline(cin, activity);
  cout << endl << endl;

  cout << this->name << ": I like " << activity << "!" << endl << endl;

  const string dialogue { "Scotty: Hey there! I'm all about hiking. There's nothing like the "
          "peace and quiet of nature to make you feel alive.\n\n"
          "Angel: Competitive sports for me. It's not just about the game; "
          "it's about pushing your limits and achieving greatness.\n\n"
          "Peta: I love nature walks. They're a gentle reminder of the beauty "
          "in simplicity and the importance of taking things slow.\n\n"
          "Tris: Diving's my go-to. The ocean's depth holds mysteries and "
          "wonders that I just can't get enough of.\n\n"
          "Santi: Beach volleyball, no doubt. The sun, the sand, the "
          "adrenaline rush—it's the ultimate fun.\n\n"
          "\nNarrator: As the day unfolds, you get to know more about each "
         "student.\n\n"
         "...\n\nWith Scotty: As you discuss hiking trails, Scotty's eyes "
         "light up. "
         "'You know, there's this trail not too far from here that's "
         "absolutely breathtaking in the early morning. We should check it out "
         "sometime!' His straightforward invitation makes you feel instantly "
         "at ease.\n\n"
         "With Angel: During a break, you find yourself watching a group "
         "playing a friendly game of soccer. Angel stands beside you, offering "
         "insightful commentary on their strategies. 'It's all about "
         "anticipation and making your move at the right moment,' they note, a "
         "hint of respect in their voice for the game and perhaps, for you for "
         "showing interest.\n\n"
         "With Peta: Peta approaches you with a shy smile, holding a small "
         "notebook. 'I was inspired by our earlier chat and wrote a short poem "
         "about the tranquility of nature walks. Would you like to hear it?' "
         "Their willingness to share something so personal speaks volumes "
         "about their trust and kindness.\n\n"
         "With Tris: You stumble upon Tris deeply engrossed in a portable game "
         "console. Curious, you ask about the game, and Tris's explanation "
         "turns into an impromptu gaming session. Their passion for innovation "
         "and strategy shines through, and their patience in teaching you the "
         "ropes reveals a caring side.\n\n"
         "With Santi: As the day nears its end, Santi invites you to a "
         "spontaneous game of beach volleyball with a group of students. 'Come "
         "on, it'll be fun! Plus, you'll get to see me in my element,' Santi "
         "boasts playfully. The game is filled with laughter and high spirits, "
         "showcasing Santi's infectious energy and love for life.\n\n...\n\n"

         "Narrator: The sun begins to set, casting a warm glow over the "
         "campus. Today's experiences have left you with a deeper appreciation "
         "for the diversity and depth of the people you've met. As you head "
         "back, you can't help but feel excited about the days ahead.\n\n"
         "[The scene fades to black, and the sound of gentle snoring indicates "
         "the end of a fulfilling day]\n\n"
         "Narrator: Dreams of future adventures and the friendships you've "
         "begun to forge accompany you into the night. Tomorrow is another "
         "day, filled with new opportunities and experiences at the UC. "
         "Goodnight, " +
             name +
             ".\n\n"
             "[End of the scenario]\n"};
      cout << SlowTyping(orientation);
  PromptSubMenu();
  
}

void Game::CoffeeScene() {
  int drink;
  const string coffeeDialogue {"Narrator: The aroma of freshly brewed coffee fills the air as you "
          "step into the cozy campus coffee shop. It's a bustling hub of "
          "activity, with students from various backgrounds engrossed in "
          "different pursuits. The menu boasts a diverse selection of drinks, "
          "each one a favorite of the friends you've made so far. What will "
          "you choose\n\n"
          "1. A bold espresso (Angel's choice)\n"
          "2. A soothing herbal tea (Peta's choice)\n"
          "3. A refreshing iced latte (Scotty's choice)\n"
          "4. A rich hot chocolate (Tris's choice)\n"
          "5. A vibrant fruit smoothie (Santi's choice)\n"};
  cout << SlowTyping(coffeeDialogue);
  cin >> drink;
  switch (drink) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    Scotty.IncreaseMoodPoints(3);
    Scotty.DisplayMoodPoints();
    break;
  case 4:
    break;
  case 5:
    break;
  default:
    cout << "Invalid input. Please try again.\n\n";
    break; // Show the menu again for any other input
  }

  int activity;
  const string activityDialogue { "\nNarrator: With your drink in hand, you glance around at the "
          "various activities unfolding around you. What brings you to the "
          "coffee shop today?\n\n"

          "1. To study for an upcoming exam (Angel's activity)\n"
          "2. To enjoy a quiet read (Peta's activity)\n"
          "3. To sketch the scenery (Scotty's activity)\n"
          "4. To dive into a new video game (Tris's activity)\n"
          "5. To socialize and meet new people (Santi's activity)\n" };
  cout << SlowTyping(activityDialogue);
  cin >> activity;
  switch (activity) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    // Scotty.IncreaseMoodPoints(7);
    // Scotty.DisplayMoodPoints();
    Scotty.DisplayCoffeeScene(drink);
    break;
  case 4:
    break;
  case 5:
    break;
  default:
    cout << "Invalid input. Please try again.\n\n";
    break; // Show the menu again for any other input
  }

  const string endDialogue { "\n...\n\nNarrator: As the hours slip by, you find yourself deeply "
          "engaged in the activity you've chosen, learning more about your "
          "companion and yourself in the process. The coffee shop has become a "
          "place of connection, reflection, and discovery.\n\n...\n\n"
          "[The scene gently fades to the background noise of the coffee shop]"
          "\n\n...\n\nNarrator: You leave the coffee shop feeling refreshed "
          "and inspired, ready to tackle the next adventure that awaits you on "
          "campus. The relationships you're building here will surely last a "
          "lifetime.\n\n"
          "[End of the scenario]\n"};
  cout << SlowTyping(endDialogue);

  PromptSubMenu();
  //run beach scene
  BeachScene();
}



void Game::BeachScene() {
  int activity;
  const string beach { "\nNarrator: A radiant sun oversees the beach, transforming it into "
          "a canvas of endless possibilities. Today, freed from academic "
          "endeavors, you stand where the sand meets the sea, pondering how "
          "best to savor this slice of paradise.\n\n"
          "1. Traverse the shoreline in search of unique seashells, a peaceful "
          "venture (Tris's choice)\n"
          "2. Immerse in the world of a novel, with the symphony of waves for "
          "company (Angel's choice)\n"
          "3. Bask in the sun's embrace, allowing the tranquility to envelop "
          "you (Scotty's choice)\n"
          "4. Craft intricate sandcastles, your imagination the only limit "
          "(Peta's choice)\n"
          "5. Dive into a game of beach volleyball, where every serve thrills "
          "(Santi's choice)\n\n"};
  cout << SlowTyping(beach);
  cin >> activity;

  switch (activity) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    // Scotty.IncreaseMoodPoints(3);
    // Scotty.DisplayMoodPoints();
    Scotty.DisplayBeachScene();
    break;
  case 4:
    break;
  case 5:
    break;
  default:
    cout << "Invalid input. Please try again.\n\n";
    break; // Show the menu again for any other input
  }
  PromptSubMenu();
  Bonfire();
}

void Game::Bonfire() {
  int option;
  const string fire { "\nNarrator: Gathered around the bonfire, the night is ripe with "
          "potential. The day's encounters have left your heart fluttering, a "
          "certain someone occupying your thoughts. Who will you choose to "
          "open up to, to share this moment with, and perhaps, to ask on a "
          "date?\n\n"
          "1. Share a moment with Tris, the sparks of curiosity fanning into "
          "flames of affection.\n"
          "2. Confide in Angel, your admiration for their drive and depth "
          "growing by the second.\n"
          "3. Enjoy the warmth beside Scotty, their serene presence a balm to "
          "your spirit.\n"
          "4. Sit close to Peta, their creativity and kindness drawing you in "
          "closer.\n"
          "5. Laugh with Santi, their infectious energy making your heart "
          "race.\n\n" };
  cout << SlowTyping(fire);
    cin >> option;

  switch (option) {
  case 1: {
    const string tris { "Narrator: You find Tris gazing into the flames, their expression "
            "thoughtful. Sitting beside them, the warmth of the fire mirrors "
            "the warmth growing inside you.\n\n" +
                name +
                ": Today was incredible, wasn't it? There's something about "
                "the ocean that's so... revealing."
                "Tris: It's true. The vastness of the sea puts everything into "
                "perspective. It makes you ponder what's truly important.\n\n" +
                name +
                " : [Seizes the moment] Speaking of importance, I've really "
                "enjoyed our time together. Would you be interested in going "
                "on a date, perhaps explore more hidden depths together?\n" };
    cout << SlowTyping(tris);
    break;
  }
  case 2:{
    const string angel { "\nNarrator: Angel stands a little apart from the crowd, their eyes "
            "reflecting the dance of the flames. Approaching them, you feel a "
            "mix of anticipation and resolve.\n\n" +
                name +
                ": I've been thinking about our conversation today. You have a "
                "unique perspective on things... it's inspiring.\n\n"
                "Angel: Thank you. I believe that to achieve greatness, one "
                "must always seek to learn and grow. It's a journey, not a "
                "destination.\n\n" +
                name +
                ": [Takes a deep breath] Would you like to continue this "
                "journey together, maybe over dinner? There's so much more I "
                "want to learn from you.\n"};
    cout << SlowTyping(angel);
    break;
  }
  case 3: {
    const string scotty { "Narrator: Scotty sits on the sand, drawing patterns "
            "absentmindedly next to the fire. Their peaceful aura is a beacon "
            "in the night, drawing you near.\n\n" +
                name +
                ": Today felt like a breath of fresh air, didn't it? Your "
                "connection with nature... it's really special.\n\n"
                "Scotty: Thanks, I find that it's in the simplest moments that "
                "we find true peace. Sharing that with someone... it means a "
                "lot.\n\n" +
                name +
                ": [With a hopeful smile] Would you be interested in finding "
                "more of those moments together? Maybe a walk in the park for "
                "our first date?\n"};
    
    cout << SlowTyping(scotty);
    //run big date scene
    Scotty.ScottyBigDate();
    break;
  }
  case 4: {
    const string peta { "Narrator: Peta is laughing with a group of friends, their "
            "cheerful demeanor lighting up the night. As you approach, their "
            "smile turns towards you, bright and inviting.\n\n" +
                name +
                ": Your sandcastles today were a work of art. You have a real "
                "gift for creating beauty.\n\n"
                "Peta: Oh, thank you! It's just my way of expressing the joy "
                "and wonder I find in the world.\n\n" +
                name +
                ": [Heart beating faster] I was hoping... maybe you'd like to "
                "go out sometime? We could visit an art gallery, see more "
                "beautiful creations together.\n"};
    cout << SlowTyping(peta);

    break;
  }
  case 5:{
    const string santi { "Narrator: Santi is in the heart of the party, their laughter as "
            "infectious as their energy. When you join them, their focus "
            "shifts to you, vibrant and full of life. \n\n" +
                name +
                "You turned a simple game of volleyball into an adventure "
                "today. It's impossible not to have fun around you. \n\n" +
                name +
                "That's the goal! Life's too short for dull moments. Gotta "
                "make every second count. \n\n" +
                name +
                "[With a grin] Speaking of making moments count, how about we "
                "try something new for our next adventure? Maybe a date?\n"};
    cout << SlowTyping(santi);

    break;
  }
  default:
    cout << "Invalid input. Please try again.\n\n";
    break; // Show the menu again for any other input
  }
  PromptSubMenu();
}

void Game::LibraryScene(){
  int book;
  const string s { "* At the library * \n\nNarrator: As you step through the grand double doors of the UC library, a world of knowledge and imagination unfurls before you. The scent of old paper and the hushed whispers of students deep in study create a cocoon of tranquility and intellectual pursuit. Rows upon rows of bookshelves stretch out, each cradling stories, theories, and discoveries that have shaped the world.\n\n"

  "You pause for a moment, taking it all in. The library is not just a place of learning; it's a sanctuary where minds are free to explore, create, and dream. You feel a sense of anticipation, a readiness to embark on your own journey of discovery.\n\n"

  "Walking down the aisles, you're drawn to the diverse sections - each offering a gateway to a different realm. Science, literature, history, art... the possibilities seem endless. Your fingers trail along the spines of the books as you move, feeling the weight of human knowledge at your fingertips.\n\n"

  "Suddenly, a particular section catches your eye. It feels as if the books themselves are calling out to you, each one promising insights and adventures beyond your wildest imaginations.\n\n"

  "Narrator: This is where your journey in the UC library begins. Which book will you choose? Your selection might just shape the course of your entire experience here:\n\n"

  "Scotty 'The Overstory' by Richard Powers: A novel that intertwines the stories of nine different people and their connections to trees and nature.\n\n"
  "Angel 'Blink: The Power of Thinking Without Thinking' by Malcolm Gladwell: This book delves into the psychology and decision-making processes that drive success\n\n"
  "Peta 'The Night Circus' by Erin Morgenstern: A magical novel about a mysterious circus that only appears at night, emphasizing creativity, love, and the beauty of imagination\n\n"
  "Tris 'Ready Player One' by Ernest Cline: A science fiction novel set in a dystopian future where society escapes into a virtual reality game\n\n"
  "Santi 'The Alchemist' by Paulo Coelho: A philosophical book that tells the story of an Andalusian shepherd boy who dreams of discovering a worldly treasure\n\n"};
  cin >> book;
  int activity;
  const string activityDialogue { "Narrator: After an enlightening encounter at the library, you find yourself intrigued by the distinct personalities and interests of your new acquaintances from the various UC campuses. Each one offers to spend some time with you, sharing a part of their world and perhaps teaching you something new. The question now is, who will you choose to spend your time with, and what adventure awaits?\n\n"

  "1. Scotty: How about we take a break from the books and get some fresh air? I know this peaceful garden nearby where we can relax and maybe even do a bit of gardening. It's a great way to connect with nature and unwind. What do you say?\n\n"

  "2. Angel: I have an idea. There's a debate happening soon on campus about leadership in the 21st century. It's a great opportunity to engage with ambitious minds and maybe even challenge our own views. Interested?\n\n"

  "3. Peta: I'm volunteering at the local animal shelter this afternoon. It's always so rewarding to help these lovely creatures and make a difference. Would you like to join me? It's a beautiful way to spread some kindness.\n\n"

  "4. Tris: Hey, there's this new VR game exhibit at the tech museum tonight. It's supposed to be a groundbreaking experience. I was planning to check it out. Maybe you'd like to come along? It could be fun to explore together.\n\n"

  "5. Santi: How do you feel about hitting the beach for some volleyball? It's the perfect way to have some fun in the sun and maybe even catch a few waves if we're up for it. Life's too short to stay indoors, right?\n"};
  cin >> activity;
  switch (activity) {
  case 1: //scotty
    Scotty.ScottyLibraryScene(book);
    break;
  case 2:
    break;
  case 3:
    ;
    break;
  case 4:
    break;
  case 5:
    break;
  default:
    cout << "Invalid input. Please try again.\n\n";
    break; // Show the menu again for any other input
  }
}

void Game::MallScene(){
  int outfit;
  const string s { "* At the mall * \n\nAs you navigate through the throngs of shoppers, you feel the excitement building. Storefronts display an array of fashion styles, from the latest trends to classic looks, each beckoning with the promise of the perfect outfit for the upcoming dance. The dance at the UC campuses is a highlight of the social calendar, and you want your outfit to make a statement. Fortunately, the mall seems to have endless options. But which style will you choose?\n\n"

  "Ah, the dance! A night where memories are made, and stories begin. Your choice of attire is not just about fabric and color; it's a reflection of your personality, your aspirations, and perhaps even your desires for the evening. As you stand at the crossroads of fashion, five distinct styles catch your eye, each one calling to a different part of your soul.\n\n"

  "A Relaxed Bohemian Ensemble: A comfortable yet stylish flowy maxi dress or a linen shirt paired with relaxed-fit trousers. This outfit speaks to those who find beauty in simplicity and comfort.\n\n"
  "A Chic Power Suit: A sharp, tailored suit or an elegant pantsuit that exudes confidence and ambition. This selection is for those who command attention not just with their ideas but with their presence.\n\n"
  "A Soft, Ethereal Look: A delicate, soft-colored dress or a gentle pastel shirt with light fabric trouserse. This outfit choice reflects a soul that values compassion and understanding.\n\n"
  "A Smart Casual Tech-Inspired Outfit: A sleek, minimalist dress with geometric patterns or a smart button-down shirt paired with dark jeans. This style appeals to those who blend their passion for technology with a touch of personal flair.\n\n"
  "A Beach-Inspired Festive Attire: A vibrant, patterned short dress or a casual button-up shirt with shorts. This outfit is perfect for those who bring the party with them and enjoy living in the moment.\n\n"};


  int activity;
  const string activityDialogue { "Narrator: After selecting an outfit at the mall but before the dance, as you navigate the maze of shops and attractions, you unexpectedly encounter the UC characters. Each offers a spontaneous and engaging activity that aligns with their personality and interests. Which one would you like to go to? \n 1. Eco-friendly store \n 2. Leadership seminar \n 3. Volunteer at the charity book sale \n 4. Arcade \n 5. Surf Shop"};
  cout << SlowTyping(activityDialogue);
  cin >> activity;

  switch (activity) {
  case 1:{ //scotty
    const string ScottyActivity{"Scotty: Oh hey! I was just on my way to check out this new eco-friendly store. They've got all sorts of        sustainable living gadgets and plant-based products. Interested in joining me? It could be cool to explore how to live more in tune with nature."};
    cout << SlowTyping(ScottyActivity);
    Scotty.IncreaseMoodPoints(10);
    break;
  }
  case 2:{
    const string AngelActivity{"Angel: Perfect timing! I was about to head to this exclusive seminar they're holding upstairs – 'Leaders of Tomorrow'. It's a rare opportunity to hear from some of the industry's best. Sounds like something you'd be interested in?"};
    cout << SlowTyping(AngelActivity);
    //Angel.IncreaseMoodPoints(10); //uncomment once you make this class and funciton
    break;
  }
  case 3: {
    const string PetaActivity{"Peta: Hey there! I'm glad I ran into you. I was just about to volunteer at the mall's charity book sale. They're raising funds for local animal shelters. Want to help out? It's for a great cause, and we could make a big difference together."};
    cout << SlowTyping(PetaActivity);
    //Peta.IncreaseMoodPoints(10); //uncomment once you make this class and funciton
    break;
  }
  case 4: {
    const string TrisActivity{"Tris: Oh, hi! I was just about to hit the arcade here. They've got this new VR game that's been getting rave reviews. Figured it'd be a cool way to kill some time and maybe even learn a thing or two about game design. Wanna join?"};
    cout << SlowTyping(TrisActivity);
    //Tris.IncreaseMoodPoints(10); //uncomment once you make this class and funciton
    break;
  }
  case 5:{
    const string SantiActivity{"Santi: Yo! You're just in time. I was about to check out this surf shop's summer kickoff event. They've got everything from board demos to a mini ramp contest. It's gonna be epic, and it's always more fun with company. How about it?"};
    cout << SlowTyping(SantiActivity);
    //Santi.IncreaseMoodPoints(10); //uncomment once you make this class and funciton
    break;
  }
  default:{
    cout << "Invalid input. Please try again.\n\n";
    break; // Show the menu again for any other input
  }
}

//Getting asked to the dance and the player chooses what character they want to go with


  


}

