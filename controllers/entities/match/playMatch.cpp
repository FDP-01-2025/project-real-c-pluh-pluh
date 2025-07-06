#include "../../../src/game/entities/match/playMatch.h"
#include "../../../src/game/entities/match/matchControllers.h"
#include "../../../src/enums/gameModes.h"
#include "../../../src/game/entities/pokemon/attack.h"

void play(Pokemon &playerOne, Pokemon &playertwo, GameMatch &match) {
    cleanScreen();
    cout << "⚔️ ¡Una nueva batalla Pokémon está por comenzar! ⚔️";
    Sleep(2000);
    cleanScreen();

    switch(match.gameMode) {
        case SINGLE_PLAYER:
            //bucle externo para manejar las rondas de la partida
            for (int i = 1; i <= match.roundsQuantity; i++) {
                setFirstTurn(match);
                //bucle interno para manejar ronda
                while (playerOne.health > 0 || playertwo.health > 0) {
                    getCurrentTurn(match, playerOne, playertwo);
                    attackTurn(playerOne, playertwo, match);
                    changeTurn(match);
                }
                finishRound(match, playerOne);
            }
            break;

        case MULTI_PLAYER: 
            while (playerOne.health > 0 || playertwo.health > 0) {
            }
            break;
        default: 
            cout << "\nopción ingresada no es válida";
            break;
    }
}