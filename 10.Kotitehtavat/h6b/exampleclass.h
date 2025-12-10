#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H
#include <QThread>
#include <QObject>
#include <QCoreApplication>

class ExampleClass : public QObject
{
    Q_OBJECT
public:
    explicit ExampleClass(QObject *parent = nullptr);
    void startToWait();

public slots:
    void sayHelloSlot();

signals:
    void readyToSay();
};

#endif // EXAMPLECLASS_H
