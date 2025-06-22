#include "../../../../utils/base.h"
#include "../../../../src/enums/pokemonAttacks.h"
#include "../../../../src//entities/structs.h"

void performAttack(Pokemon attacker, Pokemon defender, int attackType) {
    int damage = 0;
    switch (attackType) {
        case NORMAL_ATTACK:
            damage = 50; 
            break;
        case SPECIAL_ATTACK:
            damage = 90;
            break;
        default:
            cout << "Tipo de Ataque invalido!\n";
            return;
    }
    defender.health -= damage;
    
    if (defender.health < 0) {
        defender.health = 0;
        cout << attacker.name << " ataca a " << defender.name << " por " << damage << " dano! (Salud Restante: " << defender.health << ")\n";
    }
}