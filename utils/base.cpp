#include "base.h"
#include <chrono>

//function used inside of askForInteger
bool containsOnlyLetters(const string& text) {
    for (char character : text) {
        if (!isalpha(static_cast<unsigned char>(character))) {
            return false;
        }
    }
    return true;
}

// Pide al usuario un número entero válido
int askForInteger() {
    string userInput;
    int parsedNumber;
    
    while (true) {
        cout << "> ";
        cin >> userInput;

        try {
            size_t charactersUsed;
            parsedNumber = stoi(userInput, &charactersUsed);

            if (charactersUsed != userInput.size()) {
                throw invalid_argument("Se espraba un entero");
            }

            return parsedNumber;
        } catch (const invalid_argument& e) {
            cout << "\n Error: Por favor ingresa un dato válido: se esperaba un entero";
        }
    }
}

// Pide al usuario una palabra que contenga solo letras
string askForString() {
    string userInput;
    
    while (true) {
        try {
            cout << "> ";
            cin >> userInput;
             if (containsOnlyLetters(userInput)) return userInput;
             else throw invalid_argument("Se espraba texto");

        } catch(const invalid_argument& e) {
            cout << "\n Error: Por favor ingresa un dato válido: Se esperaba texto";
        } 
    }
}

void cleanInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

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