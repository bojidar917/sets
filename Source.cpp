#include <iostream>
#include "Set.h"
#include "Set.cpp"

int main()
{
    int *arra = new int[3]{1, 2, 3};
    Set set1(arra, 3);

    std::cout << "Starting..." << std::endl;
    set1.print();
}