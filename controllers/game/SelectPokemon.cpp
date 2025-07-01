#include "../../utils/base.h"
#include "../../src/entities/structs.h"
#include <fstream>
#include <string>


int selectPokemon(Pokemon &character) {
    string Pokemon[10];

    // Abrimos el archivo con los nombres
    ifstream archivo("pokemons.txt");
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo pokemons.txt" << endl;
    }

    // Leer los nombres desde el archivo y guardarlos en el arreglo
    for (int i = 0; i < 10; ++i) {
        getline(archivo, Pokemon[i]);
        if (archivo.fail()) {
            cout << "Error leyendo línea " << i + 1 << endl;
        }
    }

    archivo.close();

    // Mostrar todos los Pokémon
    cout << "Lista de Pokémon:\n";
    for (int i = 0; i < 10; ++i) {
        cout << i + 1 << ". " << Pokemon[i] << endl;
    }

    // Pedir al usuario que elija uno
    int election;
    cout << "\nElige un Pokémon por número (1-10): ";
    election = askForInteger();

    if (election >= 1 && election <= 10) {
        cout << "Has elegido a " << Pokemon[election - 1] << "!\n";
        character.name = Pokemon[election - 1];
    } else {
        cout << "Opción inválida.\n";
    }

    return election;
}   