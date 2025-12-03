class myClass
{
public:
    myClass();
    ~myClass();
    void memberFunction();
};


#include <iostream>
using namespace std;

myClass::myClass()
{
    cout<<"Executing constructor..."<<endl;
}

myClass::~myClass()
{
    cout<<"Executing destructor..."<<endl;
}

void myClass::memberFunction()
{
    cout<<"Running member function..."<<endl;
}


int main()
{
    // tassa tehdään pointteri myClass olioon. Pointteri tulee varatuksi pinosta
    myClass* pointteri;
    // Tassa sitten asetetaan pointterille arvo eli kaytetaan new operaatiota
    // olion varaamiseksi keosta eli heapista.
    pointteri = new myClass;
    // Ja tassa sitten käytetaan pointteria memberFunktion kutsumiseen
    pointteri->memberFunction();
    // Ja lopuksi pointteri vapautetaan ja olio tulee samalla tuhotuksi.
    delete pointteri;

    return 0;
}

