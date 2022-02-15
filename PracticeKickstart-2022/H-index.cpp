#include <iostream>
#include <vector>

int getCurrentH_index(std::vector<int> &k, int &size)
{
    int score;

    

    return score;
}

int main()
{
    int testCases;
    std::cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        std::cout << "Case #" << i + 1 << ": ";

        int number, H_index;
        std::cin >> number;

        std::vector<int> keeper;

        for (int j = 0; j < number; j++)
        {
            int temp;
            std::cin >> temp;
            keeper.push_back(temp);

            H_index = getCurrentH_index(keeper, number);
            std::cout << H_index << " ";
        }
        
        std::cout << '\n';
    }
}