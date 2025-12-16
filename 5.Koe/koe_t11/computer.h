#ifndef COMPUTER_H
#define COMPUTER_H

#include "processor.h"

#ifndef COMPUTER_H
#define COMPUTER_H
#include "processor.h"

class Computer : public Processor
{
private:
    string type;
    Processor* processorPtr;
public:
    Computer(string t, string processorModel);
    ~Computer();
    void printComputerData();
};

#endif // COMPUTER_H


#endif // COMPUTER_H
