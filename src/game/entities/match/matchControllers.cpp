#include "../../../utils/base.h"
#include "../structs.h"
#include "./matchControllers.h"
#include "../../../enums/gameModes.h"

//define el turno de jugador si la partida empieza
void setFirstTurn(GameMatch &match) {
    int randomNumber;
    randomNumber = getRandomNumber(1,2);
    if (randomNumber == 1) { match.isPlayerOneTurn= true; match.playerOneTurns++; }
    else { match.isPlayerOneTurn = false; match.playerTwoTurns++; }
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
    if (match.isPlayerOneTurn) match.playerOneTurns++;
    else match.playerTwoTurns++;
}

//finalizar ronda
void finishRound(GameMatch &match, Pokemon &playerOne) {
    if (playerOne.health <= 0) {
        match.playerTwoPoints++;
    } else {
        match.playerOnePoints++;
    }
    match.currentRound++;
    match.playerOneTurns = 0;
    match.playerTwoTurns = 0;
}