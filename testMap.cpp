#include <iostream>
#include <map>

std::ostream& operator<<(std::ostream& os, const std::pair<std::string, int>& pr) 
{
    os << "{ " << pr.first << ", " << pr.second << " }";
    return os; 
}

int main()
{
    std::map<std::string, int> m;
    m["what"] = 2;

    auto it = m.find("what");
    std::cout << *it;
}