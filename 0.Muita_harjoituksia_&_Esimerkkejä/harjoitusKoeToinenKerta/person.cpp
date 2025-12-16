#include "person.h"

int Person::getAge()
{
    return age;
}

void Person::setAge(int newAge)
{
    age = newAge;
}

Person::Person() {
    cout<<"Olio luotu";
}

Person::~Person()
{
    cout<<"Olio tuhottu";
}
