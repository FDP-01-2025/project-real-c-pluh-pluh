// #include "../../../../utils/base.h"
// #include "../../../../src/entities/structs.h"

// //define el turno de jugador si la partida empieza
// void setFirstTurn() {
//     int randomNumber;
//     if (match.currentRound == 1) randomNumber = getRandomNumber(1,2);

//     if (randomNumber == 1) match.isPlayerOneTurn = true;
//     else match.isPlayerOneTurn = false;
// }

// //indica de quién es el turno
// void getCurrentTurn(string coachOneName, string coachTwoName){
//     setFirstTurn();
    
//     if (match.isPlayerOneTurn) {
//         cout << "Es el turno de: " << coachOneName << endl;
//     } else {
//         cout << "Es el turno de: " << coachTwoName << endl;
//     }
// }

// //realiza el cambio de turno
// void changeTurn() {
//     match.isPlayerOneTurn = !match.isPlayerOneTurn;
// }

// //finalizar ronda
// void finishRound() {
//     if (playerOnePokemon.health <= 0) {
//         match.playerTwoPoints++;
//     } else {
//         match.playerOnePoints++;
//     }
//     match.currentRound++;
// }

// //finalizar la ronda
// void isMatchOver() {
//     if (match.currentRound <= match.roundsQuantity) match.isMatchOver = false;
//     else match.isMatchOver = true;
// }