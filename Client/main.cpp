#include <QtCore/QCoreApplication>
#include "testnetconnector.h"
#include"testDatatrans.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


   // testNetConnector *test = new testNetConnector();
    //test->startTest ();

    testDatatrans *tdt = new testDatatrans();
    tdt->start ();

    return a.exec();
}
