#include "computer.h"
#include <iostream>

using namespace std;

int main()
{

    Computer *objC=new Computer("i7", 500);
    objC->printData();
    delete objC;
    return 0;
}
