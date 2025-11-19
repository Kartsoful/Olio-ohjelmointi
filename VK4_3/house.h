#ifndef HOUSE_H
#define HOUSE_H

#include "roof.h"
class House
{
private:
    Roof katto;
public:
    House();
    void setRoof(string);
    void printData();
};

#endif // HOUSE_H
