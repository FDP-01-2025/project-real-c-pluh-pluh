#include "../../../../utils/base.h"
#include "../../../../src/entities/structs.h"
#include "../../../../src/enums/pokemonTypes.h"
#include "../../../../src/game/selectPokemon.h"

int setPokemonType(int selectedPokemon);
int setPokemonHealth(int pokemonType);
int setWeaknessType(int pokemonType);
int setDamage(int pokemonType);

//función para definir los datos de un jugador
Pokemon setPlayerData() {
    Pokemon player;

    string pokemonName;
    int selectedPokemon;

    cout << "\n Dinos tu nombre entrenador: ";
    player.coach = askForString();
    // cout << "\n " << player.coach << " ahora selecciona a tu pokemon: (Digita el número que le corresponda al pokemon que desees elegir): ";
    
    selectedPokemon = selectPokemon(player);
    //character.name = pokemonName, falta su lógica
    // player.type = setPokemonType(selectedPokemon);
    // player.baseHealth = setPokemonHealth(player.type);
    // player.health = setPokemonHealth(player.type);
    // player.typeOfWeakness = setWeaknessType(player.type);
    // player.damage = setDamage(player.type);
    
    return player;
} 

// //función para definir datos de un jugador cpu
// Pokemon setCpuPlayer() {
//     Pokemon cpuCharacter;

//     cpuCharacter.coach = "Ninguno (Pokemon salvaje)";
//     // cpuCharacter.name = //logica para nombre de pokemon pendiente
//     cpuCharacter.type = setPokemonType(getRandomNumber(1,10));
//     cpuCharacter.baseHealth = setPokemonHealth(cpuCharacter.type);
//     cpuCharacter.health = setPokemonHealth(cpuCharacter.type);
//     cpuCharacter.typeOfWeakness = setWeaknessType(cpuCharacter.type);
//     cpuCharacter.damage = setDamage(cpuCharacter.type);    
    
//     return cpuCharacter;
// }

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

// int setPokemonHealth(int pokemonType) {
//     switch(pokemonType) {
//         case 1: return 100;
//         case 2: return 100;
//         case 3: return 100;
//         case 4: return 100;
//         case 5: return 100;
//         default:
//             cout << "\n Tipo de Pokémon no válido para salud.";
//             return -1;
//     }
// }

// int setTypeOfWeakness(int pokemonType) {
//     switch(pokemonType) {
//         case 1: return 1;
//         case 2: return 1;
//         case 3: return 1;
//         case 4: return 1;
//         case 5: return 1;
//         default:
//             cout << "\n Tipo de Pokémon no válido para debilidad.";
//             return -1;
//     }
// }

// int setDamage(int pokemonType) {
//     switch(pokemonType) {
//         case 1: return 1;
//         case 2: return 1;
//         case 3: return 1;
//         case 4: return 1;
//         case 5: return 1;
//         default:
//             cout << "\n Tipo de Pokémon no válido para daño.";
//             return -1;
//     }
// }