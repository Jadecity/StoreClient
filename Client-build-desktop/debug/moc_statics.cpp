/****************************************************************************
** Meta object code from reading C++ file 'statics.h'
**
** Created: Sat Nov 12 16:23:16 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/statics.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statics.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Statics__StaticCntr[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   21,   20,   20, 0x0a,
      43,   20,   20,   20, 0x0a,
      65,   20,   20,   20, 0x0a,
      94,   20,   20,   20, 0x0a,
     114,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Statics__StaticCntr[] = {
    "Statics::StaticCntr\0\0data\0recv(QByteArray)\0"
    "thisMonthThroughout()\0"
    "predictNextMonthThroughout()\0"
    "companyBusyDegree()\0goodWastage()\0"
};

const QMetaObject Statics::StaticCntr::staticMetaObject = {
    { &UpCntrBase::staticMetaObject, qt_meta_stringdata_Statics__StaticCntr,
      qt_meta_data_Statics__StaticCntr, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Statics::StaticCntr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Statics::StaticCntr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Statics::StaticCntr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Statics__StaticCntr))
        return static_cast<void*>(const_cast< StaticCntr*>(this));
    return UpCntrBase::qt_metacast(_clname);
}

int Statics::StaticCntr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UpCntrBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: recv((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: thisMonthThroughout(); break;
        case 2: predictNextMonthThroughout(); break;
        case 3: companyBusyDegree(); break;
        case 4: goodWastage(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
