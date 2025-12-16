#ifndef LAPTOP_H
#define LAPTOP_H
#include <iostream>
using namespace std;

#include "computer.h"

class Laptop : public Computer
{
private:
    double display_size;
public:
    Laptop();
    double getDisplaySize() const;
    void setDisplaySize(double newDisplay_size);
    void printLaptopData();
};

#endif // LAPTOP_H
