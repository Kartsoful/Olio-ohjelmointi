#include "calculator.h"
#include <iostream>

using namespace std;

int main()
{
    Calculator laskin;
    laskin.inputOperands();
    laskin.calculateResult();
    laskin.showResults();

    return 0;
}
