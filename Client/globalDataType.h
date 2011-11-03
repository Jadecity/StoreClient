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
#endif // GLOBALDATATYPE_H
