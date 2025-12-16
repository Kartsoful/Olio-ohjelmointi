#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person
{
private:
    int age;
public:
    Person();
    ~Person();
    int getAge();
    void setAge(int);
};

#endif // PERSON_H
