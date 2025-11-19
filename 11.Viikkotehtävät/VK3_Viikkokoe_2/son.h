#ifndef SON_H
#define SON_H

#include "father.h"

class Son : public Father
{
private:
    string name;
public:
    Son(string);
    string getName() const;
    void setName(const string &newName);
};

#endif // SON_H
