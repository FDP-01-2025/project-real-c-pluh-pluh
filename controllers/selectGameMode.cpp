#include "../src/game/selectGameMode.h"
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
    cout << "║               MAIN MENU                     ║" << endl;
    cout << "╠══════════════════════════════════════════════╣" << endl;
    cout << "║  1. Single Player Mode                      ║" << endl;
    cout << "║  2. Two Player Mode                         ║" << endl;
    cout << "╚══════════════════════════════════════════════╝" << endl;
}
// Prompts the user to select a game mode (1 or 2 players)
int selectGameMode() {
    int option;

    do {
        cout << "Select a game mode (1 or 2): ";
        cin >> option;

        if (cin.fail() || (option != 1 && option != 2)) {
            cout << "Invalid option. Please enter 1 or 2." << endl;
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
        cout << "Select number of rounds (3 or 5): ";
        cin >> rounds;

        if (cin.fail() || (rounds != 3 && rounds != 5)) {
            cout << "Invalid input. Please enter 3 or 5." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (rounds != 3 && rounds != 5);

    return rounds;
}
    // Determines and displays the match winner
void showMatchWinner(int player1Wins, int player2Wins) {
    cout << "\n============== MATCH RESULT ==============" << endl;

    if (player1Wins > player2Wins) {
        cout << "🎉 Player 1 wins the match!" << endl;
    } else if (player2Wins > player1Wins) {
        cout << "🎉 Player 2 wins the match!" << endl;
    } else {
        cout << "🤝 It's a draw!" << endl;
    }

    cout << "===========================================" << endl;
}



