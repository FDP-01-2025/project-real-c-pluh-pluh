#include "../../../utils/base.h"
#include "../../../src/game/entities/structs.h"
#include "../../../src/game/entities/match/matchControllers.h"
#include "../../../src/enums/gameModes.h"

//define el turno de jugador si la partida empieza
void setFirstTurn(GameMatch &match) {
    int randomNumber;
    if (match.currentRound == 1) {
         randomNumber = getRandomNumber(1,2);
        if (randomNumber == 1) match.isPlayerOneTurn = true;
        else match.isPlayerOneTurn = false;
    }
}

//indica de quién es el turno
void getCurrentTurn(const GameMatch &match, const Pokemon playerOne, const Pokemon &playerTwo) {
    if (match.isPlayerOneTurn) {
        cout << "Es el turno de: " << playerOne.coach << endl;
    } else {
        if (match.gameMode == SINGLE_PLAYER) cout << "Es el turno de: " << playerTwo.name;
        else cout << "Es el turno de: " << playerTwo.coach;
        cout << endl;
    }
}

//realiza el cambio de turno
void changeTurn(GameMatch &match) {
    match.isPlayerOneTurn = !match.isPlayerOneTurn;
}

//finalizar ronda
void finishRound(GameMatch &match, Pokemon &playerOne) {
    if (playerOne.health <= 0) {
        match.playerTwoPoints++;
    } else {
        match.playerOnePoints++;
    }
    match.currentRound++;
}

//finalizar la ronda
void isMatchOver(GameMatch &match) {
    if (match.currentRound <= match.roundsQuantity) match.isMatchOver = false;
    else match.isMatchOver = true;
}