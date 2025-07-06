#include "../../utils/base.h"

//función que contiene a toda la lógica de la partida en solitario

/*Recibe como argumento la cantidad de rondas a jugar obtenidas del menú principal sirviendo como intermediario para pasarle el dato a la función que va a generar la partida 

En otras palabras su flujo es:
La función de rondas retorna el dato, playSingleMode la recibe y se la pasa a createMatch*/
void playSingleMode(int roundsQuantity);