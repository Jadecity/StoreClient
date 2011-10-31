#include "storageMgr.h"
using namespace StorageMgr;

PosiMgr::PosiMgr()
{
    datacntr = NULL;
}

double PosiMgr::ocurate ()
{
    //还没想好怎么写
}

void PosiMgr::setPosi(int x, int y)
{
    position = qMakePair(x,y);
}

void PosiMgr::getPoso (int *x, int *y)
{
    *x = position.first;
    *y = position.second;
}

void PosiMgr::recv (QByteArray data)
{
    //do analysis and call reflective methods
    cout<<"recved data :"<<data.data ()<<endl;
}

void PosiMgr::setDatacntr (DataTrans *dc)
{
    if(dc!=NULL)
      this->datacntr = dc;

    connect (datacntr,SIGNAL(dataReady()),this,SLOT(recv(QByteArray)));
}

void PosiMgr::lookAtxy(int *posi)
{
    if(posi != NULL)
    {
         setPosi (posi[0],posi[1]);
         //build command
         QByteArray cmd;
         QDataStream ds(&cmd,QIODevice::ReadWrite);
         ds<<GET<<POSI_INFO<<position.first<<position.second;
         QByteArray temp;
         QDataStream ds2(&temp,QIODevice::ReadWrite);
         ds2<<cmd.size ();
         cmd = temp + cmd;

         datacntr->request (this,cmd);
    }
}
