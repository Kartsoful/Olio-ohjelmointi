#include "henkilo.h"
#include <iostream>


using namespace std;

int main()
{
    Henkilo objectPerson1("Testi Teppo", 28);
    objectPerson1.printData();

    //Jos haluat että olion voi luoda myös näin:
    //on Henkilo luokkaan lisättävä myös tyhjä konstruktori
    Henkilo objectPerson2;
    objectPerson2.setName("Liisa Joki");
    objectPerson2.setAge(21);
    objectPerson2.printData();

    //dynaaminen olio
    Henkilo *objectPerson3 = new Henkilo("Aino Virta", 34);
    objectPerson3->printData();
    delete objectPerson3;
    objectPerson3 = nullptr;

    return 0;
}
