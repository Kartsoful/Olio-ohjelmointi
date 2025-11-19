#include "classa.h"
#include <iostream>

using namespace std;

int main()
{
    ClassA A;
    ClassB B;

    ClassB &refB = B;

    A.print1(refB);
    A.print2(B);
    A.print3();

    return 0;
}
