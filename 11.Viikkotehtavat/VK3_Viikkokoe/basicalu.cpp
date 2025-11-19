#include "basicalu.h"
#include <iostream>
using namespace std;

BasicALU::BasicALU() {
    cout << "BasicALU constructor!!" << endl;
}

double BasicALU::sum(double x, double y) {
    return x + y;
}

double BasicALU::sub(double x, double y) {
    return x - y;
}

double BasicALU::mul(double x, double y) {
    return x * y;
}

double BasicALU::div(double x, double y) {
    return x / y;
}
