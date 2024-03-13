
#include <iostream>
#include <vector>
#include "../header/SlowTyping.h"
using namespace std;

//void CoffeeScene(UCR& ucr);

int main() {
  int ucrmood = 0;
  vector<string> UCRLikes = {"", "", ""};
  vector<string> UCRDislikes = {"", "", ""};
  UCR S("Scottie", ucrmood, UCRLikes, UCRDislikes);

  S.DisplayCharacterCard();
}