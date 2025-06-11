// #include "../utils/base.h"
// #include "../utils/randomNumber.h"
// //class
// #include "gameSession.h"

// void GameSession::setFirstTurn() {
//     //0 = jugador uno, 1 = jugador 2
//     int randomNumber = getRandomNumber(0, 1);

//     if (randomNumber == 0) isPlayerOneTurn = true;
//     else isPlayerOneTurn = false;
// }

// void GameSession::getCurrentTurn(string coachOneName, string coachTwoName) {
//     if (isPlayerOneTurn) cout << "\n Es el turno de " << coachOneName;
//     else cout << "\n Es el turno de " << coachTwoName;
// }

// void GameSession::changeTurn() {
//     if (isPlayerOneTurn) isPlayerOneTurn = false;
//     else isPlayerOneTurn = true;
// }

// int GameSession::getCurrentRound() { return currentRound; }

// int GameSession::getRoundsQuantity() { return roundsQuantity; }

// void GameSession::finishRound(bool isPlayerOneWinner) { 
//     if (isPlayerOneWinner) playerOnePoints++;
//     else playerTwoPoints++;

//     currentRound++;
// }

// GameSession::GameSession(int gameModeSelected, int roundsQuantitySelected) {
//     gameMode = gameModeSelected;
//     roundsQuantity = roundsQuantitySelected;

//     if (currentRound == 1) setFirstTurn();
// }
