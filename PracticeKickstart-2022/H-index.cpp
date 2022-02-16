#include <iostream>
#include <set>

void getCurrentH_index(std::multiset<int, std::greater<>> &k)
{
    int score, index = 1;

    for (int el : k)
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
        int number;
        std::cin >> number;

        std::multiset<int, std::greater<>> keeper;
        std::cout << "Case #" << i + 1 << ": ";
        
        for (int j = 0; j < number; j++)
        {
            int temp;
            std::cin >> temp;
            keeper.insert(temp);

            getCurrentH_index(keeper);
        }
        
        std::cout << '\n';
    }
}