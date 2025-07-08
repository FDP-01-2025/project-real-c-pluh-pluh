#include "./playMatch.h"
#include "./matchControllers.h"
#include "../../../enums/gameModes.h"
#include "../pokemon/attack.h"
#include "./battleView.h"
#include "../../../utils/base.h"

void handleMatch(Pokemon &playerOne, Pokemon &playertwo, GameMatch &match);

void play(Pokemon &playerOne, Pokemon &playertwo, GameMatch &match) {
    cleanScreen();
    printStringCentered("⚔️ ¡Una nueva batalla Pokémon está por comenzar! ⚔️");
    Sleep(2000);
    cleanScreen();
    switch(match.gameMode) {
        case SINGLE_PLAYER:
            handleMatch(playerOne, playertwo, match);
            break;
        case MULTI_PLAYER: 
            handleMatch(playerOne, playertwo, match);
            break;
        default: 
            cout << "\nopción ingresada no es válida";
            break;
    }
}

void handleMatch(Pokemon &playerOne, Pokemon &playerTwo, GameMatch &match) {
    //bucle externo para manejar las rondas de la partida
    for (int i = 1; i <= match.roundsQuantity; i++) {
        printStringCentered("⚔️ Ronda: " + to_string(i) + " ⚔️");
        Sleep(1500);
        cleanScreen();
        setFirstTurn(match);
        //bucle interno para manejar ronda
        while (playerOne.health > 0 && playerTwo.health > 0) {
            battleView(playerOne, playerTwo, match);
            attackTurn(playerOne, playerTwo, match);
            changeTurn(match);
        }
        finishRound(match, playerOne, playerTwo);
        Sleep(2000);
        cleanScreen();
    }
    if (match.playerOnePoints > match.playerTwoPoints) {
        printStringCentered( "🏆 El ganador de la partida es: " + playerOne.emoji + " " + playerOne.name + " con " + to_string(match.playerOnePoints) + " puntos" + " 🏆");
        Sleep(3500);
    } else {
        printStringCentered( "🏆 El ganador de la partida es: " + playerTwo.emoji + " " + playerTwo.name + " con " + to_string(match.playerTwoPoints) + " puntos" + " 🏆");
        Sleep(3500);
    }
}