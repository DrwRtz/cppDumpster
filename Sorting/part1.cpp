#include <iostream>
#include <cstdlib>
#define MAX 100

int main()
{
    int n;
    int arr[MAX];

    std::cout << "Enter a number N: " << std::endl;
    std::cin >> n;

    // inputting values in an array
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }

    // outputting values from the unsorted array
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";

    
}