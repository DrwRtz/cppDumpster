#include <iostream>
#include <set>

int main()
{
    std::set<int> s;

    s.insert(4);
    s.insert(1);
    s.insert(10);
    s.insert(3);

    s.erase(s.begin());
    std::cout << *s.begin();

    std::cout << "\n//////////////\n";

    std::set<int> multi;
    int in;
    std::cin >> in;

    for (int i = 0; i < in; i++) 
    {
        int temp;
        std::cin >> temp;
        multi.insert(temp);
    }

    for (int x : multi)
    {
        std::cout << x << '\t';
    }
}