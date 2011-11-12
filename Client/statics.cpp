#include "statics.h"
using namespace Statics;
#ifdef DEBUG
#include <iostream>
using namespace std;
#endif
StaticCntr::StaticCntr(QObject *parent)
{

}

void StaticCntr::setDatacntr (DataTrans *dc)
{
    if(NULL!=dc)
    {
         this->datacntr = dc;
    }
}

void StaticCntr::recv (QByteArray data)
{
    QDataStream ds(&data,QIODevice::ReadOnly);
    char  *str;
    ds>>str;
    if(!strcmp(str,NOTHING))
    {
#ifdef DEBUG
        cout<<"server gives nothing"<<endl;
#endif
        return;
    }

    if(!strcmp (str,DIARY))
    {

    }else if(!strcmp(str,DIARIES))
    {

    }else if(!strcmp(str,DIA_CON))
    {

    }else
    {
        //do something for default condition
    }
    //call UI components to display
}

void StaticCntr::thisMonthThroughout ()
{
    QByteArray cmd;
    QDataStream ds(&cmd,QIODevice::ReadWrite);
    ds<<GET<<THIS_MONTH_THROUGHOUT;
    QByteArray temp;
    QDataStream ds2(&temp,QIODevice::ReadWrite);
    ds2<<cmd.size ();
    cmd = temp  + cmd;

    datacntr->request (this,cmd);
}

void StaticCntr::predictNextMonthThroughout ()
{
    QByteArray cmd;
    QDataStream ds(&cmd,QIODevice::ReadWrite);
    ds<<GET<<NEXT_MONTH_THROUGHOUT;
    QByteArray temp;
    QDataStream ds2(&temp,QIODevice::ReadWrite);
    ds2<<cmd.size ();
    cmd = temp  + cmd;

    datacntr->request (this,cmd);
}

void StaticCntr::companyBusyDegree ()
{
    QByteArray cmd;
    QDataStream ds(&cmd,QIODevice::ReadWrite);
    ds<<GET<<COMPANY_BUSY_RANK;
    QByteArray temp;
    QDataStream ds2(&temp,QIODevice::ReadWrite);
    ds2<<cmd.size ();
    cmd = temp  + cmd;

    datacntr->request (this,cmd);
}

void StaticCntr::goodWastage()
{
    QByteArray cmd;
    QDataStream ds(&cmd,QIODevice::ReadWrite);
    ds<<GET<<GOOD_WASTAGE;
    QByteArray temp;
    QDataStream ds2(&temp,QIODevice::ReadWrite);
    ds2<<cmd.size ();
    cmd = temp  + cmd;

    datacntr->request (this,cmd);
}
