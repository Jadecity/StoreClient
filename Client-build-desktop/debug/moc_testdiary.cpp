/****************************************************************************
** Meta object code from reading C++ file 'testdiary.h'
**
** Created: Sat Nov 12 16:31:09 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/testdiary.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testdiary.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_testDiary[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   11,   10,   10, 0x05,
      36,   10,   10,   10, 0x05,
      51,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      75,   10,   10,   10, 0x0a,
      86,   10,   10,   10, 0x0a,
      99,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_testDiary[] = {
    "testDiary\0\0,\0goUpload(QString*,int)\0"
    "goCheckDiary()\0goFetchContent(QString)\0"
    "tstDiary()\0tstDiaries()\0tstContent()\0"
};

const QMetaObject testDiary::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_testDiary,
      qt_meta_data_testDiary, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &testDiary::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *testDiary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *testDiary::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_testDiary))
        return static_cast<void*>(const_cast< testDiary*>(this));
    return QObject::qt_metacast(_clname);
}

int testDiary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: goUpload((*reinterpret_cast< QString*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: goCheckDiary(); break;
        case 2: goFetchContent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: tstDiary(); break;
        case 4: tstDiaries(); break;
        case 5: tstContent(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void testDiary::goUpload(QString * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void testDiary::goCheckDiary()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void testDiary::goFetchContent(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
