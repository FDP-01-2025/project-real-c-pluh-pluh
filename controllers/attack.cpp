#include "../utils/base.h"
#include "../src/enums/pokemonAttacks.h"
#include "../src/game/entities/structs.h"

void performAttack(Pokemon &attacker, Pokemon &defender, int attackType) {
    int finalDamage = 0;
    switch (attackType) { //Casos para los diferentes tipos de ataques.
        case NORMAL_ATTACK: //Primer caso en el que elija ataque normal.
            finalDamage = attacker.damage;
            break;
        case SPECIAL_ATTACK: //Segundo caso en el que elija ataque especial.
            finalDamage = attacker.damage + 10; // Se añade 10 de daño al daño del ataque especial.
            if (defender.typeOfWeakness == attacker.type) {
                finalDamage += 10 ; // Si el tipo del atacante es débil al tipo del defensor, el daño aumenta por 10 puntos de daño.
            }
            break;
        default:
            cout << "Tipo de Ataque invalido!\n"; //Si ingresa un valor invalido mandar mensaje de error.
            return;
    }
    defender.health -= finalDamage; //Restar el daño final a la vida del defensor.
    
    if (defender.health <= 0) { 
        defender.health = 0; //Si la vida del defensor es menor a 0 automaticamente colocar el valor de 0.
        cout << attacker.name << " ataca a " << defender.name << " por " << finalDamage << " dano! (Salud Restante: " << defender.health << ")\n";
        //Mensaje de el ataque de quien y a quien y cuanto es el daño final.
    }
}

void attackTurn(Pokemon &playerOne , Pokemon &playerTwo) {

    /*while (playerOne.health > 0 && playerTwo.health > 0) {
        if match.IsPlayerOneTurn {
        cout << playerOne.name << " elige tu tipo de ataque: \n"
        cout << "1. Ataque Normal: " << playerOne.damage << "\n" << ;
        cout << "2. Ataque Especial: " << player.damage << "+ 10\n";
        cin >> attackChoice;
        performAttack(playerOne, playerTwo, attackChoice);
        if (playerTwo.health <= 0) break;
        }   else {
        cout << PlayerTwo.name << " elige tu tipo de ataque: \n"
        cout << "1. Ataque Normal: " << playerTwo.damage << "\n" << ;
        cout << "2. Ataque Especial: " << player.damage << "+ 10\n";
        cin >> attackChoice;
        performAttack(playerTwo, playerOne, attackChoice);
        if (playerOne.health <= 0) break;        
        }
    } */
    int turn = 1;
        while (playerOne.health > 0 && playerTwo.health > 0) {
        //Mientras que la vida de los pokemons sea mayor a 0 se seguira haciendo este ciclo.
        int attackChoice;
        cout << "\nTurno " << turn << ":\n";

        // Turno del jugador 1
        cout << playerOne.coach << " (" << playerOne.name << "), elige tu ataque:\n";
        cout << "1. Ataque Normal\n2. Ataque Especial\n";
        cin >> attackChoice;
        performAttack(playerOne, playerTwo, attackChoice);
        if (playerTwo.health <= 0) break; //Si la vida del jugador 2 es 0 o menor se termina la batalla

        // Turno del jugador 2
        cout << playerTwo.coach << " (" << playerTwo.name << "), elige tu ataque:\n";
        cout << "1. Ataque Normal\n2. Ataque Especial\n";
        cin >> attackChoice;
        performAttack(playerTwo, playerOne, attackChoice);
        if (playerOne.health <= 0) break; //Si la vida del jugador 1 es 0 o menor se termina la batalla

        turn++;
    }

    if (playerOne.health > 0) //Mensaje de que jugador gana la batalla.
        cout << "\n¡" << playerOne.coach << " gana la batalla!\n";
    else
        cout << "\n¡" << playerTwo.coach << " gana la batalla!\n";
}

