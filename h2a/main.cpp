#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>
using namespace std;

int main() {
    cout << "\033[1m" << "-- Auto-olion testaus --" << "\033[0m\n";
    Car objectCar;
    objectCar.setBrand("Tesla");
    objectCar.setModel("Model 3");
    objectCar.setYearModel(2022);
    objectCar.printData();

    cout << endl << "****************************" << endl << endl;

    cout << "\033[1m" << "-- Rectangle olion testaus --" << "\033[0m\n";
    Rectangle *objectRectangle = new Rectangle();
    objectRectangle->setHeight(20);
    objectRectangle->setWidth(10);
    objectRectangle->printData();
    delete objectRectangle;
    objectRectangle = nullptr;

    cout << endl << "****************************" << endl << endl;

    cout << "\033[1m" << "-- Student olion testaus --" << "\033[0m\n";
    unique_ptr<Student> objectStudent = make_unique<Student>();
    objectStudent->setName("Olli Opiskelija");
    objectStudent->setStudentNumber(1234);
    objectStudent->setAverage(3.8);
    cout << "Opiskelijan tiedot:" << endl;
    cout << "Nimi: " << objectStudent->getName() << endl;
    cout << "Opiskelijanumero: " << objectStudent->getStudentNumber() << endl;
    cout << "Keskiarvo: " << objectStudent->getAverage() << endl;

    cout << "" << endl;
    return 0;
}
