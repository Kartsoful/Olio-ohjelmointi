#include "myclass.h"
#include <iostream>
using namespace std;
void callmyClass();

int main()
{
    callmyClass();
    return 0;
}

void callmyClass() {
    MyClass objMyClass = *new MyClass;
    objMyClass.metodiA(1);

    MyClass* objPointteri;
    objPointteri = new MyClass();
    objPointteri->metodiA(2);
    delete objPointteri;
    objPointteri = nullptr;

    objMyClass.metodiB(3);
}
