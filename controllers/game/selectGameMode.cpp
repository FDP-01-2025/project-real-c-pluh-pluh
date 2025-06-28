#include <iostream>
#include <limits>
#include "../../src/game/selectGameMode.h"

using namespace std;

// Displays the main menu with ASCII art
void showMainMenu() {
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
