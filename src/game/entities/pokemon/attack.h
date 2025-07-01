#ifndef ATTACK_H
#define ATTACK_H

#include "../../../../utils/base.h" //Incluir el "Header" base.h para las funciones de utilidad.
#include "../../structs.h" // Incluir el "Header" de estructuras para las definiciones de Pokémon.
#include "../../enums/pokemonAttacks.h" // Incluir el "Header" de enumeraciones para los tipos de ataques de Pokémon.

void attackTurn(Pokemon &playerOne, Pokemon &playerTwo); // La función de ataque que toma dos Usuarios como parámetros.
void performAttack(Pokemon &attacker, Pokemon &defender, int attackType); // La función que realiza el ataque, tomando el atacante, el defensor y el tipo de ataque como parámetros.


#endif // ATTACK_H