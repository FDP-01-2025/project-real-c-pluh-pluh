#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <limits>
#include <random>
#include <cstdlib>
#include <windows.h>
#include <string>

using namespace std;

int askForInteger();
string askForString();
void cleanInput();
int getRandomNumber(int minNumber, int maxNumber);
void cleanScreen();
void freezeInput();

#endif
