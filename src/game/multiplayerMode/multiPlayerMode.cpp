#include "./multiPlayerMode.h"
#include "../entities/match/createMatch.h"
#include "../../enums/gameModes.h"

//función principal para el modo de juego multijugador
//recibe la cantidad de rondas desde game.cpp para pasarle ese dato a createMatch()
void playMultiplayerMode(int roundsQuantity) {
    createMatch(MULTI_PLAYER, roundsQuantity);
}
