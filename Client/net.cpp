#include "net.h"
using namespace Net;

NetConnector::NetConnector():status(false)
{
    mysocket = new QTcpSocket(this);
    addr = new QHostAddress(DEFADDR);
    port = DEFPORT;
}

NetConnector::NetConnector(QObject *parent):status(false)
{
    mysocket = new QTcpSocket(parent);
    addr = new QHostAddress(DEFADDR);
    port = DEFPORT;
}

NetConnector::NetConnector(const QHostAddress &addr, quint16 port):status(false)
{
    mysocket = new QTcpSocket(this);
    this->addr = new QHostAddress(addr);
    this->port = port;
}
//new methods
int NetConnector::reconnect ()
{
     mysocket->connectToHost (*addr,port);
     if(mysocket->waitForConnected (1000))
         return 1;
     else
         return 0;
}

bool NetConnector::chkstatus ()
{
    if(ConnectedState = mysocket->state ())
        return true;
    else
        return false;
}
