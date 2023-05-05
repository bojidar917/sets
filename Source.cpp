#include <iostream>
#include "Set.h"
#include "Set.cpp"

int main()
{
    Set set1;
    set1.setRange(1, 4);
    Set set2;
    set2.setRange(5, 8);
    Set set3 = set1 + set2;
    Set set4;
    set4.setRange(3, 7);
    // set1 -= set4;
    Set set5 = set1 - set4;

    // working
    std::cout << "printing set5..." << std::endl;
    set5.print();

    // working
    // std::cout << "printing set1 -= set4..." << std::endl;
    // set1.print();

    // std::cout << std::endl;

    // working
    //  set1 += set2;

    // std::cout << "printing set1 += set2..." << std::endl;
    // set1.print();

    // std::cout << std::endl;

    // working
    //  std::cout << "printing set1+set2..." << std::endl;
    //  (set1 + set2).print();

    // std::cout << std::endl;

    // working
    //  std::cout << "printing set3 = set1 + set2..." << std::endl;
    //  set3.print();

    std::cout << std::endl;

    //-----The code that was commented out is causing the program to freeze and stop working properly
    // set3 = set1 + set2; // TODO: when the compiler hits here stops
    // std::cout << "printing set3 = set1 + set2 + something else..." << std::endl;
    // set3.print();
}