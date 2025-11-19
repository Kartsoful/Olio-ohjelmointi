#include "house.h"

House::House() {}

void House::setRoof(string m)
{
    this->katto.setMaterial(m);
}

void House::printData()
{
    cout << "Katto materiaali on " << this->katto.getMaterial() << endl;
}
