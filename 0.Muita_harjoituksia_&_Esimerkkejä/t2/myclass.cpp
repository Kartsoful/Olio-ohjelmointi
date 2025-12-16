#include "myclass.h"

MyClass::MyClass() {
    cout<<"Konstruktori"<<endl;
}

MyClass::~MyClass()
{
    cout<<"destruktori"<<endl;
}

void MyClass::metodiA(int a)
{
    cout<<"Metodi A kutsuttu arvolla "<< a << endl;
}

void MyClass::metodiB(int b)
{
    cout<<"Metodi B kutsuttu arvolla "<< b <<endl;
}
