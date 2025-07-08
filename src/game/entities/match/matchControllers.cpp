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

//realiza el cambio de turno
void changeTurn(GameMatch &match) {
    match.isPlayerOneTurn = !match.isPlayerOneTurn;
    if (match.isPlayerOneTurn) match.playerOneTurns++;
    else match.playerTwoTurns++;
}

//finalizar ronda
void finishRound(GameMatch &match, Pokemon &playerOne, Pokemon &playerTwo) {
    string roundWinner = playerOne.health == 0 ? playerTwo.name : playerOne.name;

    if (playerOne.health == 0) match.playerTwoPoints++;
    else match.playerOnePoints++;

    printStringCentered("🎉 El ganador de la ronda es: " + roundWinner + " 🎉");
    Sleep(2000);
    cleanScreen();
    printStringCentered(playerOne.emoji + " " + playerOne.name + " puntos: " + to_string(match.playerOnePoints));
    Sleep(2000);
    cleanScreen();
    printStringCentered(playerTwo.emoji + " " + playerTwo.name + " puntos: " + to_string(match.playerTwoPoints));
    Sleep(2000);

    match.playerOneTurns = 0;
    match.playerTwoTurns = 0;
    playerOne.health = playerOne.baseHealth;
    playerTwo.health = playerTwo.baseHealth;
}