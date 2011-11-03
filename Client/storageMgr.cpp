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

void PosiMgr::disp (PosiInfo &info)
{
    /*
     *just for debug
     */
    cout<<"\n"<<info.stayedtime<<"\n"<<info.toStay<<"\n"<<info.price<<"\n"<<info.amount<<"\n"<<info.unit.data ()<<"\n"<<info.owner.data ()<<endl;
}

void PosiMgr::recv (QByteArray data)
{
    //do analysis and call reflective methods
    cout<<"recved data :"<<endl;
    QDataStream ds(&data,QIODevice::ReadOnly);
    PosiInfo info;

    /*
     *get all data from source and build a struct PosiInfo
     */
    char *s ;
    ds>>s;
    info.goodname = QString(s);
    ds>>info.stayedtime;
    ds>>info.toStay;
    ds>>info.price;
    ds>>info.amount;
    ds>>s;
    info.unit = QString(s);
    ds>>s;
    info.owner = QString(s);

    disp(info);
}

void PosiMgr::setDatacntr (DataTrans *dc)
{
    if(dc!=NULL)
      this->datacntr = dc;
}

void PosiMgr::lookUpGood(int *posi)
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

void PosiMgr::lookUpGood (QString name)
{
    //build command
    QByteArray cmd;
    QDataStream ds(&cmd,QIODevice::ReadWrite);
    ds<<GET<<GOOD_INFO;
    ds<<"我们";
    QByteArray temp;
    QDataStream ds2(&temp,QIODevice::ReadWrite);
    ds2<<cmd.size ();
    cmd = temp + cmd;

    datacntr->request (this,cmd);
}
/*
 *void PosiMgr::registerUI()
*{
*}
 */
