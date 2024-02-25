#include "Character.h"
#include "UCR.h"
#include <iostream>
#include <vector>

int main() {
  int ucrmood = 0;
  vector<string> UCRLikes = {"", "", ""};
  vector<string> UCRDislikes = {"", "", ""};
  UCR S("Scottie", ucrmood, UCRLikes, UCRDislikes);

  S.DisplayCharacterCard();
}