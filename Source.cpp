#include <iostream>
#include "Set.h"
#include "Set.cpp"

int main()
{
    int *arrSet1 = new int[3]{1, 2, 3};
    int *arrSet2 = new int[3]{5, 6, 7};

    Set set1(arrSet1, 3);
    Set set2(arrSet2, 3);
    Set set3 = set1 + set2;

    set1 += set2;

    std::cout << "printing set1 += set2..." << std::endl;
    set1.print();

    std::cout << std::endl;

    std::cout << "printing set1+set2..." << std::endl;
    (set1 + set2).print();

    std::cout << std::endl;

    std::cout << "printing set3 = set1 + set2..." << std::endl;
    set3.print();

    std::cout << std::endl;

    //-----The code that was commented out is causing the program to freeze and stop working properly
    // set3 = set1 + set2; // TODO: when the compiler hits here stops
    // std::cout << "printing set3 = set1 + set2 + something else..." << std::endl;
    // set3.print();
}