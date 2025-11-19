#include "telvisio.h"

double Telvisio::getScreenSize() const {
    return screenSize;
}

void Telvisio::setScreenSize(double newScreenSize) {
    screenSize = newScreenSize;
}

Telvisio::Telvisio(string n, double p, double s): Tuote(n, p) {
    screenSize = s;
}

void Telvisio::printData() {
    cout << " Name: " << this->getName() << ", Price: " << this->getPrice() << ", Size: " << screenSize << endl;
}


