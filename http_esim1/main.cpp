#include "httpperson.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    HttpPerson *objHttpPerson = new HttpPerson(&a);
    qDebug()<<"Kaikki henkilot";
    objHttpPerson->getPersonsData();
    //qDebug()<<"Eka henkilo";
    //objHttpPerson->getOnePersonData();

    return a.exec();
}
