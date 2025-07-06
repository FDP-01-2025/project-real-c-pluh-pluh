#include "../../../src/game/entities/match/createMatch.h"
#include "../../../src/game/entities/structs.h"
#include "../../../src/game/entities/pokemon/setData.h"
#include "../../../src/enums/gameModes.h"
#include "../../../src/game/entities/match/matchControllers.h"

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

void play(Pokemon &playerOne, Pokemon &playertwo, GameMatch &match) {
    cleanScreen();
    cout << "⚔️ ¡Una nueva batalla Pokémon está por comenzar! ⚔️";
    Sleep(2000);
    cleanScreen();

    switch(match.gameMode) {
        case SINGLE_PLAYER:
            setFirstTurn(match);
            while (true) {
                getCurrentTurn(match, playerOne, playertwo);
                changeTurn(match);
                freezeInput();
                if(match.isMatchOver) break;
            }
            break;
        case MULTI_PLAYER: 
            while (true) {
                if(match.isMatchOver) break;
            }
            break;
        default: 
            cout << "\nEl número ingresado no es válido";
    }
}