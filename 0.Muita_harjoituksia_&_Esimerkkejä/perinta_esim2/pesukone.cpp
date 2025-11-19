#include "pesukone.h"

Pesukone::Pesukone(string n, double p, int l, int m): Tuote(n,p) {
    linkousNopeus = l;
    maxPyykki = m;
}

void Pesukone::printData() {
    cout << " Name: " << this->getName() << ", Price: " << this->getPrice();
    cout << " Linkousnopeus: " << linkousNopeus << ", maxPyykki: " << maxPyykki << endl;
}
