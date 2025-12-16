#include "computer.h"
#include "laptop.h"

#include <iostream>

using namespace std;

int main()
{
    Computer objComputer;
    objComputer.setProcessor("i5");
    objComputer.setDiskSize(500);
    objComputer.printData();

    Laptop objL;
    objL.setProcessor("i7");
    objL.setDiskSize(256);
    objL.setDisplaySize(14);
    objL.printLaptopData();
    return 0;
}
