#ifndef WORKFLOW_H
#define WORKFLOW_H

#include "upcntrbase.h"
namespace WorkFlow
{
    class WorkFlowMgr:public UpCntrBase
    {
        Q_OBJECT
        public:
            WorkFlowMgr(QObject *parent=0);
        private:
            DataTrans *datacntr;
        public slots:
            void  recv (QByteArray data);
            /*
                �������UI�л�����ÿ����������ȫ������
                �����еĲ��ݶ����ʱ�������ָ�봫�ݸ�
                sendTables����
            */
            //sendTables��������UI��������ݷ��͵�������
            void sendTables();
        signals:
    };
}
#endif // WORKFLOW_H
