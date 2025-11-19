#ifndef TELVISIO_H
#define TELVISIO_H

#include "tuote.h"

class Telvisio : public Tuote
{
private:
    double screenSize;
public:
    Telvisio(string, double, double);
    double getScreenSize() const;
    void setScreenSize(double newScreenSize);
    void printData() override;
};

#endif // TELVISIO_H

