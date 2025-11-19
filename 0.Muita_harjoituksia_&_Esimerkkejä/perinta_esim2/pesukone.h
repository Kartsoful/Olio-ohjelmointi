#ifndef PESUKONE_H
#define PESUKONE_H

#include "tuote.h"

class Pesukone : public Tuote
{
    int linkousNopeus;
    int maxPyykki;
public:
    Pesukone(string, double, int, int);
    void printData() override;
};

#endif // PESUKONE_H
