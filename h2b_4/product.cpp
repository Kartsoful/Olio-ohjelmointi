#include "product.h"

Product::Product(string n, double p)
{
    name = n;
    price = p;
}

string Product::getName() const
{
    return name;
}

void Product::setName(const string &newName)
{
    name = newName;
}

double Product::getPrice() const
{
    return price;
}

void Product::setPrice(double newPrice)
{
    price = newPrice;
}

void Product::printData()
{
    cout <<"Product: " << name << ", Price: "<< price << endl;
}
