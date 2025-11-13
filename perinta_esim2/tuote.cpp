#include "tuote.h"

string Tuote::getName() const  {
    return name;
}

void Tuote::setName(const string &newName) {
    name = newName;
}

double Tuote::getPrice() const {
    return price;
}

void Tuote::setPrice(double newPrice) {
    price = newPrice;
}

void Tuote::printData() {
    cout<< " Tuote: " << name << ", Price: " << price << endl;
}

Tuote::Tuote(string n, double d) {
    name = n;
    price = d;
}

