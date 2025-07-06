#include "../../../utils/base.h"
#include "../structs.h"

//función que contiene la lógica para crear una partida luego de configurarse los personajes
/*La función recibe como argumento la cantidad de rondas obtenidas desde el menú principal*/
void createMatch(const int mode, int rounds);

//función que maneja la partida creada
void play(Pokemon &playerOne, Pokemon &playertwo, GameMatch &match);