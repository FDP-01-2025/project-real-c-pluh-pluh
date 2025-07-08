[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/mi1WNrHU)

# Proyecto de C++ - Pokémon Battle Game

## 1. Descripción del Proyecto
Este proyecto consiste en un juego de batallas de Pokémon por rondas, donde el jugador puede elegir entre modo un jugador (contra la CPU) o multijugador (contra otro jugador). El objetivo es seleccionar un Pokémon, enfrentarse en combates por turnos y ganar la mayor cantidad de rondas para obtener la victoria. El juego busca ofrecer una experiencia similar a la de los juegos originales de Pokémon, donde la estrategia y el conocimiento de debilidades son clave.

## 2. Conceptos Básicos y Estructuras de Control Usadas
El juego está desarrollado en C++ y utiliza:
- **Estructuras (`struct`)** para representar Pokémon y partidas.
- **Condicionales (`if`, `switch`)** para controlar el flujo del juego y las decisiones del jugador.
- **Bucles (`while`, `for`)** para manejar los turnos, las rondas y la selección de ataques.
- **Funciones** para modularizar la lógica del juego (selección de Pokémon, ataques, control de turnos, etc.).
- **Enums** para definir tipos de ataques, tipos de Pokémon y modos de juego.

## 3. Compilar este proyecto usando un compilador de C++
g++ -o pokemon-game src/game/game.cpp src/game/entities/pokemon/*.cpp src/game/entities/match/*.cpp src/utils/*.cpp

## 4. Ejecutar el juego
./pokemonGame.exe

## 5. Manual de Inicio Rápido
-Al iniciar el juego, selecciona el modo de juego: un jugador (contra CPU) o dos jugadores.
-Elige tu Pokémon de una lista disponible.
-En cada turno, selecciona el ataque que deseas usar.
-Observa los puntos de vida y debilidades para planear tu estrategia.
-El juego continuará por rondas hasta que uno de los jugadores gane la mayoría.

## 6. Estrategia y Objetivo
El objetivo principal es ganar más rondas que tu oponente. 

Para alcanzar este objetivo:
-Aprovecha las debilidades de los Pokémon rivales.
-Usa ataques especiales en el momento adecuado (algunos solo están disponibles cada ciertos turnos).
-Administra tus puntos de vida y elige tus ataques estratégicamente.

## 7. Documentación
-El código está comentado para facilitar su comprensión.
-Las funciones principales se encuentran en la carpeta pokemon y match.
-Para más detalles sobre la estructura y lógica, se encientra en los archivos .h y .cpp correspondientes.

## Equipo

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

## Instrucciones de Ejecución

1. Clona este repositorio en tu máquina local:
   ```bash
   git clone [https://github.com/FDP-01-2025/project-real-c-pluh-pluh.git]
