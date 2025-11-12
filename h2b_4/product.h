#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
using namespace std;

class Product
{
private:
    string name;
    double price;
public:
    Product(string, double);
    string getName() const;
    void setName(const string &newName);
    double getPrice() const;
    void setPrice(double newPrice);
    void printData();
};

#endif // PRODUCT_H
