#include "computer.h"

Computer::Computer() {}

string Computer::getProcessor() const
{
    return processor;
}

void Computer::setProcessor(const string &newProcessor)
{
    processor = newProcessor;

}

double Computer::getDiskSize() const
{
    return disk_size;
}

void Computer::setDiskSize(double newDisk_size)
{
    disk_size = newDisk_size;
}

void Computer::printData()
{
    cout<<"processor:"<<this->getProcessor()<<endl;
    cout<<"disk size:"<<this->getDiskSize()<<endl;
}

