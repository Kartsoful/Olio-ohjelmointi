#include "son.h"



string Son::getName() const
{
    return name;

}

void Son::setName(const string &newName)
{
    name = newName;
}

Son::Son(string n) {
    name = n;
    setFatherName("Father of " + n);
    setGrandName("GrandFather of " + n);
}
