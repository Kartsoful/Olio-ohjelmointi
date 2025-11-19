#ifndef FATHER_H
#define FATHER_H

#include "grandfather.h"

class Father : public GrandFather
{
private:
    string Fathername;
public:
    Father();
    string getFatherName() const;
    void setFatherName(const string &newFathername);
};

#endif // FATHER_H
