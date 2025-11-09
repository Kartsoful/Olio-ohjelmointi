#include <iostream>
#include <vector>
#include "car.h"
using namespace std;

int main()
{
    vector<Car> carList;

    carList.emplace_back("Tesla", "Model S", 2022);
    carList.emplace_back("Volkswagen", "Golf", 2018);
    carList.emplace_back("Ford", "Focus", 2012);

    cout << "Listan toisen alkion tiedot: " << endl;
    carList[1].printData();

    cout << endl;

    cout << "Listan kaikki autot:" << endl;
    for (int i=0; i <= 2 ; i++) {
        carList[i].printData();
    }

    cout << endl;
    return 0;
}
