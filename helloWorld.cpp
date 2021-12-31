#include <iostream>

/*class Cube {
    public:
        Cube(double length);

        double getLength() const;
        void setLength(double length);

    private:
        double length_;
};

Cube::Cube(double length) {
    length_ = length;
}

double Cube::getLength() const {
    return length_;
}

void Cube::setLength(double length) {
    length_ = length;
}

namespace wry {
    template <typename T>
    T max(T a, T b) {
        if (a > b) { return a; }
        return b;
    }
}

int main() 
{
    std::cout << "max(3, 5): " << wry::max(3, 5) << std::endl;
    std::cout << "max('a', 'd'): " << wry::max('a', 'd') << std::endl;
    std::cout << "max(\"Hello\", \"World\"): " << wry::max(std::string("Hello"), std::string("World")) << std::endl;

    //std::cout << "max( Cube(3), Cube(6) )" << max( Cube(3), Cube(6) ) << std::endl;
}*/
class Just_a_double {
public:
    double a;

    Just_a_double(double x) : a(x) { }
    Just_a_double() : Just_a_double(0) { }
};

int main() {
    Just_a_double sample(1);
    std::cout << sample.a;
    return 0;
}