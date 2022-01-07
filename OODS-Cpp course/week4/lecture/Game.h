#pragma once

#include "Stack.h"
#include <vector>

class Game {
    public:
        Game();
        void solve();
        void legalMove(unsigned, unsigned);
        void moveIt(unsigned, unsigned);

        friend std::ostream& operator<<(std::ostream & os,
            const Game & game);

    private:
        std::vector<Stack> stacks_;
};