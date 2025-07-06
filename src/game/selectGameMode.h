#ifndef SELECT_GAME_MODE_H
#define SELECT_GAME_MODE_H

//función que muestra en ascii art un texto que indica que estamos en el menú principal
void showMainMenu();
//función que evalúa un número ingresado para verificar el modo de juego
int selectGameMode();
//función que evalúa un número ingresado para elegir la cantidad de rondas a jugar
int selectRounds();
void showMatchWinner(int player1Wins, int player2Wins);

#endif