#include "./createMatch.h"
#include "./playMatch.h"
#include "../structs.h"
#include "../pokemon/setData.h"
#include "../../../enums/gameModes.h"
#include "./matchControllers.h"

//declaración función para jugar
void play(Pokemon &playerOne, Pokemon &playertwo, GameMatch &match);

// función que maneja la lógica de una partida
void createMatch(const int mode, int rounds) {
    Pokemon player, playerTwo, cpuPlayer; //variables del tipo Pokemon (structs)
    GameMatch match; //variable del tipo GameMatch (structs)

    //definición de datos de partida
    match.gameMode = mode;
    match.roundsQuantity = rounds;
    cleanScreen();

    //llamado a función que configura la información de los personajes
    player = setPlayerData();
    if (mode == SINGLE_PLAYER) {
        cpuPlayer = setCpuPlayer();
        play(player, cpuPlayer, match);

    } else {
        cout << "\nVamos con el entrenador dos: ";
        playerTwo = setPlayerData();
        play(player, playerTwo, match);
    }
    
} 