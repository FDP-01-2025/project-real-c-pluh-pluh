#include "../../../utils/base.h"
#include "../structs.h"
#include "../../../enums/pokemonTypes.h"
#include "./selectPokemon.h"

//declaración de funciones a usar
int setPokemonType(int selectedPokemon); //función que define el tipo de pokemon
void setAdittionalData(Pokemon &character); // función que define vida, daño, etc
void printData(Pokemon &player); //función para imprimir datos (como logs)

//función para definir los datos de un jugador
Pokemon setPlayerData() {
    //definición de variables
    Pokemon player; //dato del tipo Pokemon que se retornará
    string pokemonName; 
    int selectedPokemon;

    cout << "\n Dinos tu nombre entrenador: ";
    player.coach = askForString();
    cout << "\n " << player.coach << " ahora selecciona a tu pokemon, elige un Pokemon por número (1-10):\n";
    
    selectedPokemon = selectPokemon(player);
    player.type = setPokemonType(selectedPokemon);
    setAdittionalData(player);
    return player;
} 

//función para definir datos de un jugador cpu
Pokemon setCpuPlayer() {
    //definición de variables
    Pokemon cpuCharacter; //dato del tipo Pokemon que se retornará
    int randomSelectedPokemon;

    cpuCharacter.coach = "(Sin entrenador)";
    randomSelectedPokemon = setCpuPokemon(cpuCharacter);
    cpuCharacter.type = setPokemonType(randomSelectedPokemon);
    setAdittionalData(cpuCharacter);
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

//función que recibe el número que el usuario digite en el menú
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

//recibe a la variable de tipo Pokemon y una vez se ha obtenido su tipo se define su vida, daño y debilidad
void setAdittionalData(Pokemon &character) {
    switch(character.type) {
        case WATER:
            character.baseHealth = 100;
            character.health = 100;
            character.damage = 32;
            character.typeOfWeakness = ELECTRIC;
            character.attacks[0] = "Pistola de agua";
            character.attacks[1] = "Burbuja";
            character.attacks[2] = "Oleada marina";    
            break;
        case FIRE:
            character.baseHealth = 86;
            character.health = 86;
            character.damage = 34;
            character.typeOfWeakness = WATER;
            character.attacks[0] = "Ascuas";
            character.attacks[1] = "Cola ígnea";
            character.attacks[2] = "Tormenta de llamas";          
            break;        
        case GRASS:
            character.baseHealth = 115;
            character.health = 115;
            character.damage = 26;
            character.typeOfWeakness = FIRE;
            character.attacks[0] = "Látigo cepa";
            character.attacks[1] = "Hoja navaja";
            character.attacks[2] = "Eco verde";            
            break;        
        case ELECTRIC:
            character.baseHealth = 110;
            character.health = 110;
            character.damage = 24;
            character.typeOfWeakness = ROCK;
            character.attacks[0] = "Impactrueno";
            character.attacks[1] = "Chispa";
            character.attacks[2] = "Tormenta eléctrica";            
            break;        
        case ROCK:
            character.baseHealth = 95;
            character.health = 95;
            character.damage = 30;
            character.typeOfWeakness = GRASS;
            character.attacks[0] = "Lanzarocas";
            character.attacks[1] = "Golpe pedregoso";
            character.attacks[2] = "Ruina sísmica";            
            break;        
        default:
            cout << "\n Tipo de Pokémon no válido para salud.";
            break;
    }
}
