#include "apartment.h"

Apartment::Apartment(int n, int a)
{
    numOfTenats = n;
    area = a;
}

int Apartment::heatingCost() {
    return numOfTenats * area;
}
