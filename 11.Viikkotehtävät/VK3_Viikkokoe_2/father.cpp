#include "father.h"

string Father::getFatherName() const
{
    return Fathername;
}

void Father::setFatherName(const string &newFathername)
{
    Fathername = newFathername;
}

Father::Father() {}
