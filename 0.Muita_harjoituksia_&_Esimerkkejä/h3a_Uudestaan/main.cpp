#include "dog.h"
#include <iostream>

using namespace std;

// Itseasiassa tämähän oli h3b

int main()
{
    Animal objAnimal = *new Animal;
    Dog objDog = *new Dog;
    objAnimal.callOut();
    objDog.callOut();
    return 0;
}
