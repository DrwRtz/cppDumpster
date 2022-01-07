#include "Stack.h"

void Stack::push_back(const Cube & cube) {
    cubes_.push_back(cube);
}

Cube Stack::removeTop() {
    Cube temp = cubes_.back();
    cubes_.pop_back();
    return temp;
}

Cube & Stack::peekTop() {
    return cubes_.back();
}

unsigned Stack::size() const {
    return cubes_.size();
}

std::ostream& operator<<(std::ostream & os, const Stack & stack) {
    for (unsigned i = 0; i < stack.cubes_.size(); i++) {
        os << stack.cubes_[i].getLength() << " ";
    }

    return os;
}