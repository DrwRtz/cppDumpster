#include "Cube.h"

Cube::Cube(double length, std::string color) {
    length_ = length;
    color_ = color;
}

double Cube::getLength() const {
    return length_;
}

void Cube::setLength(double length) {
    length_ = length;
}