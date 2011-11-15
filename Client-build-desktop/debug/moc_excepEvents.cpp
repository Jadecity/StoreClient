/****************************************************************************
** Meta object code from reading C++ file 'excepEvents.h'
**
** Created: Fri Nov 4 15:39:09 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/excepEvents.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'excepEvents.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WorkFlowExcep__UExcepMgr[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      41,   26,   25,   25, 0x0a,
      74,   66,   25,   25, 0x2a,
      98,   94,   25,   25, 0x0a,
     117,  112,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WorkFlowExcep__UExcepMgr[] = {
    "WorkFlowExcep::UExcepMgr\0\0content,itemNo\0"
    "rec_excep(QString*,uint)\0content\0"
    "rec_excep(QString*)\0msg\0disp(QString)\0"
    "data\0recv(QByteArray)\0"
};

const QMetaObject WorkFlowExcep::UExcepMgr::staticMetaObject = {
    { &UpCntrBase::staticMetaObject, qt_meta_stringdata_WorkFlowExcep__UExcepMgr,
      qt_meta_data_WorkFlowExcep__UExcepMgr, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WorkFlowExcep::UExcepMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WorkFlowExcep::UExcepMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WorkFlowExcep::UExcepMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WorkFlowExcep__UExcepMgr))
        return static_cast<void*>(const_cast< UExcepMgr*>(this));
    return UpCntrBase::qt_metacast(_clname);
}

int WorkFlowExcep::UExcepMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UpCntrBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: rec_excep((*reinterpret_cast< QString*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: rec_excep((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 2: disp((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: recv((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
