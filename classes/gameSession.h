#ifndef GAMESESSION
#define GAMESESSION_H

#include "../utils/base.h"

class GameSession {
    private:
        bool isPlayerOneTurn, isGameOver = false;
        int gameMode, currentRound = 1, roundsQuantity;
        int playerOnePoints = 0, playerTwoPoints = 0;

    public:
        //getters 
        int getPlayerOnePoints();
        int getPlayerTwoPoints();
        int getCurrentRound();
        int getRoundsQuantity();
        int getGameMode();
        void getCurrentTurn(string coachOneName, string coachTwoName);

        //setters
        void setFirstTurn();
        void changeTurn();
        void finishRound(bool isPlayerOneWinner);
        void isMatchOver(int gameRound, int roundsQuantity);

        GameSession(int gameModeSelected, int roundsQuantitySelected);
};

#endif
