#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string Pokemon[10];

    // Abrimos el archivo con los nombres
    ifstream archivo("pokemons.txt");
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo pokemons.txt" << endl;
        return 1;
    }

    // Leer los nombres desde el archivo y guardarlos en el arreglo
    for (int i = 0; i < 10; ++i) {
        getline(archivo, Pokemon[i]);
        if (archivo.fail()) {
            cout << "Error leyendo línea " << i + 1 << endl;
            return 1;
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
    cin >> election;

    if (election >= 1 && election <= 10) {
        cout << "Has elegido a " << Pokemon[election - 1] << "!\n";
    } else {
        cout << "Opción inválida.\n";
    }

    return 0;
}   