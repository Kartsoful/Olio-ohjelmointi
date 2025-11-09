#include "rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::setWidth(double newWidth) { width = newWidth; }

void Rectangle::setHeight(double newHeight) { height = newHeight; }

double Rectangle::getArea() { return this->height * this->width; }

double Rectangle::getCircum() { return 2 * (this->width + this->height); }

void Rectangle::printData() {
    double area = this->getArea();
    double circum = this->getCircum();
    cout << "Pinta-ala: " << area << endl;
    cout << "Ymparysmitta: " << circum << endl;
}

Rectangle::Rectangle() {}
