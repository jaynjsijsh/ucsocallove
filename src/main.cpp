#include "../header/Character.h"
#include "../header/UCR.h"
#include "../header/Game.h"

#include <iostream>
#include <vector>

int main() {
  /*int ucrmood = 0;
  vector<string> UCRLikes = {"", "", ""};
  vector<string> UCRDislikes = {"", "", ""};
  UCR S("Scottie", ucrmood, UCRLikes, UCRDislikes);

  S.DisplayCharacterCard();
  */

 
 Game game;
 game.DisplayIntroMenu();
 game.DisplayHowToPlay();
 game.GameDescription();
 game.DisplaySubMenu();
 game.DisplayQuitScreen();
}