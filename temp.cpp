#include <iostream>
#include <random>

int main()
{
    std::random_device seed;
    std::mt19937 mt(seed());
    std::uniform_int_distribution<int> dist(1, 10);

    for (int i = 0; i < 5; i++)
    {
        std::cout << dist(mt) << std::endl;
    }
}