#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>
using namespace std;

class Computer
{
private:
    string processor;
    double disk_size;
public:
    Computer(string, double);
    ~Computer();
    void printData();
};

#endif // COMPUTER_H
