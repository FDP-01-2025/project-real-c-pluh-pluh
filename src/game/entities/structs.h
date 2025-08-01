#ifndef STRUCTS_H
#define STRUCTS_H

#include "../../utils/base.h"

//estructura que contiene los datos a utilizar para los jugadores
struct Pokemon {
    string name, emoji;
    string coach;
    int baseHealth = 1, health = 1;
    int type = 1, typeOfWeakness = 1;
    string attacks[3];
    int damage = 1;
    const char** asciiArt = nullptr; // Puntero a arreglo de líneas de arte ASCII
    int asciiLines = 0;              // Número de líneas del arte
};

//estructura que contiene los datos requeridos para que se jueguen las partidad
struct GameMatch {
    bool isPlayerOneTurn;
    int playerOneTurns = 0, playerTwoTurns = 0;
    int gameMode, currentRound = 1, roundsQuantity;
    int playerOnePoints = 0, playerTwoPoints = 0;
};

#endif 
