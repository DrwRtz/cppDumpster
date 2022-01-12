#include "PList.h"
#include <iostream>

int main() 
{
    PList<int> wist;
    wist.insertAtFront(3);
    std::cout << "list[0]: " << wist[0] << std::endl;
    wist.insertAtFront(14);
    std::cout << "list[0]: " << wist[0] << " | list[1]: " <<
        wist[1] << std::endl;
    
    return 0;
}