#ifndef STORAGEMGR_H
#define STORAGEMGR_H
#include<QPair>
#include<QObject>
#include"dataIO.h"
#include"upcntrbase.h"
#include "cmddef.h"
#include<iostream>
using namespace std;
using namespace DataIO;

class QString;
namespace StorageMgr
{
    struct PosiInfo
    {
       QString goodname;
       int stayedtime;
       int toStay;
       double price;
       int amount;
       QString unit;//unit is evalued how amount is measured
       QString owner;
    };

    class PosiMgr:public UpCntrBase
    {
        Q_OBJECT
    private:
        QPair<int,int> position;
        DataTrans *datacntr;
    public:
        PosiMgr();
        double ocurate();//货物空间占有率
        void setPosi(int x,int y);
        void getPoso(int *x,int *y);
        void disp(PosiInfo &info);
        void setDatacntr (DataTrans *dc);
    public slots:
        void lookAtxy(int *posi);
        void recv (QByteArray data);
    };
}
#endif // STORAGEMGR_H
