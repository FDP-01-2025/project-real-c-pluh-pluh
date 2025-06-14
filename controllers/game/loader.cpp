#include "../../utils/base.h"
#include "../../src/game/loader.h"
#include <windows.h> 
#include <string>
#include <vector>

//texto original

// void showLoader() {
// cout << R"(
//                                   ,'\\
//     _.----.        ____         ,'  _\\   ___    ___     ____ 
// _,-'       `.     |    |  /`.   \,-'    |   \  /   |   |    \  |`. 
// \      __    \    '-.  | /   `.  ___    |    \/    |   '-.   \ |  | 
//  \.    \ \   |  __  |  |/    ,','_  `.  |          | __  |    \|  | 
//    \    \/   /,' _`.|      ,' / / / /   |          ,' _`.|     |  | 
//     \     ,-'/  /   \    ,'   | \/ / ,`.|         /  /   \  |     | 
//      \    \ |   \_/  |   `-.  \    `'  /|  |    ||   \_/  | |\    | 
//       \    \ \      /       `-.`.___,-' |  |\  /| \      /  | |   | 
//        \    \ `.__,'|  |`-._    `|      |__| \/ |  `.__,'|  | |   | 
//         \_.-'       |__|    `-._ |              '-.|     '-.| |   | 
//                                 `'                            '-._| 

//     )";


//     Sleep(3000);
// }

int getConsoleWidth() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi)) {
        return csbi.srWindow.Right - csbi.srWindow.Left + 1;
    }
    return 80; // ancho por defecto si falla
}

int getConsoleHeight() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi)) {
        return csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    }
    return 25; // alto por defecto si falla
}

void printCentered(const string& line) {
    int width = getConsoleWidth();
    int padding = (width - (int)line.length()) / 2;
    if (padding < 0) padding = 0;
    cout << string(padding, ' ') << line << '\n';
}

void showLoader() {
    vector<string> asciiArt = {
        "                                  ,'\\\\",
        "    _.----.        ____         ,'  _\\\\   ___    ___     ____ ",
        "_,-'       `.     |    |  /`.   \\,-'    |   \\  /   |   |    \\  |`. ",
        "\\      __    \\    '-.  | /   `.  ___    |    \\/    |   '-.   \\ |  | ",
        " \\.    \\ \\   |  __  |  |/    ,','_  `.  |          | __  |    \\|  | ",
        "   \\    \\/   /,' _`.|      ,' / / / /   |          ,' _`.|     |  | ",
        "    \\     ,-'/  /   \\    ,'   | \\/ / ,`.|         /  /   \\  |     | ",
        "     \\    \\ |   \\_/  |   `-.  \\    `'  /|  |    ||   \\_/  | |\\    | ",
        "      \\    \\ \\      /       `-.`.___,-' |  |\\  /| \\      /  | |   | ",
        "       \\    \\ `.__,'|  |`-._    `|      |__| \\/ |  `.__,'|  | |   | ",
        "        \\_.-'       |__|    `-._ |              '-.|     '-.| |   | ",
        "                                `'                            '-._| ",
    };

    int consoleHeight = getConsoleHeight();
    int artHeight = (int)asciiArt.size();

    int paddingTop = (consoleHeight - artHeight) / 2;
    if (paddingTop < 0) paddingTop = 0;

    // Imprime líneas en blanco para centrar verticalmente
    for (int i = 0; i < paddingTop; i++) {
        cout << "\n";
    }

    // Imprime el ASCII centrado horizontalmente
    for (const auto& line : asciiArt) {
        printCentered(line);
    }

    Sleep(5000);
}