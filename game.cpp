#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int maxNumber) : maxNumber(maxNumber), arvma(0) {
    srand(time(NULL));
    satLuku = rand() % maxNumber;
}

void Game::play() {
    int arvaus = 0;

    while (arvaus != satLuku) {
        cout << "Arvaus: ";
        cin >> arvaus;

        if (arvaus == satLuku) {
            arvma++;
            cout << "Oikein!" << endl;
            cout << "Arvausten maara: " << arvma << endl;
            break;
        } else if (arvaus < satLuku) {
            cout << "Vaarin" << endl;
            cout << "Luku on isompi" << endl;
        } else {
            cout << "Vaarin" << endl;
            cout << "Luku on pienempi" << endl;
        }
        arvma++;
        cout << "-------------" << endl;
    }
}
