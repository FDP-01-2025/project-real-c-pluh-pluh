//archivo que contiene funciones de uso común a lo largo del proyecto
#ifndef BASE_H
#define BASE_H
//librerías de uso común
#include <iostream>
#include <limits>
#include <random>
#include <cstdlib>
#include <windows.h>
#include <string>

using namespace std;

int askForInteger(); //función para lectura de enteros
string askForString(); //función para lectura de cadenas de texto
int getRandomNumber(int minNumber, int maxNumber); //función para generar un número aleatorio
void cleanScreen(); //función que limpia la consola
void freezeInput(); //función de relleno por si se quiere detener el flujo del programa

#endif
