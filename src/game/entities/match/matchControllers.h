#ifndef MATCH_H
#define MATCH_H

#include "../../../utils/base.h"
#include "../structs.h"

void setFirstTurn(GameMatch &match); // función que establece el primer turno
//función que indica de qué jugador es el turno
void getCurrentTurn(const GameMatch &match, const Pokemon playerOne, const Pokemon &playerTwo);
//función que realiza el cambio de turno
void changeTurn(GameMatch &match);
//función que verifica si la ronda ha terminado
void finishRound(GameMatch &match, Pokemon &playerOne);
void isMatchOver(GameMatch &match);//función que verifica si la partida ha terminado

#endif
