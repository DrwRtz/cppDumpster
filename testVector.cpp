#include <iostream>
#include <vector>
#include <algorithm>

int main() 
{
    std::vector<int> v = {9, 5, 6, 3, 1};
    
    std::sort(v.begin(), v.end());
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << v[i] << "\t";
    }
}