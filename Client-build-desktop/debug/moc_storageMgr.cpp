/****************************************************************************
** Meta object code from reading C++ file 'storageMgr.h'
**
** Created: Sat Nov 12 16:31:06 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/storageMgr.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'storageMgr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StorageMgr__PosiMgr[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   21,   20,   20, 0x0a,
      48,   43,   20,   20, 0x0a,
      73,   68,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_StorageMgr__PosiMgr[] = {
    "StorageMgr::PosiMgr\0\0posi\0lookUpGood(int*)\0"
    "name\0lookUpGood(QString)\0data\0"
    "recv(QByteArray)\0"
};

const QMetaObject StorageMgr::PosiMgr::staticMetaObject = {
    { &UpCntrBase::staticMetaObject, qt_meta_stringdata_StorageMgr__PosiMgr,
      qt_meta_data_StorageMgr__PosiMgr, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StorageMgr::PosiMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StorageMgr::PosiMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StorageMgr::PosiMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StorageMgr__PosiMgr))
        return static_cast<void*>(const_cast< PosiMgr*>(this));
    return UpCntrBase::qt_metacast(_clname);
}

int StorageMgr::PosiMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UpCntrBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: lookUpGood((*reinterpret_cast< int*(*)>(_a[1]))); break;
        case 1: lookUpGood((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: recv((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_StorageMgr__DiaryMgr[] = {

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
      35,   22,   21,   21, 0x0a,
      62,   56,   21,   21, 0x2a,
      79,   21,   21,   21, 0x0a,
      97,   92,   21,   21, 0x0a,
     124,  119,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_StorageMgr__DiaryMgr[] = {
    "StorageMgr::DiaryMgr\0\0diary,itemNo\0"
    "upload(QString*,int)\0diary\0upload(QString*)\0"
    "checkDiary()\0date\0fetchContent(QString)\0"
    "data\0recv(QByteArray)\0"
};

const QMetaObject StorageMgr::DiaryMgr::staticMetaObject = {
    { &UpCntrBase::staticMetaObject, qt_meta_stringdata_StorageMgr__DiaryMgr,
      qt_meta_data_StorageMgr__DiaryMgr, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StorageMgr::DiaryMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StorageMgr::DiaryMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StorageMgr::DiaryMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StorageMgr__DiaryMgr))
        return static_cast<void*>(const_cast< DiaryMgr*>(this));
    return UpCntrBase::qt_metacast(_clname);
}

int StorageMgr::DiaryMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UpCntrBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: upload((*reinterpret_cast< QString*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: upload((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 2: checkDiary(); break;
        case 3: fetchContent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: recv((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
