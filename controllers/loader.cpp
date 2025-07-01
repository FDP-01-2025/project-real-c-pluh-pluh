#include "../utils/base.h"
#include "../src/game/loader.h"

//función que trabaja con medidas de la consola para mostrar el ascii art de forma centrada

int getConsoleWidth() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi)) {
        return csbi.srWindow.Right - csbi.srWindow.Left + 1;
    }
    return 80;
}

int getConsoleHeight() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi)) {
        return csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    }
    return 25;
}

// Función para imprimir centrado, recibe arreglo estático y tamaño
void printCentered(const string lines[], int lineCount, int consoleWidth, int consoleHeight) {
    int paddingTop = (consoleHeight - lineCount) / 2;
    if (paddingTop < 0) paddingTop = 0;

    for (int i = 0; i < paddingTop; ++i) {
        cout << endl;
    }

    for (int i = 0; i < lineCount; ++i) {
        int paddingLeft = (consoleWidth - (int)lines[i].length()) / 2;
        if (paddingLeft < 0) paddingLeft = 0;
        cout << string(paddingLeft, ' ') << lines[i] << endl;
    }
}

void showLoader() {
    cleanScreen();
    string asciiArt[] = {
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

    int width = getConsoleWidth();
    int height = getConsoleHeight();
    int lineCount = sizeof(asciiArt) / sizeof(asciiArt[0]);

    printCentered(asciiArt, lineCount, width, height);

    Sleep(5000);
}
