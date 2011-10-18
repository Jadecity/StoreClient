#ifndef NET_H
#define NET_H

#include <QTcpSocket>
#include<QtGlobal>

#define DEFADDR 127.0.0.1
#define DEFPORT 8888
namespace Net
{
    class NetConnector:public QTcpSocket
    {
    private:
        //my own attributes
        QTcpSocket* mysocket;
        QHostAddress* addr;
        quint16 port;
        bool status;//��־����״̬������/�Ͽ�
    public:
        NetConnector();
        NetConnector(QObject * parent = 0);
        NetConnector(const QHostAddress &addr, quint16 port);
        //new methods
        //return value:1 ��ʾ�����ɹ���0 ��ʾ����ʧ��
        int reconnect();
        bool chkstatus();
    };
}
#endif // NET_H
