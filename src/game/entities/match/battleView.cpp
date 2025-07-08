#include "./battleView.h"
#include "../structs.h"

void battleView(const Pokemon &playerOne, const Pokemon &playerTwo, const GameMatch &match) {
    // --- Imprimir información general de la batalla (se mantiene visible) ---
    cout << "==========================================" << endl;
    cout << playerOne.emoji << playerOne.name << " (HP: " << playerOne.health << "/" << playerOne.baseHealth << ")" << endl;
    cout << playerTwo.emoji << playerTwo.name << " (HP: " << playerTwo.health << "/" << playerTwo.baseHealth << ")" << endl;
    cout << "==========================================" << endl;
    cout << "\n"; 

    // --- Lógica para imprimir solo el arte del jugador en turno ---
    if (match.isPlayerOneTurn) {
        // Es el turno del Jugador 1
        cout << "--> Turno de " << playerOne.emoji << " " << playerOne.name << "!" << endl;
        for (int i = 0; i < playerOne.asciiLines; ++i) {
            cout << playerOne.asciiArt[i] << endl;
        }
    } else {
        // Es el turno del Jugador 2
        cout << "--> Turno de " << playerTwo.emoji << playerTwo.name << "!" << endl;
        for (int i = 0; i < playerTwo.asciiLines; ++i) {
            cout << playerTwo.asciiArt[i] << endl;
        }
    }

    cout << "\n";
}

