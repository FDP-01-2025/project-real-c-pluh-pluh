## 🎮 Proyecto de C++ - Pokémon Battle Game

## 📄 1. Descripción del Proyecto
Este proyecto consiste en un juego de batallas de Pokémon por rondas, donde el jugador puede elegir entre modo un jugador (contra la CPU) o multijugador (contra otro jugador). El objetivo es seleccionar un Pokémon, enfrentarse en combates por turnos y ganar la mayor cantidad de rondas para obtener la victoria. El juego busca ofrecer una experiencia similar a la de los juegos originales de Pokémon, donde la estrategia y el conocimiento de debilidades son clave.

##  🔨 2. Conceptos Básicos y Estructuras de Control Usadas
El juego está desarrollado en C++ y utiliza:
- **Estructuras (`struct`)** para representar Pokémon y partidas.
- **Condicionales (`if`, `switch`)** para controlar el flujo del juego y las decisiones del jugador.
- **Bucles (`while`, `for`)** para manejar los turnos, las rondas y la selección de ataques.
- **Funciones** para modularizar la lógica del juego (selección de Pokémon, ataques, control de turnos, etc.).
- **Enums** para definir tipos de ataques, tipos de Pokémon y modos de juego.

## 📜 3. Manual de Inicio Rápido
-Al iniciar el juego, selecciona el modo de juego: un jugador (contra CPU) o dos jugadores.
-Elige tu Pokémon de una lista disponible.
-En cada turno, selecciona el ataque que deseas usar.
-Observa los puntos de vida y debilidades para planear tu estrategia.
-El juego continuará por rondas hasta que uno de los jugadores gane la mayoría.

Algunos Mockups de la jugabilidad son:
![pokemon](/src/mockUps/image.png)
![singlePlayer](/src/mockUps/image2.png)
![battle](/src/mockUps/image3.png)

## 🎯 4. Estrategia y Objetivo
El objetivo principal es ganar más rondas que tu oponente. 

Para alcanzar este objetivo:
-Aprovecha las debilidades de los Pokémon rivales.
-Usa ataques especiales en el momento adecuado (algunos solo están disponibles cada ciertos turnos).
-Administra tus puntos de vida y elige tus ataques estratégicamente.

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

## 🎬 Instrucciones de Ejecución

1. Clona este repositorio en tu máquina local:
   ```bash
   git clone [https://github.com/FDP-01-2025/project-real-c-pluh-pluh.git]

2. Compilar este proyecto usando un compilador de C++:
   ```bash
   g++ main.cpp src/game/*.cpp src/game/entities/match/*.cpp src/game/entities/pokemon/*.cpp src/game/singleMode/*.cpp src/game/multiplayerMode/*.cpp src/utils/*.cpp src/game/entities/pokemon/asciiAvatars/*.cpp -o pokemonGame
   
3. Ejecutarse en la siguiente terminal de Windows (Link de descarga adjunto en caso de no estar instalada):
   ```bash
   https://apps.microsoft.com/detail/9n0dx20hk701?hl=es-es&gl=SV&ocid=pdpshare

4. Para iniciar el juego abrir el archivo ejecutable o escribir en la terminal:
   ```bash
   ./pokemonGame.exe
