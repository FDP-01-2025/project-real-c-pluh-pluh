#include "./waterPokemons.h"

const char* squirtleArt[] = {
    "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠀⠈⠁⠀⠀⠈⠀⠠⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠀⢠⡅⠀⠀⠀⠀⠀⢀⠤⢄⠀⠀⠁⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⢀⣧⠀⠀⠀⠀⠀⠀⣾⣦⣾⡇⠀⠀⠰⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠘⠇⠀⠀⠀⠀⠀⠸⣟⣛⡁⠇⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠆⢄⣀⠤⠤⠤⠤⠄⢀⣀⣀⠤⠀⠀⢡⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠈⠢⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢢⢚⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⡀⠀⠘⡲⠤⢄⣐⣈⢀⣀⣂⠬⠞⠥⣦⠑⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⡀⠀⠂⠀⠀⢀⠊⠀⠀⠀⠀⠀⠈⡐⠁⠀⠀⠀⠈⣟⠪⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠈⡄⢰⠀⠀⠀⢀⠁⠀⠀⠀⠂⠄⠤⠴⠁⠀⠀⠀⠀⠀⡿⠐⠨⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠈⠤⠤⠁⠠⠠⡼⠀⠀⠀⠀⢸⠀⢀⠄⠈⠡⢀⢀⢀⠜⢨⠁⠀⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠆⢡⠀⠀⠀⠘⠀⠐⠒⠤⣀⠠⠞⠊⠀⢸⠐⣀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⡰⠄⠀⠀⠉⠉⠀⠀⠀⠀⠃⡀⠀⢸⠀⢸⢲⢼⠃⠀⠄⠈⠀⠀⠀⠁⢢⠀",
    "⠀⠀⠀⠀⠀⠄⠀⠢⠀⠀⠀⢀⠀⠀⠀⠀⠠⠉⠁⠀⠈⠪⣇⡎⡠⠁⠀⠀⣠⠤⣄⠀⠀⠆",
    "⠀⠀⠀⠀⢠⠀⠀⠀⠑⢤⠀⠚⠠⢀⡀⠰⠁⠀⠀⠀⠀⠀⢻⠊⠀⠀⠀⡞⠀⠀⠀⠀⠀⡇",
    "⠀⠀⠀⠀⢰⠀⠀⠀⠀⠀⡕⠂⠀⠤⠠⢽⡀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠂⠙⣄⡀⢀⢈⠔⠀",
    "⠀⠀⠀⠐⣄⢠⠀⣀⠴⠐⠀⠀⠀⠀⠀⠀⠐⡀⠀⠀⠀⠀⢨⠁⠒⠂⠐⠀⠀⠙⠋⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢃⠠⡀⢀⡡⢈⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
};

const int squirtleArtLines = sizeof(squirtleArt) / sizeof(squirtleArt[0]);

// Lapras ASCII Art
const char* laprasArt[] = {
    "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡶⣆⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⡇⠿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⠶⠶⠟⢛⣻⠟⣛⡷⢾⣿⣄⣀⡾⠛⠛⠛⣿⣷⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⢠⡶⠏⠉⠰⠇⠀⠸⠉⢴⣏⣷⠈⢹⡏⠉⢀⣰⠶⣇⠈⢹⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠘⣧⣿⣿⣿⣧⣤⣀⡀⠈⠉⠉⠉⠉⠁⠀⣼⣿⣄⣈⣠⣼⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠀⠀⠛⠻⣿⣿⣿⣿⣿⣶⣆⡀⠀⠀⠀⠀⠀⠘⠛⣿⡟⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠿⣿⣿⣿⣿⣿⣿⡷⠤⣄⣀⠀⢠⡿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣿⡿⣿⣿⣿⣿⠃⠀⠀⢸⢀⣸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡶⣿⣿⣿⡿⠿⠋⠀⠀⠀⠀⣼⣼⠿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣯⣭⣉⠁⠀⠀⠀⠀⠀⡴⣻⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⠀⠀⠀⠀⠀⣀⡗⣿⠀⠀⠀⠀⠀⠀⣀⡶⢶⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⠉⠀⠀⠀⠀⠀⣏⠁⣿⠀⠀⠀⣤⣤⣼⡏⠁⣼⣿⠀⣤⣤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⠛⠀⠀⠀⠀⠀⢸⡇⠀⣿⣛⠛⠃⣀⠜⠃⠀⡄⠹⣿⡛⠧⢿⣀⣀⣀⡶⢦⣀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡿⠀⠀⠀⠀⠀⠀⢸⠣⠀⢸⣿⠷⣆⣥⢀⠰⠀⠁⠀⠈⠁⠀⠈⠹⠿⣏⣁⣼⠿⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡟⠃⠀⠀⠀⠀⠀⠀⢸⠀⠈⠂⢹⡧⣭⣹⢻⣄⡀⠀⠀⠀⠀⠀⣄⣠⠘⠈⣤⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣞⠃⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠘⠷⣆⠻⢶⡘⣷⡆⠀⠀⠀⠀⠛⢻⡆⠀⠛⣷⠶⣆⡀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠉⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⣿⣶⡄⠿⣦⠸⢧⡍⣿⢠⣤⣤⡄⣸⣿⣥⣤⡄⢩⣼⠟⠁⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠀⠀⣶⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡆⠀⢻⣿⡇⠀⣑⣀⠘⣷⣍⢻⣾⣷⣶⣻⣶⣶⣾⣟⣻⣾⣇⡀⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠣⡄⠀⠀⢀⠒⡿⠿⠀⠀⠙⠶⠶⠶⠶⠏⢰⣶⡇⠉⠹⢶⣿⠇⠀⠀⠀⠀⠀⠀",
    "⠀⠀⠀⠀⣀⣀⣠⣤⣿⣤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠣⣣⢜⣠⣞⣬⣦⣤⣤⣤⣤⣤⣀⣀⣀⠘⡋⠁⠀⠘⠛⣷⣤⣄⣀⠀⠀⠀⠀",
    "⢀⣀⣀⡶⠿⠛⠃⠀⠁⢻⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠺⡀⠛⢙⠀⠀⠀⠀⠀⠘⠉⠛⢻⠾⢇⣀⡀⠀⠀⠀⠀⠋⠻⠶⠶⣆⠀",
    "⠸⢿⡍⠁⠀⠀⠀⠀⡤⠮⠬⠷⣦⣤⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⡏⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⠀⠈⠉⠷⢿⠷⣧⡤⠤⢤⣤⣤⡿⠂",
    "⠀⠈⠙⠛⣧⣾⣤⣤⣤⣤⣾⠛⠛⠛⠛⢳⣤⣤⣤⣀⣀⣀⣀⣀⣙⣧⣤⣀⣀⣈⣓⠒⠒⠒⠒⠒⠚⢀⣀⣀⣤⣼⠛⠛⠛⠉⠉⠉⠁⠀",
    "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠉⠉⠉⠁⠈⠉⠉⠉⠙⣶⣶⣶⣶⣶⣶⡾⠉⠉⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀"
};

const int laprasArtLines = sizeof(laprasArt) / sizeof(laprasArt[0]);

