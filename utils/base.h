#ifndef COMMON_H
#define COMMON_H

#include <iostream>
#include <limits>
#include <random>
#include <cstdlib>

using namespace std;

int askForInteger();
string askForString();
void cleanInput();
int getRandomNumber(int minNumber, int maxNumber);
void cleanScreen();
void freezeInput();

#endif
