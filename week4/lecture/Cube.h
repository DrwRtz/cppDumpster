#pragma once
#include <string>

class Cube {
    public:
        Cube(double length, std::string color);

        double getLength() const;
        void setLength(double length);

    private:
        double length_;
        std::string color_;
};