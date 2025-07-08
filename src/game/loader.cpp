#include "../utils/base.h"
#include "./loader.h"
#include "../utils/printCentered.h"

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

    int lineCount = sizeof(asciiArt) / sizeof(asciiArt[0]);
    printCentered(asciiArt, lineCount);

    Sleep(5000);
}
