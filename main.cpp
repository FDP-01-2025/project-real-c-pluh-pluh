#include "./utils/base.h"
#include "./src/game/game.h"
#include <windows.h>


int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    game();
    return 0;
}