#include "teststoragemgr.h"

teststorageMgr::teststorageMgr(QObject *parent) :
    QObject(parent)
{
    NetConnector *net = new NetConnector(this);
    net->connectToServ ();
    PosiMgr *mgr = new PosiMgr();
    DataTrans *dt = new DataTrans(net);
    mgr->setDatacntr (dt);
    connect (this,SIGNAL(needInfo(int*)),mgr,SLOT(lookAtxy(int*)));
}

void teststorageMgr::start ()
{
    int posi[2] = {3,4};
    emit needInfo (posi);
}
