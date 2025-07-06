#include "../../../utils/base.h"
#include "../structs.h"
#include <fstream>

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
    ifstream file("src/game/entities/pokemon/PokemonNames.txt");
    if (!file.is_open()) {
        cout << "No se pudo abrir el archivo PokemonNames.txt" << endl;
    }

    // Leer los nombres desde el archivo y guardarlos en el arreglo
    for (int i = 0; i < 10; ++i) {
        getline(file, pokemon[i]);
        if (file.fail()) {
            cout << "Error leyendo línea " << i + 1 << endl;
            break;
        }
    }

    file.close();

    // Mostrar todos los Pokémon
        for (int i = 0; i < 10; ++i) {
            cout << i + 1 << ". " << pokemon[i] << endl;
        }

}
