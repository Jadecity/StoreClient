#ifndef STORAGEMGR_H
#define STORAGEMGR_H
#include<QPair>
#include<QObject>
#include"dataIO.h"
#include"upcntrbase.h"
#include "cmddef.h"
#include "globalDataType.h"
#include<iostream>
using namespace std;
using namespace DataIO;

class QString;
namespace StorageMgr
{

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
        void setDatacntr (DataTrans *dc);
        /*
         *void registerUI();
         */
    private:
          void dispPosi(PosiInfo &info);
          void dispGood(GoodInfo &info);
          void dispException(QString &msg);
    public slots:
        void lookUpGood(int *posi);
        void lookUpGood (QString name);
        void recv (QByteArray data);
    };
}
#endif // STORAGEMGR_H
