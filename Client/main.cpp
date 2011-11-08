#include <QtCore/QCoreApplication>
#include "testnetconnector.h"
#include"testDatatrans.h"
#include"teststoragemgr.h"
#include "testuecepmgr.h"
#include "testdiary.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /*
    testNetConnector *test = new testNetConnector();
    test->startTest ();

    testDatatrans *tdt = new testDatatrans();
    tdt->start ();

    teststorageMgr *tst = new teststorageMgr();
    tst->start ();


    testUEcepMgr *tst = new testUEcepMgr();
    tst->start ();
*/
    testDiary *td = new testDiary();
    td->start ();
    return a.exec();
}
