#include "base.h"
#include <chrono>

//function used inside of askForInteger
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
            cout << "\nError: Por favor ingresa un número entero válido.\n";
        }
    }
}

// Pide al usuario una palabra que contenga solo letras
string askForString() {
    string userInput;
    
    while (true) {
        cin >> userInput;
        if (containsOnlyLetters(userInput)) return userInput;
        else cout << "\n Error: Por favor ingresa un dato válido: Se esperaba texto";
    }
}

//está en veremos la función
// void cleanInput() {
//     cin.clear();
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');
// }

int getRandomNumber(int minNumber, int maxNumber) {
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 gen(seed);
    uniform_int_distribution<> distrib(minNumber, maxNumber);
    return distrib(gen);
}

void cleanScreen() {
    system("cls");
}

void freezeInput() {
    //literalmente querer leer algo de puro relleno, no darle nada solo para "congelar" y observar comportamiento del juego
    int freeze;
    cin >> freeze;
}