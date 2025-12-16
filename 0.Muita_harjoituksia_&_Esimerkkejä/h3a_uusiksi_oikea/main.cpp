#include "chef.h"
#include "italianchef.h"
#include <iostream>
using namespace std;

int main()
{
    ItalianChef objChef = *new ItalianChef("Anthony Bourdain");
    objChef.makeSalad();
    objChef.makeSoup();
    objChef.makePasta();
    objChef.getName();
    return 0;
}
