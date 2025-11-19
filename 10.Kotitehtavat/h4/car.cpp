#include "car.h"


string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::printDetails()
{
    cout << "Auto: " << this->getBrand() << " " << this->getModel() << endl;
    cout << "Moottori: " << this->objEngine.getHorsepower() << " hp, " << this->objEngine.getDisplacement() << " L" << endl;
    cout << "Rengas 1: " << this->objWheel1.getSize() << " tuumaa, " << this->objWheel1.getType() << endl;
    cout << "Rengas 2: " << this->objWheel2.getSize() << " tuumaa, " << this->objWheel2.getType() << endl;
    cout << "Rengas 3: " << this->objWheel3.getSize() << " tuumaa, " << this->objWheel3.getType() << endl;
    cout << "Rengas 4: " << this->objWheel4.getSize() << " tuumaa, " << this->objWheel4.getType() << endl;
}

Car::Car() {}

void Car::setEngine()
{
    this->objEngine.setHorsepower(150);
    this->objEngine.setDisplacement(2.0);
}

void Car::setWheels()
{
    this->objWheel1.setSize(17);
    this->objWheel1.setType("kesarengas");
    this->objWheel2.setSize(17);
    this->objWheel2.setType("kesarengas");
    this->objWheel3.setSize(17);
    this->objWheel3.setType("kesarengas");
    this->objWheel4.setSize(17);
    this->objWheel4.setType("kesarengas");
}

Car::Car(string m, string b) {
    model = m;
    brand = b;
}
