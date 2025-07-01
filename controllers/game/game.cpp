#include "../../utils/base.h"
#include "../../src/game/loader.h"
#include "../../src/game/testMatch.h"
#include "../../src/entities/structs.h"
#include "../../src/entities/functions/pokemon/setData.h"
#include "../../src/game/singleMode/singlePlayerMode.h"
#include "../../src/game/selectGameMode.h"
#include "../../src/enums/gameModes.h"

void game() {
    //console setting
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int gameMode, roundsQuantity;
    showLoader();
    cleanScreen();
    showMainMenu();
    gameMode = selectGameMode();
    roundsQuantity = selectRounds();

    if (gameMode == SINGLE_PLAYER) playSingleMode();
    else if (gameMode == MULTI_PLAYER);
    else;
    // playSingleMode();
    // testingMatch(playerOnePokemon, playerTwoPokemon, match);
    //select game mode menu
}