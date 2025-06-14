#include "base.h"
#include <chrono>

void cleanInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int getRandomNumber(int minNumber, int maxNumber) {
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 gen(seed);
    uniform_int_distribution<> distrib(minNumber, maxNumber);
    return distrib(gen);
}

void cleanScreen() {
    system("cls");
}

void freezeInput() {
    //literalmente querer leer algo de puro relleno, no darle nada solo para "congelar" y observar comportamiento del juego
    int freeze;
    cin >> freeze;
}