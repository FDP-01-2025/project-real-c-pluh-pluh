#include "../../../../utils/base.h"
#include "../../../../src/entities/structs.h"

int setPokemonType(int selectedPokemon) {
    int pokemonType;

    if (selectedPokemon >= 0 && selectedPokemon <= 1) {

    } else if (selectedPokemon >= 2 && selectedPokemon <= 3) {

    } else if (selectedPokemon >= 4 && selectedPokemon <= 5) {

    } else if (selectedPokemon >= 6 && selectedPokemon <= 7) {

    } else if (selectedPokemon >= 8 && selectedPokemon <= 9) {

    }

    return pokemonType;
}

int setPokemonHealth(int pokemonType) {
    int pokemonHealth;

    switch(pokemonType) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            cout << "\n El número ingresado no es válido";
            break;            
    }

    return pokemonHealth;
}

int setWeaknessType(int pokemonType) {
    int weaknessType;

    switch(pokemonType) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            cout << "\n El número ingresado no es válido";
            break;            
    }

    return weaknessType;
}

void setData(Pokemon pokemon) {
    string coachName, pokemonName;
    int selectedPokemon, pokemonType, pokemonHealth, pokemonWeaknessType;

    while (true) {
        try {
            //nombre del entrenador
            cout << "\n Dinos tu nombre entrenador: ";
            if (!(cin >> coachName)) throw invalid_argument("Entrada inválida: se esperaba texto.");
            //selección de pokemon
            cout << "\n Selecciona tu pokemon: (Digita el número que le corresponda al pokemon que desees elegir)";
            //showPokemonNames();
            if (!(cin >> selectedPokemon)) throw invalid_argument("Entrada inválida: se esperaba un número.");

            pokemonType = setPokemonType(selectedPokemon);
            pokemonHealth = setPokemonHealth(pokemonType);
            pokemonWeaknessType = setWeaknessType(pokemonType);
            //setear información
            pokemon.coach = coachName;
            //setear pokemon name pero falta array de pokemones
            pokemon.type = pokemonType;
            pokemon.health = pokemonHealth;
            pokemon.baseHealth = pokemonHealth;
            pokemon.typeOfWeakness = pokemonWeaknessType;
            
            //terminar bucle
            break;

        } catch (const invalid_argument& e) {
            cout << "\nLo sentimos, ha ocurrido un error: " << e.what() << endl;
            cout << "\n Inténtalo de nuevo";
            cleanInput();
        }
    }

}