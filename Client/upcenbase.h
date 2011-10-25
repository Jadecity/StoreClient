#ifndef UPCENBASE_H
#define UPCENBASE_H

#include<QByteArray>
class UpcenBase
{
public:
    virtual void recv(QByteArray data){}
};
#endif // UPCENBASE_H
