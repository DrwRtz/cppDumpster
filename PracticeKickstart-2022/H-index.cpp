#include <iostream>
#include <set>

void getCurrentH_index(std::multiset<long long, std::greater<>> &k)
{
    long long score, index = 1;

    for (long long el : k)
    {
        if (el >= index)
            score = index;
        
        index++;
    }

    std::cout << score << " ";
}

int main()
{
    int testCases;
    std::cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        long long number;
        std::cin >> number;

        std::multiset<long long, std::greater<>> keeper;
        std::cout << "Case #" << i + 1 << ": ";
        
        for (long long j = 0; j < number; j++)
        {
            long long temp;
            std::cin >> temp;
            keeper.insert(temp);

            getCurrentH_index(keeper);
        }
        
        std::cout << '\n';
    }
}