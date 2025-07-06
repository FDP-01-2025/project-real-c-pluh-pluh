#include "../utils/base.h"
#include "loader.h"
#include "./entities/structs.h"
#include "../enums/gameModes.h"
#include "./entities/pokemon/setData.h"
#include "./selectGameMode.h"
#include "./singleMode/singlePlayerMode.h"

//función principal del juego que manejará toda la lógica
void game() {
    //configuración de metadatos
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int gameMode, roundsQuantity;
    showLoader();
    cleanScreen();
    showMainMenu();
    gameMode = selectGameMode();
    roundsQuantity = selectRounds();

    if (gameMode == SINGLE_PLAYER) playSingleMode(roundsQuantity);
    else if (gameMode == MULTI_PLAYER);
    else;
    // playSingleMode();
    // testingMatch(playerOnePokemon, playerTwoPokemon, match);
    //select game mode menu
}