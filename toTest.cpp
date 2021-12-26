#include <iostream>
#include <vector>

class Cube {
    public:
        int first;
};

void checkIt(Cube & foo)
{
    std::cout << foo.first;
    foo.first = 14;
}

int main()
{
    Cube c;
    Cube *ptr = &c;
    delete ptr;

}