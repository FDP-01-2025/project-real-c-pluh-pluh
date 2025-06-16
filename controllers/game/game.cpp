#include "../../utils/base.h"
#include "../../src/game/loader.h"
#include "../../src/game/testMatch.h"
#include "../../src/entities/structs.h"
#include "../../src/entities/functions/pokemon/setData.h"

void game() {
    showLoader();
    cleanScreen();
    setData(playerOnePokemon);
    // testingMatch(playerOnePokemon, playerTwoPokemon, match);
    //select game mode menu
}