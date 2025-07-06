#include "./selectGameMode.h"
#include "../utils/base.h"

using namespace std;

// Displays the main menu 
void showMainMenu() 
{
    cleanScreen(); // Clear the console
    cout << R"(  __  __           _             _          _                        
                    |  \/  | ___   __| | ___     __| | ___    (_)_   _  ___  __ _  ___  
                    | |\/| |/ _ \ / _` |/ _ \   / _` |/ _ \   | | | | |/ _ \/ _` |/ _ \ 
                    | |  | | (_) | (_| | (_) | | (_| |  __/   | | |_| |  __/ (_| | (_) |
                    |_|  |_|\___/ \__,_|\___/   \__,_|\___|  _/ |\__,_|\___|\__, |\___/ 
                                                           |__/            |___/           
    )" << endl;


    cout << "╔══════════════════════════════════════════════╗" << endl;
    cout << "║               MENU PRINCIPAL                 ║" << endl;
    cout << "╠══════════════════════════════════════════════╣" << endl;
    cout << "║  1. Un jugador                               ║" << endl;
    cout << "║  2. Dos jugadores                            ║" << endl;
    cout << "╚══════════════════════════════════════════════╝" << endl;
}
// Prompts the user to select a game mode (1 or 2 players)
int selectGameMode() {
    int option;

    do {
        cout << "Selecciona el modo de juego (1 o 2): ";
        cin >> option;

        if (cin.fail() || (option != 1 && option != 2)) {
            cout << "Opción inválida. Por favor, ingresa 1 o 2." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (option != 1 && option != 2);

    return option;
}

// Prompts the user to choose number of rounds (only 3 or 5)
int selectRounds() {
    int rounds;

    do {
        cout << "¿Cuántas rondas deseas jugar? (3 o 5): ";
        cin >> rounds;

        if (cin.fail() || (rounds != 3 && rounds != 5)) {
            cout << "Entrada inválida. Por favor, elige 3 o 5 rondas."  << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (rounds != 3 && rounds != 5);

    return rounds;
}
    // Determines and displays the match winner
void showMatchWinner(int player1Wins, int player2Wins) {
    cout << "\n============== RESULTADO DE LA PARTIDA ==============" << endl;

    if (player1Wins > player2Wins) {
        cout << "🎉 ¡El Jugador 1 gana la partida!" << endl;
    } else if (player2Wins > player1Wins) {
        cout << "🎉 ¡El Jugador 2 gana la partida!" << endl;
    } else {
        cout << "🤝 ¡Empate!" << endl;
    }

    cout << "===========================================" << endl;
}



