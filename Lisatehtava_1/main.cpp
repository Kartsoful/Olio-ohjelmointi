#include "car.h"
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    // SetConsoleOutputCP(CP_UTF8);
    // SetConsoleCP(CP_UTF8);

    Car *objectCar1 = new Car("Merscedes Benz", "C250 4matic", 2011);
    objectCar1->display();
    //Muista tuhota dynaamiset oliot!!!
    delete objectCar1;
    objectCar1 = nullptr;

    //smart pointer
    unique_ptr<Car> objectCar2 = make_unique<Car>("Volvo", "XC70", 2022);
    objectCar2->display();
    return 0;
}
