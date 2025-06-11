#include "../../utils/base.h"

struct GameSession {
    bool isPlayerOneTurn, isGameOver = false;
    int gameMode, currentRound = 1, roundsQuantity;
    int playerOnePoints = 0, playerTwoPoints = 0;
} match;