#include "../../src/game/singlePlayerMode.h"

void showMap() {
    cout << "\n ¡Bienvenido al Mapa de Aventuras Pokémon!";
    cout << "\n ¿Dónde quieres buscar una gran aventura? \n" ;

    cout << "+--------------------+---------------------+---------------------+" << endl;
    cout << "|  Bosque Verde      |  Ruta Rocosa        |  Plaza Pokémon      |" << endl;
    cout << "|        🌲          |        ⛰️          |        🏪           |" << endl;
    cout << "+--------------------+---------------------+---------------------+" << endl;
    cout << "|  Lago Lapras       |  Centro Pokémon     |  Calle Pikachu      |" << endl;
    cout << "|        🌊          |        🏥          |        ⚡           |" << endl;
    cout << "+--------------------+---------------------+---------------------+" << endl;
    cout << "|  Cueva Zubat       |  Gimnasio Fuego     |  Mercado Magikarp   |" << endl;
    cout << "|        🕳️         |        🔥          |        🎣            |" << endl;
    cout << "+--------------------+---------------------+---------------------+" << endl;

    cout << " 1. Bosque Verde      2. Ruta Rocosa       3. Plaza Pokémon\n";
    cout << " 4. Lago Lapras       5. Centro Pokémon    6. Calle Pikachu\n";
    cout << " 7. Cueva Zubat       8. Gimnasio Fuego    9. Mercado Magikarp";
}

void playSingleMode() {
    int randomPlace = getRandomNumber(1,9);
    int placeSelection;

    do {
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