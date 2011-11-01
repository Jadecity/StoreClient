#include <QtCore/QCoreApplication>
#include "testnetconnector.h"
#include"testDatatrans.h"
#include"teststoragemgr.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /*
    testNetConnector *test = new testNetConnector();
    test->startTest ();

    testDatatrans *tdt = new testDatatrans();
    tdt->start ();
    */
    teststorageMgr *tst = new teststorageMgr();
    tst->start ();
    return a.exec();
}
