#ifndef GRANDFATHER_H
#define GRANDFATHER_H
#include <iostream>
using namespace std;

class GrandFather
{
private:
    string Grandname;
public:
    GrandFather();
    string getGrandName() const;
    void setGrandName(const string &newGrandname);
};

#endif // GRANDFATHER_H
