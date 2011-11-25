#ifndef GLOBALDATATYPE_H
#define GLOBALDATATYPE_H
#include <QString>
struct PosiInfo
{
   QString goodname;
   int stayedtime;
   int toStay;
   double price;
   int amount;
   QString unit;//unit is evalued how amount is measured
   QString owner;
};

struct GoodInfo
{
    int posi[2];
    QString name;
    double price;
    int amount;
   QString unit;
   QString owner;
   QString arriveTime;
};

struct Diary
{
    QString title;
    QString content;
    QString date;
    QString writerName;
    QString writerId;
};

struct StoreStatus
{
//    ������
    long totalCap;
//    ʣ������
    long remainCap;
//    ��������
    long totalGoods;
//    ���������ֵ
    long totalVal;
};

struct IncRank
{
//    ����
    int rank;
//    ��˾����
    QString Inc_name;
//    Ƶ�ȼ���
//    ��ʾ��λ�� ��/��
    int count;
//    �ܹ����׽��
    double trans_amnt;
//    ����������
    QString mgrName;
}
#endif // GLOBALDATATYPE_H
