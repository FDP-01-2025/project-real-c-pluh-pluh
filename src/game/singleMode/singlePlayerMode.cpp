#include "./singlePlayerMode.h"
#include "../entities/match/createMatch.h"
#include "./showMap.h"
#include "../../enums/gameModes.h"

//función principal para el modo de juego solitario
//recibe la cantidad de rondas desde game.cpp para pasarle ese dato a createMatch()
void playSingleMode(int roundsQuantity) {
    int randomPlace = getRandomNumber(1,9);
    int placeSelection;

    while (true) {
        cleanScreen();
        showMap();  
        cout << "\n\n Selecciona un lugar del mapa para explorar (Digita una opción): ";
        placeSelection = askForInteger();

        if (placeSelection == randomPlace) {
            cout << "¡Un Pokémon salvaje apareció! 🐾⚔️\n";
            Sleep(2000);
            cleanScreen();
            createMatch(SINGLE_PLAYER, roundsQuantity);
            break;
        } else {
            cout << "\n Aquí no hay nada... sigue buscando";
            Sleep(1000);
            cleanScreen();
        }
    }
}
