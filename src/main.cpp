//#include "Character.h"
#include "../header/UCR.h"
#include "../header/Game.h"
#include "../header/Character.h"
#include <iostream>
#include <vector>
#include "../header/SlowTyping.h"
using namespace std;

//void CoffeeScene(UCR& ucr);

int main() {
  


  Game game;
  game.DisplayIntroMenu();
  
  
  game.DisplayOrientation();
  game.CoffeeScene();
  //game.DisplaySubMenu()
  // game.DisplayHowToPlay();
  // game.GameDescription();
  // game.DisplaySubMenu();
  // game.DisplayQuitScreen();

  

  return 0;
}

// void CoffeeScene(UCR& ucr) {
//   int drink;
//   cout << "Narrator: The aroma of freshly brewed coffee fills the air as you "
//           "step into the cozy campus coffee shop. It's a bustling hub of "
//           "activity, with students from various backgrounds engrossed in "
//           "different pursuits. The menu boasts a diverse selection of drinks, "
//           "each one a favorite of the friends you've made so far. What will "
//           "you choose\n\n"
//           "1. A bold espresso (Angel's choice)\n"
//           "2. A soothing herbal tea (Peta's choice)\n"
//           "3. A refreshing iced latte (Scotty's choice)\n"
//           "4. A rich hot chocolate (Tris's choice)\n"
//           "5. A vibrant fruit smoothie (Santi's choice)\n"
//        << endl;
//   cin >> drink;
//   switch (drink) {
//   case 1:
//     break;
//   case 2:
//     break;
//   case 3:
//     ucr.IncreaseMoodPoints(3);
//     break;
//   case 4:
//     break;
//   case 5:
//     break;
//   default:
//     cout << "Invalid input. Please try again.\n\n";
//     break; // Show the menu again for any other input
//   }

//   int activity;
//   cout << "\nNarrator: With your drink in hand, you glance around at the various activities unfolding around you. What brings you to the coffee shop today?\n\n"
   
//     "1. To study for an upcoming exam (Angel's activity)\n"
//     "2. To enjoy a quiet read (Peta's activity)\n"
//     "3. To sketch the scenery (Scotty's activity)\n"
//     "4. To dive into a new video game (Tris's activity)\n"
//     "5. To socialize and meet new people (Santi's activity)\n"
//     << endl;
  
//   cin >> activity;
//   switch (activity) {
//   case 1:
//     break;
//   case 2:
//     break;
//   case 3:
//     ucr.IncreaseMoodPoints(7);
//     ucr.DisplayCoffeeScene();
//     break;
//   case 4:
//     break;
//   case 5:
//     break;
//   default:
//     cout << "Invalid input. Please try again.\n\n";
//     break; // Show the menu again for any other input
//   }

//   cout << "\n...\n\nNarrator: As the hours slip by, you find yourself deeply engaged in the activity you've chosen, learning more about your companion and yourself in the process. The coffee shop has become a place of connection, reflection, and discovery.\n\n...\n\n"
//     "[The scene gently fades to the background noise of the coffee shop]"
//     "\n\n...\n\nNarrator: You leave the coffee shop feeling refreshed and inspired, ready to tackle the next adventure that awaits you on campus. The relationships you're building here will surely last a lifetime.\n\n"
//     "[End of the scenario]" << endl;

// }