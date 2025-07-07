#include "../../../utils/base.h"
#include "../../../enums/pokemonAttacks.h"
#include "../../../game/entities/structs.h"
#include "../match/matchControllers.h"
#include "../../../enums/gameModes.h"

void showAttacks(Pokemon &pokemon, GameMatch &match) {
    for (int i = 0; i < 3; i++) {
        if (i == 2 && (match.playerOneTurns % 3 != 0 || match.playerTwoTurns % 3 != 0)) break;
        else {
            cout << "\n[" << i << "]- " << pokemon.attacks[i] << ": ";
            if (i == 2) {
                cout << (pokemon.damage + 10) << " de dano";
            } else {
                cout << pokemon.damage << " de dano";
            }
        }
    }
}

void performAttack(Pokemon &attacker, Pokemon &defender, int attackType, int attackerTurn) {
    int finalDamage = 0;
    bool isAttackDone = false;

    while (isAttackDone) {
        switch (attackType) { //Casos para los diferentes tipos de ataques.
            case NORMAL_ATTACK: //Primer caso en el que elija ataque normal.
                finalDamage = attacker.damage;
                isAttackDone = true;
                break;
            case SPECIAL_ATTACK: //Segundo caso en el que elija ataque especial.    
                if (attackerTurn % 3 != 0) {
                    cout << "\nEl ataque especial solo está disponible cada 3 turnos";
                    break;
                }

                finalDamage = attacker.damage + 10; // Se añade 10 de daño al daño del ataque especial.
                if (defender.typeOfWeakness == attacker.type) {
                    finalDamage += 10 ; // Si el tipo del atacante es débil al tipo del defensor, el daño aumenta por 10 puntos de daño.
                }
                isAttackDone = true;
                break;
            default:
                cout << "Tipo de Ataque invalido!\n"; //Si ingresa un valor invalido mandar mensaje de error.
                return;
        }
    }

    defender.health -= finalDamage; //Restar el daño final a la vida del defensor.
    
    if (defender.health <= 0) { 
        defender.health = 0; //Si la vida del defensor es menor a 0 automaticamente colocar el valor de 0.
        cout << attacker.name << " ataca a " << defender.name << " por " << finalDamage << " dano! (Salud Restante: " << defender.health << ")\n";
        //Mensaje de el ataque de quien y a quien y cuanto es el daño final.
    }
}

void attackTurn(Pokemon &playerOne , Pokemon &playerTwo, GameMatch &match) {

    while (playerOne.health > 0 && playerTwo.health > 0) { //Mientras que las vidas de los dos sean mayor a 0 entonces hacer lo siguiente.
        int attackChoice;
        if (match.isPlayerOneTurn) { //Verificar si es turno del jugador 1
            cout << playerOne.coach << " (" << playerOne.name << "), elige tu ataque:\n";
            showAttacks(playerOne, match); //Usar la funcion para mostrar los respectivos ataques del pokemon
            attackChoice = askForInteger();
            performAttack(playerOne, playerTwo, attackChoice, match.playerOneTurns); //Llamar a la funcion para llevar a cabo el ataque
            if (playerTwo.health <= 0) break; // Terminar si el jugador 2 ya no tiene vida
        
        }   else { //Verificar si es turno del jugador 2
            cout << playerTwo.coach << " (" << playerTwo.name << "), elige tu ataque:\n";
            if (match.gameMode == SINGLE_PLAYER) { //Verificar si eligio modo de juego solitario
                attackChoice = getRandomNumber(0, 2);
                cout << "CPU eligio: [" << attackChoice << "]" << playerTwo.attacks[attackChoice] << endl;
                performAttack(playerTwo, playerOne, attackChoice, match.playerTwoTurns); //Llamar a la funcion para llevar a cabo el ataque
                if (playerOne.health <= 0) break; // Terminar si el jugador 1 ya no tiene vida
            } else { //Si eligio multijugador hara esto
                showAttacks(playerTwo, match); //Usar la funcion para mostrar los respectivos ataques del pokemon
                attackChoice = askForInteger(); 
                performAttack(playerTwo, playerOne, attackChoice, match.playerTwoTurns); //Llamar a la funcion para llevar a cabo el ataque
                if (playerOne.health <= 0) break; // Terminar si el jugador 1 ya no tiene vida
            }
        }
        changeTurn(match);
        finishRound(match, playerOne);
    } 
    if (playerOne.health > 0)
        cout << "\n¡" << playerOne.coach << " gana la ronda!\n";
    else
        cout << "\n¡" << playerTwo.coach << " gana la ronda!\n";
}


