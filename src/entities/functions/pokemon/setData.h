#ifndef SETDATA_H
#define SETDATA_H

#include "../../../../utils/base.h"
#include "../../structs.h"

//función que se usa para obtener los datos de un jugador y retornar un dato tipo estructura Pokemon
Pokemon setPlayerData();
//función que va a generar de forma automática los datos para el jugador cpu
Pokemon setCpuPlayer();
//función que recibe como argumento el numero que el usuario ingresó al elegir su personaje y configura su tipo
void setPokemonType(int selectedPokemon);
//función que recibe al personaje y define información adicional como vida, daño y su debilidad
void setAdittionalData(Pokemon &character);

#endif