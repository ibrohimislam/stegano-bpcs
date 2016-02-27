/****************************************************************************
** Meta object code from reading C++ file 'uidrv.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "uidrv.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uidrv.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIDrv[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      66,    7,    6,    6, 0x05,
     167,    6,    6,    6, 0x05,
     179,    6,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
     190,    7,    6,    6, 0x0a,
     290,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UIDrv[] = {
    "UIDrv\0\0"
    "_p,_typeid,funcid,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,r\0"
    "asyncDrv(void*,int,int,void*,void*,void*,void*,void*,void*,void*,void*"
    ",void*,void*,void*,void*,int*)\0"
    "asyncTask()\0syncTask()\0"
    "slotDrv(void*,int,int,void*,void*,void*,void*,void*,void*,void*,void*,"
    "void*,void*,void*,void*,int*)\0"
    "slotAsyncTask()\0"
};

void UIDrv::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UIDrv *_t = static_cast<UIDrv *>(_o);
        switch (_id) {
        case 0: _t->asyncDrv((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4])),(*reinterpret_cast< void*(*)>(_a[5])),(*reinterpret_cast< void*(*)>(_a[6])),(*reinterpret_cast< void*(*)>(_a[7])),(*reinterpret_cast< void*(*)>(_a[8])),(*reinterpret_cast< void*(*)>(_a[9])),(*reinterpret_cast< void*(*)>(_a[10])),(*reinterpret_cast< void*(*)>(_a[11])),(*reinterpret_cast< void*(*)>(_a[12])),(*reinterpret_cast< void*(*)>(_a[13])),(*reinterpret_cast< void*(*)>(_a[14])),(*reinterpret_cast< void*(*)>(_a[15])),(*reinterpret_cast< int*(*)>(_a[16]))); break;
        case 1: _t->asyncTask(); break;
        case 2: _t->syncTask(); break;
        case 3: _t->slotDrv((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4])),(*reinterpret_cast< void*(*)>(_a[5])),(*reinterpret_cast< void*(*)>(_a[6])),(*reinterpret_cast< void*(*)>(_a[7])),(*reinterpret_cast< void*(*)>(_a[8])),(*reinterpret_cast< void*(*)>(_a[9])),(*reinterpret_cast< void*(*)>(_a[10])),(*reinterpret_cast< void*(*)>(_a[11])),(*reinterpret_cast< void*(*)>(_a[12])),(*reinterpret_cast< void*(*)>(_a[13])),(*reinterpret_cast< void*(*)>(_a[14])),(*reinterpret_cast< void*(*)>(_a[15])),(*reinterpret_cast< int*(*)>(_a[16]))); break;
        case 4: _t->slotAsyncTask(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UIDrv::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UIDrv::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UIDrv,
      qt_meta_data_UIDrv, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIDrv::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIDrv::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIDrv::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIDrv))
        return static_cast<void*>(const_cast< UIDrv*>(this));
    return QObject::qt_metacast(_clname);
}

int UIDrv::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void UIDrv::asyncDrv(void * _t1, int _t2, int _t3, void * _t4, void * _t5, void * _t6, void * _t7, void * _t8, void * _t9, void * _t10, void * _t11, void * _t12, void * _t13, void * _t14, void * _t15, int * _t16)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)), const_cast<void*>(reinterpret_cast<const void*>(&_t14)), const_cast<void*>(reinterpret_cast<const void*>(&_t15)), const_cast<void*>(reinterpret_cast<const void*>(&_t16)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UIDrv::asyncTask()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UIDrv::syncTask()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
