#include "./selectGameMode.h"
#include "../utils/base.h"

using namespace std;

// Desplegar el menu principal
void showMainMenu() 
{
    cleanScreen(); // Limpiar la consola
    cout << R"(  
                    ___  ___         ___           ___                                
                    |  \/  | ___   __| | ___     __| | ___    (_)_   _  ___  __ _  ___  
                    | |\/| |/ _ \ / _` |/ _ \   / _` |/ _ \   | | | | |/ _ \/ _` |/ _ \ 
                    | |  | | (_) | (_| | (_) | | (_| |  __/   | | |_| |  __/ (_| | (_) |
                    |_|  |_|\___/ \__,_|\___/   \__,_|\___|  _/ |\__,_|\___|\__, |\___/ 
                                                           |__/            |___/           
    )" << endl;

// Ejecucion del menu principal
    cout << "╔══════════════════════════════════════════════╗" << endl;
    cout << "║               MENU PRINCIPAL                 ║" << endl;
    cout << "╠══════════════════════════════════════════════╣" << endl;
    cout << "║  1. Un jugador                               ║" << endl;
    cout << "║  2. Dos jugadores                            ║" << endl;
    cout << "╚══════════════════════════════════════════════╝" << endl;
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


