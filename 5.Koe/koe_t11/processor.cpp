#include "processor.h"



Processor::Processor(string m, double f, int c)
{
    model = m;
    frequency = f;
    cores = c;
}

void Processor::printData()
{
    cout<<"prosessorin " << this->model << " kellotaajuus on " << this->frequency;
    cout<<" ja ytimiä on " << this->cores << " kpl" << endl;
    cout<<"jossa model="<<this->model;
    cout<<", frequency= "<<this->frequency;
    cout<<", cores="<<this->cores<<endl;
}
