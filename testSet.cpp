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
}