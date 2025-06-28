#include <iostream>
#include <limits>
#include "../../src/game/selectGameMode.h"

using namespace std;

// Displays the main menu 
void showMainMenu() 
{
    cout << R"(  -----

```
  ____                        __  __           _       
 / ___| __ _ _ __ ___   ___  |  \/  | ___   __| | ___  
| |  _ / _` | '_ ` _ \ / _ \ | |\/| |/ _ \ / _` |/ _ \ 
| |_| | (_| | | | | | |  __/ | |  | | (_) | (_| |  __/ 
 \____|\__,_|_|_| |_| |_|\___| |_|  |_|\___/ \__,_|\___|  
```

-----
 )" << endl;

    cout << "=============== MAIN MENU ===============" << endl;
    cout << "1. Single Player Mode" << endl;
    cout << "2. Two Player Mode" << endl;
    cout << "=========================================" << endl;
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

