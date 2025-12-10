#include "exampleclass.h"
#include <QDebug>

ExampleClass::ExampleClass(QObject *parent)
    : QObject{parent}
{
    qDebug()<<"Start";
    QObject::connect(this, &ExampleClass::readyToSay, this, &ExampleClass::sayHelloSlot);
    qDebug()<<"End";
}

void ExampleClass::startToWait()
{
    QThread::msleep(1000);
    emit readyToSay();
}

void ExampleClass::sayHelloSlot()
{
    qDebug()<<"Terve";
}


// Muokkaa edellä tuota connect-riviä, niin että readyToSay-signaali yhdistetään slottiin sayHelloSlot.
// dynaamiset oliot
// QObject::connect(sender, &SenderClass::valueChanged, receiver, &ReceiverClass::updateValue);
