#ifndef DATAIO_H
#define DATAIO_H
#include<QObject>
#include<QQueue>
#include"net.h"
using namespace Net;
#ifndef DEBUG
#define DEBUG
#endif
class QByteArray;
class UpcenBase;

namespace DataIO
{
     class IOBase
     {
         virtual void request(UpcenBase *caller,QByteArray &cmd) = 0;
     };

     class DataTrans:public QObject,public IOBase
     {
         Q_OBJECT
     private:
         QByteArray databuf;
         NetConnector *net;
         QQueue<UpcenBase *> msgOwner;
     public:
         DataTrans();
         DataTrans(NetConnector *net);
         void request(UpcenBase *caller,QByteArray &cmd);
         int setNet(NetConnector *net);
     public slots:
         void readData();
         void handIn();
     signals:
         void dataReady();
     };
}
#endif // DATAIO_H
