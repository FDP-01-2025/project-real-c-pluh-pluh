#include "../../../../utils/base.h"
#include "../../../../src/entities/structs.h"
#include "../../../../src/enums/pokemonTypes.h"
#include "../../../../src/game/selectPokemon.h"

int setPokemonType(int selectedPokemon);
void setAdittionalData(Pokemon &character);
void printData(Pokemon &player);

//función para definir los datos de un jugador
Pokemon setPlayerData() {
    Pokemon player;
    string pokemonName;
    int selectedPokemon;

    cout << "\n Dinos tu nombre entrenador: ";
    player.coach = askForString();
    cout << "\n " << player.coach << " ahora selecciona a tu pokemon, elige un Pokemon por número (1-10):\n";
    
    selectedPokemon = selectPokemon(player);
    player.type = setPokemonType(selectedPokemon);
    setAdittionalData(player);
    printData(player);

    return player;
} 

//función para definir datos de un jugador cpu
Pokemon setCpuPlayer() {
    Pokemon cpuCharacter;
    int randomSelectedPokemon;

    cpuCharacter.coach = "Ninguno (Pokemon salvaje)";
    randomSelectedPokemon = setCpuPokemon(cpuCharacter);
    cpuCharacter.type = setPokemonType(randomSelectedPokemon);
    setAdittionalData(cpuCharacter);
    printData(cpuCharacter);

    return cpuCharacter;
}


void printData(Pokemon &player) {
    cout << "\n\n=== Pokemon Stats ===" << endl;
    cout << "Name: " << player.name << endl;
    cout << "Coach: " << player.coach << endl;
    cout << "Base Health: " << player.baseHealth << endl;
    cout << "Current Health: " << player.health << endl;
    cout << "Type: " << player.type << endl;
    cout << "Type of Weakness: " << player.typeOfWeakness << endl;
    cout << "Damage: " << player.damage << endl;
}

int setPokemonType(int selectedPokemon) {
    if (selectedPokemon >= 1 && selectedPokemon <= 2) return WATER;
    else if (selectedPokemon >= 3 && selectedPokemon <= 4) return FIRE;
    else if (selectedPokemon >= 5 && selectedPokemon <= 6) return GRASS;
    else if (selectedPokemon >= 7 && selectedPokemon <= 8) return ELECTRIC;
    else if (selectedPokemon >= 9 && selectedPokemon <= 10) return ROCK;

    // Si no entra en ningún rango válido, retorno -1
    cout << "\n Pokémon seleccionado no válido.";
    return -1;
}

void setAdittionalData(Pokemon &character) {
    switch(character.type) {
        case WATER:
            character.baseHealth = 290;
            character.health = 290;
            character.damage = 33;
            character.typeOfWeakness = ELECTRIC;
            break;
        case FIRE:
            character.baseHealth = 215;
            character.health = 215;
            character.damage = 55;
            character.typeOfWeakness = WATER;
            break;
        case GRASS:
            character.baseHealth = 255;
            character.health = 255;
            character.damage = 42;
            character.typeOfWeakness = FIRE;
            break;
        case ELECTRIC:
            character.baseHealth = 220;
            character.health = 220;
            character.damage = 53;
            character.typeOfWeakness = ROCK;
            break;
        case ROCK:
            character.baseHealth = 290;
            character.health = 290;
            character.damage = 33;
            character.typeOfWeakness = GRASS;
            break;
        default:
            cout << "\n Tipo de Pokémon no válido para salud.";
            break;
    }
}