#include "laptop.h"

Laptop::Laptop() {}

double Laptop::getDisplaySize() const
{
    return display_size;
}

void Laptop::setDisplaySize(double newDisplay_size)
{
    this->display_size = newDisplay_size;
}

void Laptop::printLaptopData()
{
    cout<<"Laptop:"<<endl;
    cout<<"display"<<this->getDisplaySize()<<endl;
    cout<<"processor:"<<this->getProcessor()<<endl;
    cout<<"disk size:"<<this->getDiskSize()<<endl;
}
