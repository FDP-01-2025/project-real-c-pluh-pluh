#include <iostream>

using namespace std;

class GameSession {
    private:
        bool isGameOver = false;
        bool isRoundOver = false;
        bool isPlayerOneTurn;
        int gameRound = 1;
        int playerOnePoints = 0;
        int playerTwoPoints = 0;

    public:
        //getters 
        int getPlayerOnePoints();
        int getPlayerTwoPoints();
        int getGameRound();

        //setters
        void setFirstTurn();
        void changeTurn();
        void finishRound(bool isPlayerOneWinner);
};