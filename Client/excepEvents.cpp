#include"excepEvents.h"
#include "cmddef.h"
#include<QString>
#ifdef DEBUG
#include <iostream>
using namespace std;
#endif

WorkFlowExcep::UExcepMgr::UExcepMgr(QObject *parent)
{
    datacntr = NULL;
}

void WorkFlowExcep::UExcepMgr::setDatacntr (DataTrans *dc)
{
    if(NULL!= dc)
    {
        datacntr = dc;
    }
}

QByteArray WorkFlowExcep::UExcepMgr::buildcmd(WorkFlowExcep::ExcepRec *rec)
{
    QByteArray cmd;
    QDataStream ds(&cmd,QIODevice::ReadWrite);
    ds<<rec->title.toUtf8 ()<<rec->abstract.toUtf8 ()<<rec->detailDes.toUtf8 ()<<rec->reason.toUtf8 ()<<rec->action.toUtf8 ()<<rec->handlerId.toUtf8 ()<<rec->handlerName.toUtf8 ()<<rec->time.toUtf8 ();
    QByteArray temp;
    QDataStream dstemp(&temp,QIODevice::ReadWrite);
    dstemp<<cmd.size ();
    cmd = temp + cmd;

    return cmd;
}

void WorkFlowExcep::UExcepMgr::rec_excep (QString *content,unsigned int itemNo)
{
    if(NULL != content)
    {
        if(EXCEP_STRUCT_SIZE == itemNo)
        {
            /*
             *get data
            */
           WorkFlowExcep::ExcepRec rec;
            int i= 0 ;
            rec.title = content[i++];
            rec.abstract = content[i++];
            rec.detailDes = content[i++];
            rec.reason = content[i++];
            rec.action = content[i++];
            rec.handlerId = content[i++];
            rec.handlerName = content[i++];
            rec.time = content[i++];

            /*produce cmd*/
            QByteArray cmd = buildcmd (&rec);
            datacntr->request (this,cmd);

            /*
             *destroy all content
             */
            delete content;
            content = NULL;
        }
        else return;
    }
}

void WorkFlowExcep::UExcepMgr::recv (QByteArray data)
{
    disp(QString(data));
    //to be modified
}

void WorkFlowExcep::UExcepMgr::disp(QString msg)
{
#ifdef DEBUG
    int size = msg.size ();
    for(int i=0;i<size;++i)
    {
        cout<<msg.at (i).toAscii ();
    }
    cout<<"-->end"<<endl;
#endif
    //to be modified
}
