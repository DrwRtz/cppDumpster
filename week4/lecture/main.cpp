#include "Game.h"

int main() {
    Game g;

    std::cout << "Initial game state: " << std::endl;
    std::cout << g << std::endl;

    g.solve();

    std::cout << "Final game state: " << std::endl;
    std::cout << g << std::endl;

}