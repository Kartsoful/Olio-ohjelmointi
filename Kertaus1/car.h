#ifndef CAR_H
#define CAR_H
#include <QString>



class Car
{
private:
    QString brand;
    QString model;
    int yearModel;


public:
    Car(QString, QString, int);
    QString getBrand() const;
    QString getModel() const;
    int getYearModel() const;
};

#endif // CAR_H
