#include "../../../src/game/singleMode/createMatch.h"
#include "../../../src/game/entities/structs.h"
#include "../../../src/game/entities/pokemon/setData.h"

// función que maneja la lógica de una partida
void createMatch() {
    Pokemon player, cpuPlayer;
    cleanScreen();
    player = setPlayerData();
    cpuPlayer = setCpuPlayer();
}