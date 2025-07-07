#include "../../../utils/base.h"
#include "../structs.h"
#include <fstream>
#include "../../../enums/pokemonsList.h"
#include "./asciiAvatars/electricPokemons.h"
#include "./asciiAvatars/waterPokemons.h"
#include "./asciiAvatars/firePokemons.h"
#include "./asciiAvatars/rockPokemons.h"
#include "./asciiAvatars/grassPokemons.h"

string pokemon[10]; //arreglo que será definido al realizar lectura de la base de datos

void showPokemonNames();
void setAsciiArtPokemon(Pokemon &character, int election);

//función que permite al jugador elegir un pokemon
int selectPokemon(Pokemon &character) {
    // Pedir al usuario que elija uno
    int election;
    showPokemonNames();
    election = askForInteger();
    bool isElectionOk = false;

    while (!isElectionOk) {
        if (election >= 1 && election <= 10) {
            cout << "Has elegido a " << pokemon[election - 1] << "!\n";
            character.name = pokemon[election - 1];
            setAsciiArtPokemon(character, election);
            isElectionOk = true;
        } else {
            cout << "Opción inválida.\n";
        }
    }
    return election;
}

//función que elige de forma automática al rival en caso de la partida ser solitaria
int setCpuPokemon(Pokemon &cpuCharacter) {
    int election;
    election = getRandomNumber(1,10);
    cpuCharacter.name = pokemon[election - 1];
    setAsciiArtPokemon(cpuCharacter, election);
    return election;
}

//función para mostrar los nombres desde la base de datos
void showPokemonNames() {
    // Abrimos el archivo con los nombres
    ifstream file("src/game/entities/pokemon/PokemonNames.txt");
    if (!file.is_open()) {
        cout << "No se pudo abrir el archivo PokemonNames.txt" << endl;
    }

    // Leer los nombres desde el archivo y guardarlos en el arreglo
    for (int i = 0; i < 10; i++) {
        getline(file, pokemon[i]);
        if (file.fail()) {
            cout << "Error leyendo línea " << i + 1 << endl;
            break;
        }
    }

    file.close();

    // Mostrar todos los Pokémon
    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << pokemon[i] << endl;
    }
}

void setAsciiArtPokemon(Pokemon &character, int election) {
    switch (election) {
        case SQUIRTLE:
            character.asciiArt = squirtleArt;
            character.asciiLines = squirtleArtLines;
            break;
        case LAPRAS:
            character.asciiArt = laprasArt;
            character.asciiLines = laprasArtLines;
            break;
        case CHARMANDER:
            character.asciiArt = charmanderArt;
            character.asciiLines = charmanderArtLines;
            break;
        case FLAREON:
            character.asciiArt = flareonArt;
            character.asciiLines = flareonArtLines;
            break;
        case BULBASAUR:
            character.asciiArt = bulbasaurArt;
            character.asciiLines = bulbasaurArtLines;
            break;
        case ODDISH:
            character.asciiArt = oddishArt;
            character.asciiLines = oddishArtLines;
            break;
        case PIKACHU:
            character.asciiArt = pikachuArt;
            character.asciiLines = pikachuArtLines;
            break;
        case MAGNEMITE:
            character.asciiArt = magnemiteArt;
            character.asciiLines = magnemiteArtLines;
            break;
        case ONIX:
            character.asciiArt = onixArt;
            character.asciiLines = onixArtLines;
            break;
        case GEODUDE:
            character.asciiArt = geodudeArt;
            character.asciiLines = geodudeArtLines;
            break;
        default:
            cout << "\nEl número ingresado no es válido: ";
            break;
    }
}



