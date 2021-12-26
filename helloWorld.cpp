#include <iostream>
#include <string>

void buildValues(std::string ahoy[], int upTo)
{
    int index = 0;

    for (int i = 1; i < upTo + 1; i++)
    {
        for (int j = 1; j < 13; j++)
        {
            ahoy[index] = std::to_string(i).append(" x ").append(std::to_string(j));
            index++;        
        }
    }
}

int main()
{
    // Presummably a starting point
    int upToThis;
    std::cin >> upToThis;
    int size = upToThis * 12;
    std::string chart[size];

    buildValues(chart, upToThis);

    for (std::string el : chart)
    {
        std::cout << el << "\n";
    }

    std::cout << rand();
    
}