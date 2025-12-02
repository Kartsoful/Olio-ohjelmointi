#include "animal.h"

string Animal::getColor() const
{
    return color;
}

void Animal::setColor(const string &newColor)
{
    color = newColor;
}

Animal::~Animal()
{
    cout << "Animal tuhottiin" << endl;
}

void Animal::sound()
{

}

Animal::Animal() {}
