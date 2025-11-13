#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "basicalu.h"
#include <iostream>
using namespace std;

class Calculator : public BasicALU {
private:
    double op1;
    double op2;
    double result;
    char operation;
public:
    Calculator();
    void inputOperands();
    void calculateResult();
    void showResults();
};

#endif // CALCULATOR_H
