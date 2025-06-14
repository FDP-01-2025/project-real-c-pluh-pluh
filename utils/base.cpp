#include "base.h"

void cleanInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int getRandomNumber(int minNumber, int maxNumber) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(minNumber, maxNumber);
    return distrib(gen);
}

void cleanScreen() {
    system("cls");
}
