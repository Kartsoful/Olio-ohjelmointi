#include "dog.h"

Dog::Dog() {}

Dog::~Dog() {
    cout << "Koira destruktori" << endl;
}

void Dog::callOut() {
    cout << "Koira haukkuu!" << endl;
}
