#ifndef MATCH_H
#define MATCH_H

#include "../../../../utils/base.h"
#include "../../structs.h"

//función que indica de qué jugador es el turno
void getCurrentTurn(string coachOneName, string coachTwoName);
void setFirstTurn(); // función que establece el primer turno
void changeTurn(); //función que realiza el cambio de turno
void finishRound(); //función que verifica si la ronda ha terminado
bool isMatchOver(); //función que verifica si la partida ha terminado

#endif
