#include "son.h"
#include <iostream>

using namespace std;

int main()
{
    Son objectSon("Kari");
    cout<<objectSon.getName()<<endl;
    cout<<objectSon.getFatherName()<<endl;
    cout<<objectSon.getGrandName()<<endl;
    return 0;
}
