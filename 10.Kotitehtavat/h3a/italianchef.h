#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(string);
    ~ItalianChef();
    string getName() const;
    void makePasta();
};

#endif // ITALIANCHEF_H
