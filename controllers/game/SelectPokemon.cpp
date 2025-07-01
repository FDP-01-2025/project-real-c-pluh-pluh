#include "../../utils/base.h"
#include "../../src/entities/structs.h"
#include <fstream>
#include <string>

string pokemon[10]; //arreglo que será definido al realizar lectura de la base de datos

void showPokemonNames();

//función que permite al jugador elegir un pokemon
int selectPokemon(Pokemon &character) {
    // Pedir al usuario que elija uno
    int election;
    showPokemonNames();
    election = askForInteger();

    if (election >= 1 && election <= 10) {
        cout << "Has elegido a " << pokemon[election - 1] << "!\n";
        character.name = pokemon[election - 1];
    } else {
        cout << "Opción inválida.\n";
    }

    return election;
}

//función que elige de forma automática al rival en caso de la partida ser solitaria
int setCpuPokemon(Pokemon &cpuCharacter) {
    int election;
    election = getRandomNumber(1,10);

    if (election >= 1 && election <= 10) {
        cout << "El pokemon salvaje es: " << pokemon[election - 1] << "!\n";
        cpuCharacter.name = pokemon[election - 1];
    }

    return election;
}

//función para mostrar los nombres desde la base de datos
void showPokemonNames() {
    // Abrimos el archivo con los nombres
    ifstream archivo("controllers/game/PokemonNames.txt");
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo pokemons.txt" << endl;
    }

    // Leer los nombres desde el archivo y guardarlos en el arreglo
    for (int i = 0; i < 10; ++i) {
        getline(archivo, pokemon[i]);
        if (archivo.fail()) {
            cout << "Error leyendo línea " << i + 1 << endl;
        }
    }

    archivo.close();

    // Mostrar todos los Pokémon
    for (int i = 0; i < 10; ++i) {
        cout << i + 1 << ". " << pokemon[i] << endl;
    }
}
