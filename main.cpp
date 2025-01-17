#include <iostream>

#include "game.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int maxnum;

    cout << "Anna max arvaus luku: ";
    cin >> maxnum;

    Game game(maxnum);
    game.play();

    return 0;
}
