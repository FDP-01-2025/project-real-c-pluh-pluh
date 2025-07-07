#include "./playMatch.h"
#include "./matchControllers.h"
#include "../../../enums/gameModes.h"
#include "../pokemon/attack.h"
#include "./battleView.h"

void play(Pokemon &playerOne, Pokemon &playertwo, GameMatch &match) {
    cleanScreen();
    cout << "⚔️ ¡Una nueva batalla Pokémon está por comenzar! ⚔️";
    Sleep(2000);
    cleanScreen();

    switch(match.gameMode) {
        case SINGLE_PLAYER:
            //bucle externo para manejar las rondas de la partida
            for (int i = 1; i <= match.roundsQuantity; i++) {
                cout << "Ronda: " << i << endl;
                Sleep(1500);
                setFirstTurn(match);
                //bucle interno para manejar ronda
                while (playerOne.health > 0 && playertwo.health > 0) {
                    battleView(playerOne, playertwo, match);
                    attackTurn(playerOne, playertwo, match);
                    changeTurn(match);
                }
                finishRound(match, playerOne, playertwo);
                Sleep(2000);
                cleanScreen();
            }
            if (match.playerOnePoints > match.playerTwoPoints) {
                cout << "🎉 El ganador de la ronda es: " << playerOne.name << "🎉" << endl;
            } else {
                cout << "🎉 El ganador de la ronda es: " << playertwo.name << "🎉" << endl;
            }
            break;

        case MULTI_PLAYER: 
            // bucle externo para manejar las rondas de la partida
            for (int i = 1; i <= match.roundsQuantity; i++) {
                cout << "Ronda: " << i << endl;
                Sleep(1500);
                setFirstTurn(match);
                //bucle interno para manejar ronda
                while (playerOne.health > 0 && playertwo.health > 0) {
                    // getCurrentTurn(match, playerOne, playertwo);
                    battleView(playerOne, playertwo, match);
                    attackTurn(playerOne, playertwo, match);
                    cleanScreen();
                    changeTurn(match);
                }
                finishRound(match, playerOne, playertwo);
                Sleep(2000);
                cleanScreen();
            }
            if (match.playerOnePoints > match.playerTwoPoints) {
                cout << "🎉 El ganador de la partida es: " << playerOne.name << "🎉" << endl;
            } else {
                cout << "🎉 El ganador de la partida es: " << playertwo.name << "🎉" << endl;
            }
            break;
        default: 
            cout << "\nopción ingresada no es válida";
            break;
    }
}