#include <iostream>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        std::cout << "## TABLA DEL " << i << " ##" << std::endl;
        for (int j = 1; j <= 12; j++)
        {
            int userAttempt;
            int expectedInput = i * j;

            do {
                std::cout << i << " X " << j << " = ";
                
                std::cin >> userAttempt;


                if (userAttempt != expectedInput)
                {
                    std::cout << "Vuelve a intentarlo." << std::endl;
                }
            } while(userAttempt != expectedInput);
        }
    }
}