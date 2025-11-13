#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using namespace std;

class Vehicle
{
private:
    int speed;
    string name;
public:
    Vehicle();
    int getSpeed() const;
    void setSpeed(int newSpeed);
    string getName() const;
    void setName(const string &newName);
};

#endif // VEHICLE_H
