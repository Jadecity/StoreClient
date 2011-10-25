#ifndef TESTDATATRANS_H
#define TESTDATATRANS_H

#include <QObject>
#include"dataIO.h"
#include"upcenbase.h"
class testDatatrans : public QObject,public UpcenBase
{
    Q_OBJECT
public:
    explicit testDatatrans(QObject *parent = 0);
    void start();
    void recv(QByteArray data);
signals:

public slots:
private:
    DataIO::DataTrans *dt;
};

#endif // TESTDATATRANS_H
