#include "chef.h"
#include "italianchef.h"
#include <iostream>
using namespace std;

int main()
{
    ItalianChef objItalianChef("Anthony Bourdain");
    objItalianChef.makeSalad();
    objItalianChef.makeSoup();
    objItalianChef.makePasta();
    objItalianChef.getName();
    return 0;
}
