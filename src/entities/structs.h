#include "../../utils/base.h"

struct Pokemon {
    string name;
    string coach;
    int baseHealth = 1, health = 1;
    int type = 1, typeOfWeakness = 1;
} playerOnePokemon, playerTwoPokemon;

struct GameMatch {
    bool isPlayerOneTurn, isMatchOver = false;
    int gameMode, currentRound = 1, roundsQuantity;
    int playerOnePoints = 0, playerTwoPoints = 0;
} match;