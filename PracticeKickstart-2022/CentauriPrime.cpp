#include <iostream>
#include <string>

int main()
{
    int testCases;
    std::cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        std::string kingdom, monarch;
        std::cin >> kingdom;

        char last = std::tolower(kingdom[kingdom.length() - 1]);

        if (last == 'a' || last == 'e' || last == 'i' || 
            last == 'o' || last == 'u')
        {
            monarch = "Alice";
        }
        else if (last == 'y')
        {
            monarch = "nobody";
        }
        else
        {
            monarch = "Bob";
        }

        std::cout << "Case #" << i + 1 << ": " << kingdom
                << " is ruled by " << monarch << ".\n";
    }
}