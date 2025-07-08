## 🎮 Proyecto de C++ - Pokémon Battle Game

## 📄 1. Descripción del Proyecto
Este proyecto consiste en un juego de batallas de Pokémon por rondas, donde el jugador puede elegir entre modo un jugador (contra la CPU) o multijugador (contra otro jugador). El objetivo es seleccionar un Pokémon, enfrentarse en combates por turnos y ganar la mayor cantidad de rondas para obtener la victoria. El juego busca ofrecer una experiencia similar a la de los juegos originales de Pokémon, donde la estrategia y el conocimiento de debilidades son clave.

## 🔍 2. Aplicación de conceptos de programación
El juego está desarrollado en C++ y utiliza:
- **Estructuras (`struct`)** para representar Pokémon y partidas de manera clara y organizada.
```cpp
//Ejemplo de uso de struct
struct Pokemon {
    string name, emoji;
    string coach;
    int baseHealth = 1, health = 1;
    int type = 1, typeOfWeakness = 1;
    string attacks[3];
    int damage = 1;
    const char** asciiArt = nullptr; 
    int asciiLines = 0;              
};
```
- **Condicionales (`if`, `switch`)** para controlar el flujo del juego y las decisiones del jugador.
```cpp
//Ejemplo de uso de if (Verificar el ganador de la partida)
if (match.playerOnePoints > match.playerTwoPoints) {
   printStringCentered( "🏆 El ganador de la partida es: " + playerOne.emoji + " " playerOne.name + " con " + to_string(match.playerOnePoints) + " puntos" + " 🏆");
   Sleep(3500);
} else {
   printStringCentered( "🏆 El ganador de la partida es: " + playerTwo.emoji + " " playerTwo.name + " con " + to_string(match.playerTwoPoints) + " puntos" + " 🏆");
   Sleep(3500);
}
```

```cpp
//Ejemplo de uso de switch (Definir el tipo del Pokemon seleccionado)
int setPokemonType(int selectedPokemon) {
    if (selectedPokemon >= 1 && selectedPokemon <= 2) return WATER;
    else if (selectedPokemon >= 3 && selectedPokemon <= 4) return FIRE;
    else if (selectedPokemon >= 5 && selectedPokemon <= 6) return GRASS;
    else if (selectedPokemon >= 7 && selectedPokemon <= 8) return ELECTRIC;
    else if (selectedPokemon >= 9 && selectedPokemon <= 10) return ROCK;

    // Si no entra en ningún rango válido, retorno -1
    cout << "\n Pokémon seleccionado no válido.";
    return -1;
}
```
- **Bucles (`while`, `for`)** que manejan los turnos, las rondas y la selección de ataques.
```cpp
//Ejemplo de uso de while y for (Manejo de rondas de la partida)

//bucle externo para manejar las rondas de la partida
for (int i = 1; i <= match.roundsQuantity; i++) {
   printStringCentered("⚔️ Ronda: " + to_string(i) + " ⚔️");
   Sleep(1500);
   cleanScreen();
   setFirstTurn(match);
   //bucle interno para manejar ronda
   while (playerOne.health > 0 && playerTwo.health > 0) {
      battleView(playerOne, playerTwo, match);
      attackTurn(playerOne, playerTwo, match);
      changeTurn(match);
   }
   finishRound(match, playerOne, playerTwo);
   Sleep(2000);
   cleanScreen();
}
```
- **Funciones** que modularizan la lógica del juego, como la selección de Pokémon, ataques y control de turnos.
```cpp
//Manejo de los turnos
void changeTurn(GameMatch &match) {
   match.isPlayerOneTurn = !match.isPlayerOneTurn;
   if (match.isPlayerOneTurn) match.playerOneTurns++;
   else match.playerTwoTurns++;
}
```
- **Enumeradores (`enum`)** para definir tipos de ataques, tipos de Pokémon y modos de juego.
```cpp
//enum de los tipos de Pokemon disponibles en el juego
enum PokemonTypes { 
   WATER, //weakness: electric
   FIRE, //weakness: water
   GRASS, //weakness: fire
   ELECTRIC, //weakness: rock
   ROCK //weakness: grass
};
```
- **Manejo de archivos de texto (`.txt`)** para cargar dinámicamente datos como nombres de Pokémon.
```cpp
//Ejemplo de función de manejo de archivo.txt
void showPokemonNames() {
    // Abrimos el archivo con los nombres
    ifstream file("src/game/entities/pokemon/PokemonNames.txt");
    if (!file.is_open()) {
        cout << "No se pudo abrir el archivo PokemonNames.txt" << endl;
    }

    // Leer los nombres desde el archivo y guardarlos en el arreglo
    for (int i = 0; i < 10; i++) {
        getline(file, pokemon[i]);
        if (file.fail()) {
            cout << "Error leyendo línea " << i + 1 << endl;
            break;
        }
    }

    file.close();
    
    // Mostrar todos los Pokémon
    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ". " << pokemon[i] << endl;
    }
}
```

## 🕹️ 3. Guía rápida de juego
-Al iniciar el juego, selecciona el modo de juego: un jugador (contra CPU) o dos jugadores.
-Elige tu Pokémon de una lista disponible.
-En cada turno, selecciona el ataque que deseas usar.
-El juego continuará hasta que se alcance la cantidad de rondas establecidas.

## 🎯 4. Estrategia y Objetivo
El objetivo principal es ganar más rondas que tu oponente. 

Para alcanzar este objetivo:
-Aprovecha las debilidades de los Pokémon rivales.
-Usa ataques especiales en el momento adecuado (algunos solo están disponibles cada ciertos turnos).
-Administra tus puntos de vida y elige tus ataques estratégicamente.

Algunos Mockups de la jugabilidad son:
![Pantalla de carga](/src/mockUps/image.png)
![Vista de mapa en modo solitario](/src/mockUps/image2.png)
![Vista de batalla](/src/mockUps/image3.png)


## 💾 5. Estructura del proyecto

El proyecto está organizado de manera modular para facilitar su mantenimiento, escalabilidad y comprensión. A continuación, se detalla la estructura principal y la función de cada carpeta:

- **Raíz del proyecto:** Contiene los archivos base como `main.cpp` (punto de entrada), el ejecutable `pokemonGame.exe`, el archivo `.gitignore` y la documentación (`README.md`).
- **src:** Carpeta principal donde se encuentra el código fuente organizado en diferentes módulos y submódulos:
  - **enums:** Define los enumeradores globales utilizados en el proyecto, como tipos de Pokémon, ataques y modos de juego.
  - **game:** Contiene la lógica principal del juego:
    - Archivos principales como `game.cpp` y `loader.cpp` controlan el flujo del juego y la carga de datos.
    - **entities:** Submódulo que agrupa las entidades clave del juego:
      - **match:** Módulo responsable del manejo de las partidas, incluyendo la vista de batalla y el controlador de la lógica del juego durante el combate.
      - **pokemon:** Maneja todo lo relacionado con los Pokémon, desde ataques, selección y configuración de datos, hasta representaciones visuales en ASCII dentro de `asciiAvatars`.
    - **singleMode** y **multiplayerMode:** Contienen la implementación específica para los modos de juego individual y multijugador, respectivamente.
  - **utils:** Funciones y utilidades auxiliares reutilizables, como impresión centrada en pantalla y funciones base.
  - **mockUps:** Carpeta con recursos gráficos y mockups utilizados para diseño o referencia visual.

Cada archivo `.cpp` tiene su correspondiente archivo `.h` para una clara separación entre implementación y definición, lo que facilita la modularización y reutilización del código. Los comentarios dentro del código ayudan a entender la funcionalidad específica de cada módulo y función.

## 🎬 Instrucciones de Ejecución

1. Clona este repositorio en tu máquina local:
   ```bash
   git clone https://github.com/FDP-01-2025/project-real-c-pluh-pluh.git
   ```
2. Compilar este proyecto usando un compilador de C++:
   ```bash
   g++ main.cpp src/game/*.cpp src/game/entities/match/*.cpp src/game/entities/pokemon/*.cpp src/game/singleMode/*.cpp src/game/multiplayerMode/*.cpp src/utils/*.cpp src/game/entities/pokemon/asciiAvatars/*.cpp -o pokemonGame
   ```
3. Ejecutarse en la siguiente terminal de Windows (Link de descarga adjunto en caso de no estar instalada):
   [Enlace de descarga](https://apps.microsoft.com/detail/9n0dx20hk701?hl=es-es&gl=SV&ocid=pdpshare)

4. Para iniciar el juego abrir el archivo ejecutable o escribir en la terminal:
   ```bash
   ./pokemonGame.exe
   ```

## 💪 Equipo

- **Nombre del equipo:** [Real C pluh pluh ]

### Integrantes del equipo

1. **Nombre completo:** [Juan Manuel Flores Crisóstomo]  
   **Carnet:** [00135025]

2. **Nombre completo:** [Diego Alejandro González García]  
   **Carnet:** [00072825]

3. **Nombre completo:** [Jorge Alberto Escobar Menjivar ]  
   **Carnet:** [00072325]

4. **Nombre completo:** [Pablo Antonio Brito Elías]  
   **Carnet:** [00179025]
