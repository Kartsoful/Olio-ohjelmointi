#include "grandfather.h"

string GrandFather::getGrandName() const
{
    return Grandname;
}

void GrandFather::setGrandName(const string &newGrandname)
{
    Grandname = newGrandname;
}

GrandFather::GrandFather() {}
