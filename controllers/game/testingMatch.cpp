#include "../../utils/base.h"
#include "../../src/game/testMatch.h"
#include "../../src/entities/structs.h"
#include "../../src/entities/functions/match/matchControllers.h"

void testingMatch(Pokemon playerOne, Pokemon playerTwo, GameMatch match) {
    playerOne.coach = "Eobard Thawne";
    playerTwo.coach = "Arsene Lupin";
    do {
        getCurrentTurn(playerOne.coach, playerTwo.coach);
        freezeInput();
    } while(!match.isMatchOver);
}