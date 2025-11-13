#include "apartment.h"
#include "vehicle.h"
#include <iostream>

using namespace std;

int main()
{
    // Tehtävän 3 testailut
    /*
    Apartment ap(2,60);
    int apCost = ap.heatingCost();
    cout<<"Heating cost = "<<apCost<<endl;
    return 0;
    */

    // Tehtävän 4 testailut
    Vehicle v;
    v.setName("Ford");
    v.setSpeed(85);
    cout<<v.getName()+" , ";
    cout<<v.getSpeed();
    cout<<" km/h"<<endl;
}
