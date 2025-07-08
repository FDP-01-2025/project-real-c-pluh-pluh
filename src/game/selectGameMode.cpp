#include "./selectGameMode.h"
#include "../utils/base.h"
#include "../utils/printCentered.h"

using namespace std;

// Desplegar el menu principal
void showMainMenu()  {
    cleanScreen(); // Limpiar la consola

    // Menu layout
    const string menu[] = {
        "+--------------------------------------------------+",
        "|             Selecciona tu modo de juego          |",
        "+--------------------------------------------------+",
        "|                  1.Un jugador                    |",
        "|                 2.Dos jugadores                  |",
        "+--------------------------------------------------+"
    };

    printCentered(menu, sizeof(menu) / sizeof(menu[0]));
}
// El usuario debera elegir entre entre 2 modos de juego
int selectGameMode() {
    int option;

    do {
        cout << "Selecciona el modo de juego (1 o 2): ";
        option = askForInteger();

        if (option != 1 && option != 2) {
            cout << "\nOpción inválida. Por favor, ingresa 1 o 2." << endl;
        }
    } while (option != 1 && option != 2);

    return option;
}

// El usuario debera elegir entre 3 o 5 rondas
int selectRounds() {
    int rounds;

    do {
        cout << "¿Cuántas rondas deseas jugar? (3 o 5): ";
        cin >> rounds;

        if (rounds != 3 && rounds != 5) {
            cout << "\nEntrada inválida. Por favor, elige 3 o 5 rondas."  << endl;
        }
    } while (rounds != 3 && rounds != 5);

    return rounds;
}


