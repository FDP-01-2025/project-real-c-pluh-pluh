#ifndef PRINT_CENTERED_H
#define PRINT_CENTERED_H

#include "base.h"

int getConsoleWidth();
int getConsoleHeight();
int visibleWidth(const string& line);
void printCentered(const string lines[], int lineCount);

#endif 


