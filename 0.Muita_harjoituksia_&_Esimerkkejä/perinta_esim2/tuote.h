#ifndef TUOTE_H
#define TUOTE_H
#include<iostream>
using namespace std;

class Tuote
{
private:
    string name;
    double price;
public:
    Tuote(string, double);
    string getName() const;
    void setName(const string &newName);
    double getPrice() const;
    void setPrice(double newPrice);
    virtual void printData();
};

#endif // TUOTE_H

