#include "italianchef.h"

ItalianChef::ItalianChef(string n) : Chef(n)
{
    cout << "ItalianChef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << name << " destruktori" << endl;
}

string ItalianChef::getName()
{
    cout << "name of the Italian Chef is " << name << endl;
    return name;
}

void ItalianChef::makePasta()
{
    cout << "ItalianChef " << name << " makes pasta" << endl;
}
