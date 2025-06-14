#include "../../../../utils/base.h"
#include "../../../../src/entities/structs.h"

void setFirstTurn() {
    int randomNumber;
    if (match.currentRound == 1) randomNumber = getRandomNumber(1,2);

    if (randomNumber == 1) match.isPlayerOneTurn = true;
    else match.isPlayerOneTurn = false;
}

void getCurrentTurn(string coachOneName, string coachTwoName){
    setFirstTurn();
    
    if (match.isPlayerOneTurn) {
        cout << "Es el turno de: " << coachOneName << endl;
    } else {
        cout << "Es el turno de: " << coachTwoName << endl;
    }
}

void changeTurn() {
    match.isPlayerOneTurn = !match.isPlayerOneTurn;
}

void finishRound() {
    if (playerOnePokemon.health <= 0) {
        match.playerTwoPoints++;
    } else {
        match.playerOnePoints++;
    }
    match.currentRound++;
}

void isMatchOver() {
    if (match.currentRound <= match.roundsQuantity) match.isMatchOver = true;
}