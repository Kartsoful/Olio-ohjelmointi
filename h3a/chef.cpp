#include "chef.h"



Chef::Chef(string n) {
    name = n;
    cout << "Chef " << n << " konstruktori" << endl;
}

Chef::~Chef()
{
    cout << "Chef " << name << " destruktori" << endl;
}

void Chef::makeSalad() {
    cout << "Chad " << name << " makes salad" << endl;
}

void Chef::makeSoup() {
    cout << "Chad " << name << " makes soup" << endl;
}
