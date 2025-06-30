#include <iostream>
#include <windows.h>
#include "./src/game/selectGameMode.h"
#include "./utils/base.h"

using namespace std;

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    clearScreen();     // Clear the console
    showMainMenu();    // Display the menu

    int mode = selectGameMode();  // Choose 1P or 2P
    int rounds = selectRounds();  // Choose 3 or 5

    cout << "\nYou selected mode: " << (mode == 1 ? "Single Player" : "Two Player") << endl;
    cout << "Number of rounds: " << rounds << endl;

    cout << "\n[ Game would start here... ]\n";

    return 0;
}