#include "../header/Game.h"
#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>
using namespace std;

// global var
// string name;

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
  string name;

  cout << "--- Welcome to the UC Socal Love Quest ---  \n "
          "\nNarrator: Ah, the vibrant life of a university student, filled "
          "with opportunities, adventures, and the chance to meet some truly "
          "unforgettable people. Welcome, traveler, to a journey where your "
          "choices shape your destiny in the eclectic world of the University "
          "of California campuses. \n"
          "\n … \n"
          "\nNarrator: But before we embark on this adventure, may I ask how "
          "you prefer to be addressed?\n\n"
          "Please enter your name: ";
  cin.ignore(numeric_limits<streamsize>::max(),
             '\n'); // Ignore characters until a newline is found

  getline(cin, name); // Use getline to read the entire line, including spaces.
  this->name = name;
  cout << "\nNarrator: Wonderful to meet you, " << name
       << ". It's always a pleasure to guide a new face through the twists and "
          "turns of university life.\n"
          "\n … \n"

          "\nNarrator: Now, let's get started. Are you ready to embark on a "
          "journey of love <3 \n";
  return;
}

void Game::DisplaySubMenu() {
  char input;
  cout << "Welcome to the in-game menu screen :3" << endl;
  cout << "c: continue and exit the submenu \n q: quit \n v: display your "
          "character card"
       << endl
       << endl;
}

void Game::DisplayHowToPlay() {
  cout << "How to play UC Socal Love Quest <3" << endl;
  cout << "Player will be given the options between 1, 2, 3, 4, or 5 to choose "
          "specific dialogue options"
       << endl;
  cout << "1 is the first dialogue option, 2 is the second, etc" << endl;
  cout << "m: pulls up the submenu which shows different options" << endl
       << endl;
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
  cout << "Game description:" << endl;
  cout << "This project explores the different dating options and stereotypes "
          "of the UC’s in Southern California as we "
          "create personalities for each of the UC’s. The player (new transfer "
          "student) will have the opportunity to choose between multiple "
          "text options and depending on the player's choice, it can either "
          "make the characters like or dislike the player. At the end of the "
          "game, the mascot the player matches with the most will be the "
          "school they transfer to."
       << endl
       << endl;
  return;
}

void Game::DisplayOrientation() {
  string activity;
  cout << "\n\nNarrator: Welcome, everyone, to your first day! Today, you'll meet "
          "some remarkable     students, each with their own unique passions "
          "and stories. Let's hear from them directly about   their favorite "
          "outdoor activities. And you, " +
              this->name +
              ", what's an outdoor activity that   you enjoy? Feel free to "
              "share with us(enter a one word verb)."
       << endl << endl;
  cout << "Verb: ";
  getline(cin, activity);
  cout << endl << endl;
  
  cout << this->name << ": I like " << activity << "!" << endl << endl;

  cout << "Scotty: Hey there! I'm all about hiking. There's nothing like the "
          "peace and quiet of nature to make you feel alive.\n\n"
          "Angel: Competitive sports for me. It's not just about the game; "
          "it's about pushing your limits and achieving greatness.\n\n"
          "Peta: I love nature walks. They're a gentle reminder of the beauty "
          "in simplicity and the importance of taking things slow.\n\n"
          "Tris: Diving's my go-to. The ocean's depth holds mysteries and "
          "wonders that I just can't get enough of.\n\n"
          "Santi: Beach volleyball, no doubt. The sun, the sand, the "
          "adrenaline rush—it's the ultimate fun.\n"
       << endl;

  cout
      << "...\n\nNarrator: As the day unfolds, you get to know more about each student.\n\n"
         "...\n\nWith Scotty: As you discuss hiking trails, Scotty's eyes light up. "
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
         "Goodnight, " + this->name + ".\n\n"
         "[End of the scenario]"
      << endl;
}

