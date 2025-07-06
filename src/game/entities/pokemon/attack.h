#ifndef ATTACK_H
#define ATTACK_H

#include "../../../utils/base.h" //Incluir el "Header" base.h para las funciones de utilidad.
#include "../structs.h" // Incluir el "Header" de estructuras para las definiciones de Pokémon.

void attackTurn(Pokemon &playerOne , Pokemon &playerTwo, GameMatch &match); // La función de ataque que toma dos Usuarios como parámetros y la partida.
void performAttack(Pokemon &attacker, Pokemon &defender, int attackType); // La función que realiza el ataque, tomando el atacante, el defensor y el tipo de ataque como parámetros.
void performAttack(Pokemon &attacker, Pokemon &defender, int attackType, int attackerTurn); // La función que realiza el ataque tomando el atacante, defensor y tipo de ataque y número de turno para verificar si está disponible el ataque especial


#endif // ATTACK_H