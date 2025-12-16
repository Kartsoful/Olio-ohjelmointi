#include "computer.h"

Computer::Computer(string p, double d)
{
    processor = p;
    disk_size = d;
}

Computer::~Computer()
{
    cout<<"olio tuhottiin"<<endl;
}


void Computer::printData()
{
    cout<<"Tietokoneen prosessori = " << this->processor;
    cout<<",kiintolevyn koko = " <<this->disk_size<<endl;
}

