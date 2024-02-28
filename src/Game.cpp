#include "../header/Game.h"

Game::Game(){};

void Game::DisplayIntroMenu(){
    cout << left << "Welcome to UC Socal Love Quest!! <3 " << endl;
    cout << left << "g: game description\nh: how to play\nc: continue/start game (once you press c, you start the game and go into the dialogue screen)\nq: quit" << endl << endl;
}

void Game::DisplaySubMenu(){
    cout << left << "Welcome to the in-game menu screen :3" << endl;
    cout << left << "c: continue and exit the submenu\nq: quit\nv: display your character card" << endl << endl;
}

void Game::DisplayHowToPlay(){
    cout << left << "How to play UC Socal Love Quest <3" << endl;
    cout << left << "Player will be given the options between 1, 2, 3, or 4 to choose specific dialogue options" << endl;
    cout << left << "1 is the first dialogue option, 2 is the second, etc" << endl;
    cout << left << "m: pulls up the submenu which shows different options" << endl << endl;
}

void Game::DisplayQuitScreen(){
    cout << "Are you sure you wanna quit? (press q again to quit, c to return)" << endl << endl;
}

void Game::GameDescription(){
    cout << left << "Game description:" << endl;
    cout << left << "This project explores the different dating options and stereotypes of the UC’s in Southern California as we "
        "create personalities for each of the UC’s. The player (new transfer student) will have the opportunity to choose between multiple "
        "text options and depending on the player's choice, it can either make the characters like or dislike the player. At the end of the "
        "game, the mascot the player matches with the most will be the school they transfer to." << endl << endl;

}
