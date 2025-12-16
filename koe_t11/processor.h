#ifndef PROCESSOR_H
#define PROCESSOR_H
#include <iostream>
using namespace std;

class Processor
{
private:
    string model;
    double frequency;
    int cores;
public:
    Processor(string, double, int);
    void printData();
};

#endif // PROCESSOR_H
