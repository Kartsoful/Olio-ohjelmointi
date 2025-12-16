#include "animal.h"
#include "cat.h"
#include "dog.h"
#include <iostream>
using namespace std;

int main()
{
    //Ei voida luoda Animal luokan oliota
    //kun Animal-luokka sisältää puhtaan virtuaalifunktion
    //kts. animal.h-tiedosto "void virtual sound()=0;"
    //eli Animal luokka on abstrakti
    //Animal objAnimal;

    Cat objCat;
    objCat.setName("Karvinen");
    cout << objCat.getName() << " sanoo: ";
    objCat.sound();

    objCat.sayName();

    Dog objDog;
    objDog.sayName();
    return 0;
}
