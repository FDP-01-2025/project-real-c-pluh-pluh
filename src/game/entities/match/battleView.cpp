#include "./battleView.h"
#include "../structs.h"

// void battleView(const Pokemon &playerOne, const Pokemon &playerTwo, const GameMatch &match) {
//     // 1. Encontrar la altura máxima entre los dos artes ASCII
//     int maxLines = max(playerOne.asciiLines, playerTwo.asciiLines);

//     // 2. Calcular el ancho del primer Pokémon para alinear correctamente
//     size_t playerOneArtWidth = 0;
//     if (playerOne.asciiLines > 0) {
//         playerOneArtWidth = string(playerOne.asciiArt[0]).length();
//     }

//     // --- Imprimir información superior (opcional) ---
//     cout << playerOne.name << " (Entrenador: " << playerOne.coach << ")" << endl;
//     cout << "HP: " << playerOne.health << "/" << playerOne.baseHealth << endl;
//     cout << "----------------------------------" << endl;
//     cout << playerTwo.name << " (Entrenador: " << playerTwo.coach << ")" << endl;
//     cout << "HP: " << playerTwo.health << "/" << playerTwo.baseHealth << endl;
//     cout << "\n\n"; // Espacio antes de los artes

//     // 3. Bucle principal para imprimir ambos artes línea por línea
//     for (int i = 0; i < maxLines; ++i) {
//         // Imprimir línea del Jugador 1 (izquierda)
//         if (match.isPlayerOneTurn && i < playerOne.asciiLines) {
//             cout << playerOne.asciiArt[i];
//             // Añadir relleno si esta línea es más corta que el ancho máximo del arte
//             size_t currentLineWidth = string(playerOne.asciiArt[i]).length();
//             if (currentLineWidth < playerOneArtWidth) {
//                 cout << string(playerOneArtWidth - currentLineWidth, ' ');
//             }
//         } else {
//             // Si el arte del jugador 1 ya terminó, imprimir espacios para mantener la alineación
//             cout << string(playerOneArtWidth, ' ');
//         }

//         // Espacio de separación entre los dos artes
//         cout << "          "; 
        
//         // Imprimir línea del Jugador 2 (derecha)
//         if (!match.isPlayerOneTurn && i < playerTwo.asciiLines) {
//             cout << playerTwo.asciiArt[i];
//         }

//         // Ir a la siguiente línea de la consola
//         cout << endl;
//     }
// }



void battleView(const Pokemon &playerOne, const Pokemon &playerTwo, const GameMatch &match) {
    // --- Imprimir información general de la batalla (se mantiene visible) ---
    cout << "==========================================" << endl;
    cout << playerOne.name << " (HP: " << playerOne.health << "/" << playerOne.baseHealth << ")" << endl;
    cout << playerTwo.name << " (HP: " << playerTwo.health << "/" << playerTwo.baseHealth << ")" << endl;
    cout << "==========================================" << endl;
    cout << "\n"; 

    // --- Lógica para imprimir solo el arte del jugador en turno ---
    if (match.isPlayerOneTurn) {
        // Es el turno del Jugador 1
        cout << "--> Turno de " << playerOne.name << "!" << endl;
        for (int i = 0; i < playerOne.asciiLines; ++i) {
            cout << playerOne.asciiArt[i] << endl;
        }
    } else {
        // Es el turno del Jugador 2
        cout << "--> Turno de " << playerTwo.name << "!" << endl;
        for (int i = 0; i < playerTwo.asciiLines; ++i) {
            cout << playerTwo.asciiArt[i] << endl;
        }
    }

    cout << "\n"; // Un espacio al final para mayor claridad
}

