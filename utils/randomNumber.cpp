#include "./base.h"
#include "randomNumber.h"
#include <random>


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