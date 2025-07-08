#include "base.h"
#include <chrono>
#include <cstdlib>
#include "base.h"

//declaración de funciones
void cleanScreen();
void freezeInput();
int getRandomNumber(int minNumber, int maxNumber);
//funciones de input
bool containsOnlyLetters(const string text);
bool isValidInteger(const string text);
int askForInteger();
string askForString();

int getRandomNumber(int minNumber, int maxNumber) {
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 gen(seed);
    uniform_int_distribution<> distrib(minNumber, maxNumber);
    return distrib(gen);
}

void cleanScreen() {system("cls");}

//literalmente querer leer algo de puro relleno, no darle nada solo para "congelar" y observar comportamiento del juego
void freezeInput() {
    int freeze;
    cin >> freeze;
}

//funciones para input
bool containsOnlyLetters(const string text) {
    for (char character : text) {
        if (!isalpha(static_cast<unsigned char>(character))) {
            return false;
        }
    }
    return true;
}

bool isValidInteger(const string text) {
    if (text.empty()) return false;

    size_t start = 0;
    if (text[0] == '-' || text[0] == '+') {
        if (text.size() == 1) return false; // solo el signo, sin dígitos
        start = 1;
    }

    for (size_t i = start; i < text.size(); ++i) {
        if (!isdigit(static_cast<unsigned char>(text[i]))) return false;
    }

    return true;
}

int askForInteger() {
    string userInput;
    
    while (true) {
        cin >> userInput;

        if (isValidInteger(userInput)) {
            // Ahora estamos seguros de que no fallará
            int parsedNumber = stoi(userInput);
            return parsedNumber;
        } else {
            cout << "\nError: Por favor ingresa un número entero válido: ";
        }
    }
}

// Pide al usuario una palabra que contenga solo letras
string askForString() {
    string userInput;
    
    while (true) {
        cin >> userInput;
        if (containsOnlyLetters(userInput)) return userInput;
        else cout << "\nError: Por favor ingresa un texto válido: ";
    }
}

void printStringCentered(const string& text) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    // Obtener el tamaño de la consola
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columns, rows;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

    // Calcular la posición horizontal y vertical centrada
    int x = (columns - text.length()) / 2;
    int y = rows / 2;

    // Establecer la posición del cursor
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

    // Imprimir el texto en la posición centrada
    cout << text;
}

