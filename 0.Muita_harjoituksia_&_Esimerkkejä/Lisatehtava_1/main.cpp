#include "car.h"
#include <iostream>
#include <memory>
#include <vector>

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

    //Muutetaan vuosimalli
    objectCar2->setYear(1884);
    cout<<"Muokattu vuosimalli = "<<objectCar2->getYear()<<endl;

    unique_ptr<Car> objectCar3 = make_unique<Car>("Citroen", "C5", 1675);
    objectCar3->display();

    unique_ptr<Car> objectCar4 = make_unique<Car>("Ford", "Anglia");
    objectCar4->display();

    //oliolista
    cout<<"OLIOLISTA"<<endl;

    vector<Car> CarList;
    // Luodaan olioita listaan
    CarList.emplace_back("Toyota", "Corolla", 2015);
    CarList.emplace_back("Volkswagen", "Golf", 2018);
    CarList.emplace_back("Ford", "Focus", 2012);
    CarList.emplace_back("Tesla", "Model 3", 2021);
    CarList.emplace_back("Volvo", "V60", 2019);


    for(int x=0; x<=4; x++){
        CarList[x].display();
    }

    return 0;
}
