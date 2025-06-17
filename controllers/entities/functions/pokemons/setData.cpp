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

void setData(Pokemon& pokemon) {
    string coachName, pokemonName;
    int selectedPokemon, pokemonType, pokemonHealth, pokemonWeaknessType;

    cout << "\n Dinos tu nombre entrenador: ";
    coachName = askForString();
    cout << "\n " << coachName << " ahora selecciona a tu pokemon: (Digita el número que le corresponda al pokemon que desees elegir): ";
    pokemonName = askForInteger();

    freezeInput();
}