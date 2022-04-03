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

    std::cout << "\n";

    // sorting an array
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    std::cout << "Sorted" << std::endl;
    // display the sorted array
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    

}