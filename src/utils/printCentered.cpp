#include "printCentered.h"

// Obtener el ancho de la consola
int getConsoleWidth() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
        return csbi.srWindow.Right - csbi.srWindow.Left + 1;
    return 80;
}

// Obtener el alto de la consola
int getConsoleHeight() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
        return csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    return 25;
}

// Calcular ancho visible (emojis = 2 columnas)
int visibleWidth(const string& line) {
    int count = 0;
    for (size_t i = 0; i < line.length(); ++i) {
        unsigned char c = line[i];
        if (c <= 0x7F) {
            count += 1;
        } else if ((c & 0xE0) == 0xC0) {
            count += 2; i += 1;
        } else if ((c & 0xF0) == 0xE0) {
            count += 2; i += 2;
        } else if ((c & 0xF8) == 0xF0) {
            count += 2; i += 3;
        } else {
            count += 1;
        }
    }
    return count;
}

// Imprimir texto centrado
void printCentered(const string lines[], int lineCount) {
    int width = getConsoleWidth();
    int height = getConsoleHeight();
    int verticalPadding = (height - lineCount) / 2;
    if (verticalPadding < 0) verticalPadding = 0;

    for (int i = 0; i < verticalPadding; ++i)
        cout << endl;

    for (int i = 0; i < lineCount; ++i) {
        int pad = (width - visibleWidth(lines[i])) / 2;
        if (pad < 0) pad = 0;
        cout << string(pad, ' ') << lines[i] << endl;
    }
}