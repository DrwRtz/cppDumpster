#include <iostream>

int main()
{
    int testCases;
    std::cin >> testCases;

    for(int i = 0; i < testCases; i++)
    {
        int candyBags, kids, totalCandies = 0;
        std::cin >> candyBags >> kids;

        for (int j = 0; j < candyBags; j++)
        {
            int temp;
            std::cin >> temp;
            totalCandies += temp;
        }

        std::cout << "Case #" << i + 1 << ": " 
            << totalCandies % kids << "\n";
    }

}