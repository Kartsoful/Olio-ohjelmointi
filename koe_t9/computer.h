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
    Computer();
    string getProcessor() const;
    void setProcessor(const string &newProcessor);
    double getDiskSize() const;
    void setDiskSize(double newDisk_size);
    void printData();
};

#endif // COMPUTER_H
