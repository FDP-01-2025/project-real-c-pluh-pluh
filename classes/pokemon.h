#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>

using namespace std;

class Pokemon {
    //attributes
    private: 
        string name;
        string coach;
        int baseHealth = 1;
        int health = 1;
        int type = 1;
        int typeOfWeakness = 1;
 
    //methods
    public:
        Pokemon(string pokemonName, string coachName, int pokemonType, int health);

        //getters
        string getName();
        string getCoachName();
        int getHealthPoints();

        //setters
        void setHealthPoints(int healthPoints);
        void setType(int type);
        void setTypeOfWeakness(int type);
        void attack(string attackName);
};

#endif
