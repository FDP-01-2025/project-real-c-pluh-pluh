#ifndef STRUCTS_H
#define STRUCTS_H

#include "../../utils/base.h"

struct Pokemon {
    string name;
    string coach;
    int baseHealth = 1, health = 1;
    int type = 1, typeOfWeakness = 1;
};

struct GameMatch {
    bool isPlayerOneTurn, isMatchOver = false;
    int gameMode, currentRound = 1, roundsQuantity;
    int playerOnePoints = 0, playerTwoPoints = 0;
};

extern Pokemon playerOnePokemon, playerTwoPokemon;
extern GameMatch match;

#endif 
