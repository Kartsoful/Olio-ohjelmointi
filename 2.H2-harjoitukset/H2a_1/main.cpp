#include "henkilo.h"
#include <iostream>

using namespace std;

int main()
{
    //luodaan olio pinoon (stack)
    //ns. automaattinen olio
    //olio tuhoutuu automaattisesti
    henkilo objectHenkilo;
    objectHenkilo.ika = 27;
    objectHenkilo.nimi = "Testi Teppo";
    cout << objectHenkilo.nimi << " on " << objectHenkilo.ika << " vuotias." << endl;

    //luodaan olio kekoon (heap)
    //Meidän tulee tuhota olio, kun sitä ei tarvita
    henkilo *objectHenkilo2;
    objectHenkilo2 = new henkilo();
    objectHenkilo2->ika = 33;
    objectHenkilo2->nimi = "Liisa Joki";
    cout << objectHenkilo2->nimi << " on " << objectHenkilo2->ika << " vuotias." << endl;
    delete objectHenkilo2;
    objectHenkilo2 = nullptr;

    return 0;
}
