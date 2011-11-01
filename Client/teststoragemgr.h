#ifndef TESTSTORAGEMGR_H
#define TESTSTORAGEMGR_H

#include <QObject>
#include"storageMgr.h"
using namespace StorageMgr;
class teststorageMgr : public QObject
{
    Q_OBJECT
public:
    explicit teststorageMgr(QObject *parent = 0);
   void  start();
signals:
    void needInfo(int *);

public slots:

};

#endif // TESTSTORAGEMGR_H
