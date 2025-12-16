#include "person.h"

#include <iostream>

using namespace std;

int main()
{
    Person obj1;
    obj1.setAge(22);
    cout<<"Ikä on "<<obj1.getAge()<<endl;

    Person obj2;
    obj2.setAge(32);
    cout<<"Ikä on "<<obj2.getAge()<<endl;
    return 0;
}
