#ifndef COMMON_H
#define COMMON_H

#include <iostream>
#include <limits> // para numeric_limits
#include <random> //para la función de número random
#include <cstdlib>  // para system()

using namespace std;

void cleanInput() {
    cin.clear(); // Se limpia lo que se guardó en el cin
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // descarta todos los "residuos"
}

int getRandomNumber(int minNumber, int maxNumber) {
    //objeto rd de la clase random_device de la librería
    random_device rd;
    //generador, quién sabe por qué ese nombre gen es un objeto de la clase mt19937
    mt19937 gen(rd());

    //hacemos la distribucion o definimos el rango
    uniform_int_distribution<> distrib(minNumber, maxNumber);

    int randomNumber = distrib(gen);

    return randomNumber;
}

void cleanScreen() {
    system("cls");
}
#endif
