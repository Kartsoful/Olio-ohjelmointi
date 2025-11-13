#include "pesukone.h"
#include "telvisio.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    Tuote objTuote("Sohva", 999.99);
    Telvisio objTelvisio("TV", 850, 55);
    Pesukone objPesukone("Pyykkikone", 550, 1400, 8);
    cout << "Tuotteet yksitellen: " << endl;
    objTuote.printData();
    objTelvisio.printData();
    objPesukone.printData();

    vector<Telvisio> tvLista;
    tvLista.emplace_back(objTelvisio);
    tvLista.emplace_back("LG TV",999,55);
    tvLista.emplace_back("Samsung TV",1099,58);
    tvLista.emplace_back("Finlux",699,48);

    cout << endl << "Telvisiolista: "<< endl;

    for(Telvisio tv: tvLista) {
        tv.printData();
    }

    vector<Tuote*> tuoteLista;
    tuoteLista.push_back(&objTuote);
    tuoteLista.push_back(&objPesukone);
    tuoteLista.push_back(&objTelvisio);

    cout << endl << "Tuotelista eri tuotteista: " << endl;

    for(auto tuote: tuoteLista) {
        tuote->printData();
    }
    //auto sanan ansiosta kääntäjä tunnistaa olion luokan

    cout << endl;
    return 0;
}

