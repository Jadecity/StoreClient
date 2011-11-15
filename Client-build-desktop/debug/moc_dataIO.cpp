/****************************************************************************
** Meta object code from reading C++ file 'dataIO.h'
**
** Created: Tue Nov 1 18:01:12 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/dataIO.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataIO.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DataIO__DataTrans[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   18,   18,   18, 0x0a,
      42,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DataIO__DataTrans[] = {
    "DataIO::DataTrans\0\0dataReady()\0"
    "readData()\0handIn()\0"
};

const QMetaObject DataIO::DataTrans::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataIO__DataTrans,
      qt_meta_data_DataIO__DataTrans, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataIO::DataTrans::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataIO::DataTrans::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataIO::DataTrans::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataIO__DataTrans))
        return static_cast<void*>(const_cast< DataTrans*>(this));
    if (!strcmp(_clname, "IOBase"))
        return static_cast< IOBase*>(const_cast< DataTrans*>(this));
    return QObject::qt_metacast(_clname);
}

int DataIO::DataTrans::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: dataReady(); break;
        case 1: readData(); break;
        case 2: handIn(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DataIO::DataTrans::dataReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
