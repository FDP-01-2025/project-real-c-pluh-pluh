#include "../../../src/game/singleMode/singlePlayerMode.h"
#include "../../../src/game/singleMode/createMatch.h"
#include "../../../src/game/singleMode/showMap.h"

//función principal para el modo de juego solitario
void playSingleMode() {
    int randomPlace = getRandomNumber(1,9);
    int placeSelection;

    while (true) {
        cleanScreen();
        showMap();  
        cout << "\n\n Selecciona un lugar del mapa para explorar (Digita una opción):" ;
        placeSelection = askForInteger();

        if (placeSelection == randomPlace) {
            cleanScreen();
            cout << "¡Un Pokémon salvaje apareció! 🐾⚔️" << endl;
            Sleep(2000);
            createMatch();
            break;
        } else {
            cout << "\n Aquí no hay nada... sigue buscando " << endl;
            Sleep(2000);
            cleanScreen();
        }
    }
}
