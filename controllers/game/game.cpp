#include "../../utils/base.h"
#include "../../src/game/loader.h"
#include "../../src/game/testMatch.h"
#include "../../src/entities/structs.h"
#include "../../src/entities/functions/pokemon/setData.h"
#include "../../src/game/singlePlayerMode.h"

void game() {
    showLoader();
    cleanScreen();
    playSingleMode();
    // testingMatch(playerOnePokemon, playerTwoPokemon, match);
    //select game mode menu
}