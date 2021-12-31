#include "Game.h"

Game::Game() {
    for (int i = 0; i < 3; i++) {
        Stack stackOfCubes;
        stacks_.push_back(stackOfCubes);
    }

    Cube blue(4, "blue");
    stacks_[0].push_back(blue);

    Cube orange(3, "orange");
    stacks_[0].push_back(orange);

    Cube purple(2, "purple");
    stacks_[0].push_back(purple);

    Cube yellow(1, "yellow");
    stacks_[0].push_back(yellow);
}

void Game::solve() {
    while (stacks_[2].size() != 4) {
        legalMove(0, 1);
        legalMove(0, 2);
        legalMove(1, 2);
    }
    //stacks_[2].push_back(stacks_[1].removeTop());
}

void Game::legalMove(unsigned first, unsigned second) {
    if (stacks_[first].size() == 0 && 
            stacks_[second].size() > 0) {
        moveIt(second, first);
    } else if (stacks_[second].size() == 0 && 
            stacks_[first].size() > 0) {
        moveIt(first, second);
    } else {
        if (stacks_[first].peekTop().getLength() > 
                stacks_[second].peekTop().getLength()) {
            moveIt(second, first);
        } else {
            moveIt(first, second);
        }
    }

    std::cout << *this << std::endl;
}

void Game::moveIt(unsigned first, unsigned second) {
    stacks_[second].push_back(stacks_[first].removeTop());
}

std::ostream& operator<<(std::ostream & os, const Game & game) {
    for (unsigned i = 0; i < 3; i++) {
        os << "Stack[" << i << "]: " << game.stacks_[i] << std::endl;
    }

    return os;
}