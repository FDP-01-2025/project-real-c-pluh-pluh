// #include "../../src/game/singleMode/showMap.h"

// //función que muestra las opciones para buscar una batalla en el modo solitario
// void showMap() {
//     cout << "\n ¡Bienvenido al Mapa de Aventuras Pokémon!";
//     cout << "\n ¿Dónde quieres buscar una gran aventura? \n" ;

//     cout << "+--------------------+---------------------+---------------------+" << endl;
//     cout << "|  Bosque Verde      |  Ruta Rocosa        |  Plaza Pokémon      |" << endl;
//     cout << "|        🌲          |        ⛰️          |        🏪           |" << endl;
//     cout << "+--------------------+---------------------+---------------------+" << endl;
//     cout << "|  Lago Lapras       |  Centro Pokémon     |  Calle Pikachu      |" << endl;
//     cout << "|        🌊          |        🏥          |        ⚡           |" << endl;
//     cout << "+--------------------+---------------------+---------------------+" << endl;
//     cout << "|  Cueva Zubat       |  Gimnasio Fuego     |  Mercado Magikarp   |" << endl;
//     cout << "|        🕳️         |        🔥             |       🎣            |" << endl;
//     cout << "+--------------------+---------------------+---------------------+" << endl;

//     cout << " 1. Bosque Verde      2. Ruta Rocosa       3. Plaza Pokémon\n";
//     cout << " 4. Lago Lapras       5. Centro Pokémon    6. Calle Pikachu\n";
//     cout << " 7. Cueva Zubat       8. Gimnasio Fuego    9. Mercado Magikarp";
// }


#include "./showMap.h"
#include "../../utils/base.h"
#include "../../utils/printCentered.h"

void showMap() {
string mapLines[] = {
    "      ¡Bienvenido al Mapa de Aventuras Pokémon!      ",
    "     ¿Dónde quieres buscar una gran aventura?        ",
    "",
    "  1.Bosque Verde      🌲       |   2.Ruta Rocosa       ⛰️      |  3.Plaza Pokémon     🏪   ",
    "----------------------------------------------------------------------------------",
    "  4.Lago Lapras       🌊     |   5.Centro Pokémon    🏥      |  6.Calle Pikachu     ⚡   ",
    "----------------------------------------------------------------------------------",
    "  7.Cueva Zubat       🕳️       |   8.Gimnasio Fuego    🔥      |  9.Mercado Magikarp  🎣   ",
    ""
};

int lineCount = sizeof(mapLines) / sizeof(mapLines[0]);
printCentered(mapLines, lineCount);


}
