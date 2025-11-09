#include "car.h"
#include <iostream>
using namespace std;

Car::Car(string newBrand, string newModel, int newYear) {
    this->brand = newBrand;
    this->model = newModel;
    this->yearModel = newYear;
}

void Car::printData() {
    cout << "Auton tiedot: " << this->brand << " - " << this->model << " - "
         << this->yearModel << endl;
}


