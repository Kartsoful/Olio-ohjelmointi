#include "person.h"

#include <iostream>

using namespace std;

int main()
{
    Person objPerson;
    objPerson.setName("Testi Nimi");
    objPerson.setAge(23);

    cout << "Henkilon nimi on " << objPerson.getName() << ". Han on ialtaan " << objPerson.getAge() << " vuotias." << endl;
    return 0;
}
