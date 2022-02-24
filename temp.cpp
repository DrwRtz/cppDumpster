#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::pair<std::string, int>> test;

    /*std::pair<std::string, int> pr;
    pr = {"010101", 5};

    std::cout << pr.first << "\n" << pr.second;
    */
    test.push_back({"101010", 5});
    
    std::cout << test[0].second;
}