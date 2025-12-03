#include "mystaticclass.h"
#include <iostream>

using namespace std;

int main()
{
    double x;
    double result;
    cout << "Anna desimaaliluku: ";
    cin >> x;
    result = MyStaticClass::doubleMe(x);
    cout << "Tuplattuna luku: " << result << endl;

    //MyStaticClass object;
    //Oliota ei voi luoda enään, koska luokan määrittelyssä on määritelty
    //MyStaticClass()=delete;
    //Poistettava myös cpp.tiedostosta luokan konstruktori

    return 0;

}
