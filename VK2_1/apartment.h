#ifndef APARTMENT_H
#define APARTMENT_H

class Apartment
{
private:
    int numOfTenats;
    int area;

public:
    Apartment(int, int);
    int heatingCost();
};

#endif // APARTMENT_H

