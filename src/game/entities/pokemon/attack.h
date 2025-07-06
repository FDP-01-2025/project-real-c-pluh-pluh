#ifndef ATTACK_H
#define ATTACK_H

#include "../../../utils/base.h" //Incluir el "Header" base.h para las funciones de utilidad.
#include "../structs.h" // Incluir el "Header" de estructuras para las definiciones de Pokémon.

void attackTurn(Pokemon &playerOne , Pokemon &playerTwo, GameMatch &match, bool cpuMode); // La función de ataque que toma dos Usuarios como parámetros y la partida.
void performAttack(Pokemon &attacker, Pokemon &defender, int attackType, int attackerTurn); // La función que realiza el ataque tomando el atacante, defensor y tipo de ataque y número de turno para verificar si está disponible el ataque especial
void showAttacks(Pokemon &pokemon, GameMatch &match); //La funcion que recorre los ataques dependiendo del tipo de pokemon y el respectivo turno.

#endif // ATTACK_H