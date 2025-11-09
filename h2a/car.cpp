#include "car.h"

void Car::setBrand(const string &newBrand) { brand = newBrand; }

void Car::setModel(const string &newModel) { model = newModel; }

void Car::setYearModel(int newYearModel) { yearModel = newYearModel; }

void Car::printData() {
    cout << "Merkki: " << this->brand << endl;
    cout << "Malli: " << this->model << endl;
    cout << "Vuosimalli: " << this->yearModel << endl;
}

Car::Car() {}
