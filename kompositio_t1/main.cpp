#include "person.h"

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    Person objectPerson("Testi Teppo", "Uusikatu 2", "90100" , "Oulu");
    objectPerson.printData();

    //Vektori
    vector<Person> personList;
    personList.emplace_back(objectPerson);
    personList.emplace_back("Matti Rantanen", "Kuusitie 14", "90530", "Oulu");
    personList.emplace_back("Laura Heikkila", "Purokuja 7", "90420", "Oulu");
    personList.emplace_back("Jani Koivisto", "Mantypolku 3", "90240", "Oulu");
    personList.emplace_back("Sanna Vaisanen", "Valtatie 55", "90800", "Oulu");
    personList.emplace_back("Tero Makinen", "Aallokontie 9", "90310", "Oulu");

    cout << "Lista" << endl;

    for (Person obj: personList) {
        obj.printData();
    }






    return 0;
}
