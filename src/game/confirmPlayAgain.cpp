#include "confirmPlayAgain.h"

bool confirmPlayAgain() {
    cleanScreen();
    bool isElectionOk = false, decision = true;
    int election;

        const string menu[] = {
            "+--------------------------------------------------+",
            "  |   Fin del juego, ¿deseas volver al menú?         |",
            "|                                                  |",
            "+--------------------------------------------------+",
            "|                1. Confirmar                      |",
            "|                   2. Salir                       |",
            "+--------------------------------------------------+"
        };

while (true) {

    cleanScreen();
    printCentered(menu, sizeof(menu) / sizeof(menu[0]));
    
    cout << "Digita tu opción: ";
    election = askForInteger();

        switch (election)
        {
            case 1: return true;
            case 2: return false;
            default:
                cout << "\nLa opción ingresada es incorrecta: ";
                Sleep(2000);
                break;
        }
    }
}
