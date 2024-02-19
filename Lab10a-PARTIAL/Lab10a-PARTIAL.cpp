//THis could be called the "client" program/file

#include <iostream>
#include "Inventory.h"

int main()
{
    Inventory shoes; 
    std::cout << shoes.calculateTotalValue() << std::endl; 
    //std::cout << "Hello World!\n";
}
