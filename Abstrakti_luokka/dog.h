#ifndef DOG_H
#define DOG_H

#include "ianimal.h"

class Dog : public IAnimal
{
public:
    Dog();

    // IAnimal interface
public:
    void sayName();
};

#endif // DOG_H
