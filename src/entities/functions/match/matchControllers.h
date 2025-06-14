#ifndef MATCH_H
#define MATCH_H

#include "../../../../utils/base.h"
#include "../../structs.h"

void getCurrentTurn(string coachOneName, string coachTwoName);
void setFirstTurn();
void changeTurn();
void finishRound();
bool isMatchOver();

#endif
