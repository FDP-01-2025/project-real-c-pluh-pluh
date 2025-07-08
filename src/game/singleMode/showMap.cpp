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
