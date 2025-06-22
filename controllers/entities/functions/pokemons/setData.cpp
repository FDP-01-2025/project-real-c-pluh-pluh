#include "../../../../utils/base.h"
#include "../../../../src/entities/structs.h"

int setPokemonType(int selectedPokemon);
int setPokemonHealth(int pokemonType);
int setWeaknessType(int pokemonType);
int setDamage(int pokemonType);

//función para definir los datos de un jugador
Pokemon setPlayerData() {
    Pokemon character;

    string pokemonName;
    int selectedPokemon;

    cout << "\n Dinos tu nombre entrenador: ";
    character.coach = askForString();
    cout << "\n " << character.coach << " ahora selecciona a tu pokemon: (Digita el número que le corresponda al pokemon que desees elegir): ";
    selectedPokemon = askForInteger();
    //character.name = pokemonName, falta su lógica
    character.type = setPokemonType(selectedPokemon);
    character.baseHealth = setPokemonHealth(character.type);
    character.health = setPokemonHealth(character.type);
    character.typeOfWeakness = setWeaknessType(character.type);
    character.damage = setDamage(character.type);
    
    return character;
} 

//función para definir datos de un jugador cpu
Pokemon setCpuPlayer() {
    Pokemon cpuCharacter;

    cpuCharacter.coach = "Ninguno (Pokemon salvaje)";
    // cpuCharacter.name = //logica para nombre de pokemon pendiente
    cpuCharacter.type = setPokemonType(getRandomNumber(1,10));
    cpuCharacter.baseHealth = setPokemonHealth(cpuCharacter.type);
    cpuCharacter.health = setPokemonHealth(cpuCharacter.type);
    cpuCharacter.typeOfWeakness = setWeaknessType(cpuCharacter.type);
    cpuCharacter.damage = setDamage(cpuCharacter.type);    
    
    return cpuCharacter;
}

int setPokemonType(int selectedPokemon) {
    if (selectedPokemon >= 0 && selectedPokemon <= 1) return 1;
    else if (selectedPokemon >= 2 && selectedPokemon <= 3) return 1;
    else if (selectedPokemon >= 4 && selectedPokemon <= 5) return 1;
    else if (selectedPokemon >= 6 && selectedPokemon <= 7) return 1;
    else if (selectedPokemon >= 8 && selectedPokemon <= 9) return 1;

    // Si no entra en ningún rango válido, retorno -1 (error)
    cout << "\n Pokémon seleccionado no válido.";
    return -1;
}

int setPokemonHealth(int pokemonType) {
    switch(pokemonType) {
        case 1: return 100;
        case 2: return 100;
        case 3: return 100;
        case 4: return 100;
        case 5: return 100;
        default:
            cout << "\n Tipo de Pokémon no válido para salud.";
            return -1;
    }
}

int setTypeOfWeakness(int pokemonType) {
    switch(pokemonType) {
        case 1: return 1;
        case 2: return 1;
        case 3: return 1;
        case 4: return 1;
        case 5: return 1;
        default:
            cout << "\n Tipo de Pokémon no válido para debilidad.";
            return -1;
    }
}

int setDamage(int pokemonType) {
    switch(pokemonType) {
        case 1: return 1;
        case 2: return 1;
        case 3: return 1;
        case 4: return 1;
        case 5: return 1;
        default:
            cout << "\n Tipo de Pokémon no válido para daño.";
            return -1;
    }
}