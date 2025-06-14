#include "../../utils/base.h"
#include "../../src/game/loader.h"
#include "../../src/game/testMatch.h"
#include "../../src/entities/structs.h"

void game() {
    showLoader();
    testingMatch(playerOnePokemon, playerTwoPokemon, match);
    //select game mode menu
}