#include <iostream>

int main()
{
    std::string temp = "AEIOU";

    temp[1] = temp[1] + 1;

    std::cout << temp;
}