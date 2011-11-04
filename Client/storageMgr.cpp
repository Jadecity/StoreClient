#include "storageMgr.h"
using namespace StorageMgr;

PosiMgr::PosiMgr()
{
    datacntr = NULL;
}

double PosiMgr::ocurate ()
{
    //还没想好怎么写
     //to be modified
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

void PosiMgr::dispPosi (PosiInfo &info)
{
     //to be modified
    /*
     *just for debug
     */
    cout<<"\n"<<info.stayedtime<<"\n"<<info.toStay<<"\n"<<info.price<<"\n"<<info.amount<<"\n"<<info.unit.data ()<<"\n"<<info.owner.data ()<<endl;
}

void PosiMgr::dispGood (GoodInfo &info)
{
 //to be modified
}

void PosiMgr::dispException (QString &msg)
{
    //to be modified
}

void PosiMgr::recv (QByteArray data)
{
    //do analysis and call reflective methods
    cout<<"recved data :"<<endl;
    QDataStream ds(&data,QIODevice::ReadOnly);
    char *temp;
    ds>>temp;
    if(!strcmp (temp,NOTHING))/*reply flag is indicated to find nothing of that action*/
    {
        QString msg("抱歉，没有找到任何您需要的数据！");
        dispException(msg);
        return;
    }
    ds>>temp;
    if(!strcmp (temp,POSI_INFO))/*reply is position info*/
    {
        /*
         *get all data from source and build a struct PosiInfo
         */
         PosiInfo info;
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

        dispPosi(info);
    }else if(!strcmp (temp,GOOD_INFO))/*reply is good info*/
    {
        GoodInfo info;
        char *s;
        ds>>info.posi[0]>>info.posi[1];
        ds>>s;
        info.name = QString(s);
        ds>>info.price>>info.amount;
        ds>>s;
        info.unit = QString(s);
        ds>>s;
        info.owner = QString(s);
        ds>>s;
        info.arriveTime = QString(s);
        dispGood (info);
    }

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
    ds<<name.toUtf8 ();
    QByteArray temp;
    QDataStream ds2(&temp,QIODevice::ReadWrite);
    ds2<<cmd.size ();
    cmd = temp + cmd;

    datacntr->request (this,cmd);
}
/*
 *void PosiMgr::registerUI()
*{
* //to be modified
*}
 */
