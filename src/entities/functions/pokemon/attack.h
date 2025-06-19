#ifndef ATTACK_H
#define ATTACK_H

#include "../../../../utils/base.h" //Incluir el "Header" base.h para las funciones de utilidad.
#include "../../structs.h" // Incluir el "Header" de estructuras para las definiciones de Pokémon.
#include "../../enums/pokemonAttacks.h" // Incluir el "Header" de enumeraciones para los tipos de ataques de Pokémon.

void attack(Pokemon pokemon, Pokemon opponent);
void performAttack(Pokemon attacker, Pokemon defender, int attackType);


#endif // ATTACK_H