#include "../header/Character.h"
#include "../header/UCLA.h"
#include <iostream>
#include <vector>

int main() {
  int ucrmood = 0;
  vector<string> UCLALikes = {"", "", ""};
  vector<string> UCLADislikes = {"", "", ""};
  UCLA A("Angel", UCLAmoodPoints, UCLALikes, UCLADislikes);

  A.DisplayCharacterCard();
}