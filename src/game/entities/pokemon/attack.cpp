#include "../../../utils/base.h"
#include "../../../enums/pokemonAttacks.h"
#include "../../../game/entities/structs.h"
#include "../match/matchControllers.h"
#include "../../../enums/gameModes.h"

void showAttacks(Pokemon &pokemon, GameMatch &match);
bool performAttack(Pokemon &attacker, Pokemon &defender, int attackType, int attackerTurn);

// void attackTurn(Pokemon &playerOne, Pokemon &playerTwo, GameMatch &match) {
//         int attackChoice;
//         bool isAttackDone = false; 
//         string coach; //nombre del entrenador en turno
//         string name; //nombre del pokemon en turno
        
//         //en caso de ser individual pero le corresponda al jugador 1 o sea modo multijugador
//         if (match.isPlayerOneTurn || (!match.isPlayerOneTurn && match.gameMode == MULTI_PLAYER)) {
//             //verificar nombre y entrenador de jugador en turno
//             coach = match.isPlayerOneTurn ? playerOne.coach : playerTwo.coach;
//             name = match.isPlayerOneTurn ? playerOne.name : playerTwo.name;

//             while (!isAttackDone) {
//                 cout << endl << coach << " (" << name << "), elige tu ataque:\n";
//                 //Usar la funcion para mostrar los respectivos ataques del pokemon
//                 if (match.isPlayerOneTurn) showAttacks(playerOne, match); 
//                 else showAttacks(playerTwo, match);

//                 attackChoice = askForInteger();
//                 if (attackChoice >= 0 && attackChoice <= 1) attackChoice = NORMAL_ATTACK;
//                 else if (attackChoice == 2) attackChoice = SPECIAL_ATTACK;
//                 else attackChoice = -1;
                
//                 if ((match.gameMode == SINGLE_PLAYER || match.gameMode == MULTI_PLAYER) && match.isPlayerOneTurn) {
//                     isAttackDone = performAttack(playerOne, playerTwo, attackChoice, match.playerOneTurns);
//                 } else if (match.gameMode == MULTI_PLAYER && !match.isPlayerOneTurn){
//                     isAttackDone = performAttack(playerTwo, playerOne, attackChoice, match.playerTwoTurns);
//                     Sleep(3500);
//                 }
//             }        
//         }
//         //en caso de ser partida individual la cpu elige sola
//         if (match.gameMode == SINGLE_PLAYER && !match.isPlayerOneTurn) { //Verificar si eligio modo de juego solitario 
//             attackChoice = match.playerTwoTurns % 2 != 0 ? 1 : 2;
//             cout << "\n CPU " << playerTwo.name <<  " eligió: [" << attackChoice << "]- " << playerTwo.attacks[attackChoice] << endl;
//             performAttack(playerTwo, playerOne, attackChoice, match.playerTwoTurns); //Llamar a la funcion para llevar a cabo el ataque
//             Sleep(3500);
//             cleanScreen();
//         } 
// }

// bool performAttack(Pokemon &attacker, Pokemon &defender, int attackType, int attackerTurn) {
//     int finalDamage = 0;
//     bool isAttackDone = false;

//         switch (attackType) { //Casos para los diferentes tipos de ataques.
//             case NORMAL_ATTACK: //Primer caso en el que elija ataque normal.
//                 finalDamage = attacker.damage;
//                 break;
//             case SPECIAL_ATTACK: //Segundo caso en el que elija ataque especial.    
//                 if (attackerTurn % 2 != 0) {
//                     cout << "\nEl ataque especial solo está disponible cada 2 turnos";
//                     cout << "\nInténtalo de nuevo";
//                     //en caso de no estar disponible el ataque especial, se cambia el valor de attackType por el valor de un ataque normal
//                     return isAttackDone;

//                 } else {
//                     finalDamage = attacker.damage + 10; // Se añade 10 de daño al daño del ataque especial.
//                     if (defender.typeOfWeakness == attacker.type) {
//                         finalDamage += 10 ; // Si el tipo del atacante es débil al tipo del defensor, el daño aumenta por 10 puntos de daño.
//                     }
//                 }
//                 break;
//             default:
//                 //Si se ingresa un valor invalido mandar mensaje de error.
//                 cout << "Tipo de Ataque invalido!\n";
//                 cout << "\nInténtalo de nuevo\n\n";
//                 return isAttackDone;
//         }

//     defender.health -= finalDamage; //Restar el daño final a la vida del defensor.

//     if (defender.health < 0) defender.health = 0;

//     cout << endl << attacker.name << " ataca a " << defender.name << " por " << finalDamage << " daño! (Salud Restante: " << defender.health << ")\n";

//     Sleep(3500);
//     // cleanScreen();

//     return !isAttackDone;
// }

void attackTurn(Pokemon &playerOne, Pokemon &playerTwo, GameMatch &match) {
    int attackChoice;
    bool isAttackDone = false; 
    string coach;
    string name;

    if (match.isPlayerOneTurn || (!match.isPlayerOneTurn && match.gameMode == MULTI_PLAYER)) {
        coach = match.isPlayerOneTurn ? playerOne.coach : playerTwo.coach;
        name = match.isPlayerOneTurn ? playerOne.name : playerTwo.name;

        while (!isAttackDone) {
            cout << "⚔️ " <<  coach << " (" << name << "), elige tu ataque:\n";
            if (match.isPlayerOneTurn) showAttacks(playerOne, match); 
            else showAttacks(playerTwo, match);

            attackChoice = askForInteger();
            if (attackChoice >= 0 && attackChoice <= 1) attackChoice = NORMAL_ATTACK;
            else if (attackChoice == 2) attackChoice = SPECIAL_ATTACK;
            else attackChoice = -1;
            
            if ((match.gameMode == SINGLE_PLAYER || match.gameMode == MULTI_PLAYER) && match.isPlayerOneTurn) {
                isAttackDone = performAttack(playerOne, playerTwo, attackChoice, match.playerOneTurns);
            } else if (match.gameMode == MULTI_PLAYER && !match.isPlayerOneTurn){
                isAttackDone = performAttack(playerTwo, playerOne, attackChoice, match.playerTwoTurns);
            }
        }        
    }

    if (match.gameMode == SINGLE_PLAYER && !match.isPlayerOneTurn) {
        attackChoice = match.playerTwoTurns % 2 != 0 ? 1 : 2;
        cout << "\nCPU " << playerTwo.name <<  " eligió: [" << attackChoice << "]- " << playerTwo.attacks[attackChoice] << endl;
        performAttack(playerTwo, playerOne, attackChoice, match.playerTwoTurns);
    } 
}


bool performAttack(Pokemon &attacker, Pokemon &defender, int attackType, int attackerTurn) {
    int finalDamage = 0;
    bool isAttackDone = false;

    switch (attackType) {
        case NORMAL_ATTACK:
            finalDamage = attacker.damage;
            break;
        case SPECIAL_ATTACK:
            if (attackerTurn % 2 != 0) {
                cout << "\nEl ataque especial solo está disponible cada 2 turnos";
                cout << "\nInténtalo de nuevo";
                return isAttackDone;
            } else {
                finalDamage = attacker.damage + 10;
                if (defender.typeOfWeakness == attacker.type) {
                    finalDamage += 10;
                }
            }
            break;
        default:
            cout << "Tipo de Ataque invalido!\n";
            cout << "\nInténtalo de nuevo\n\n";
            return isAttackDone;
    }

    defender.health -= finalDamage;
    if (defender.health < 0) defender.health = 0;

    cout << endl << "⚔️ " << attacker.name << " ataca a " << defender.name << " por " << finalDamage
         << " daño! (Salud Restante: " << defender.health << ")\n";

    Sleep(3500);        // Siempre espera
    cleanScreen();      // Siempre limpia la pantalla después del ataque

    return !isAttackDone;
}


void showAttacks(Pokemon &pokemon, GameMatch &match) {
    for (int i = 0; i < 3; i++) {
        if (i == 2 && 
            ((match.isPlayerOneTurn && match.playerOneTurns % 2 != 0) || 
            (!match.isPlayerOneTurn && match.playerTwoTurns % 2 != 0))) break;
        else {
            cout << "\n[" << i << "]- " << pokemon.attacks[i] << ": ";
            if (i == 2) {
                cout << (pokemon.damage + 10) << " de daño";
            } else {
                cout << pokemon.damage << " de daño";
            }
        }
    }
    cout << endl;
}


