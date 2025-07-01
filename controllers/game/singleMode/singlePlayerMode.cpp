#include "../../../src/game/singleMode/singlePlayerMode.h"
#include "../../../src/game/singleMode/showMap.h"

void showMap();

void playSingleMode() {
    int randomPlace = getRandomNumber(1,9);
    int placeSelection;

    do {
        cleanScreen();
        showMap();  
        cout << "\n\n Selecciona un lugar del mapa para explorar (Digita una opción):" ;
        placeSelection = askForInteger();

        if ( placeSelection == randomPlace) {
            cout << "¡Un Pokémon salvaje apareció! 🐾⚔️" << endl;
            return;
        } else {
            cout << "\n Aquí no hay nada... sigue buscando " << endl;
            Sleep(2000);
            cleanScreen();
        }
    } while (true);
}