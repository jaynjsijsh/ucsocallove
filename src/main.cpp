#include "../header/Game.h"
#include "../header/UCR.h"
#include "../header/UCI.h"
#include "../header/UCLA.h"
#include "../header/UCSB.h"
#include "../header/UCSD.h"
#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include "../header/SlowTyping.h"
using namespace std;

int main() {
  Game game;
  game.DisplayIntroMenu();
  game.DisplayOrientation();
  game.CoffeeScene();
 return 0;
}