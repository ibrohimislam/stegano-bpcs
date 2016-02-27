/****************************************************************************
** Meta object code from reading C++ file 'cdrv_signal.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cdrv_signal.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cdrv_signal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UISignal1[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal1[] = {
    "UISignal1\0\0call()\0"
};

void UISignal1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal1 *_t = static_cast<UISignal1 *>(_o);
        switch (_id) {
        case 0: _t->call(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UISignal1::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal1::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal1,
      qt_meta_data_UISignal1, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal1::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal1::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal1))
        return static_cast<void*>(const_cast< UISignal1*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal2[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   11,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal2[] = {
    "UISignal2\0\0v1\0call(QAbstractAnimation*)\0"
};

void UISignal2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal2 *_t = static_cast<UISignal2 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QAbstractAnimation*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal2::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal2::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal2,
      qt_meta_data_UISignal2, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal2))
        return static_cast<void*>(const_cast< UISignal2*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal3[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   11,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal3[] = {
    "UISignal3\0\0v1\0call(QAbstractAnimation::Direction)\0"
};

void UISignal3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal3 *_t = static_cast<UISignal3 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QAbstractAnimation::Direction(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal3::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal3::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal3,
      qt_meta_data_UISignal3, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal3::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal3::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal3))
        return static_cast<void*>(const_cast< UISignal3*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal4[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   11,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal4[] = {
    "UISignal4\0\0v1,v2\0"
    "call(QAbstractAnimation::State,QAbstractAnimation::State)\0"
};

void UISignal4::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal4 *_t = static_cast<UISignal4 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QAbstractAnimation::State(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation::State(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal4::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal4::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal4,
      qt_meta_data_UISignal4, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal4::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal4::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal4::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal4))
        return static_cast<void*>(const_cast< UISignal4*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal4::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal5[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   11,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal5[] = {
    "UISignal5\0\0v1\0call(QAbstractButton*)\0"
};

void UISignal5::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal5 *_t = static_cast<UISignal5 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal5::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal5::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal5,
      qt_meta_data_UISignal5, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal5::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal5::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal5::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal5))
        return static_cast<void*>(const_cast< UISignal5*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal5::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal6[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   11,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal6[] = {
    "UISignal6\0\0v1\0call(QAction*)\0"
};

void UISignal6::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal6 *_t = static_cast<UISignal6 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal6::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal6::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal6,
      qt_meta_data_UISignal6, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal6::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal6::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal6::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal6))
        return static_cast<void*>(const_cast< UISignal6*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal6::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal7[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   11,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal7[] = {
    "UISignal7\0\0v1\0call(QBrush)\0"
};

void UISignal7::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal7 *_t = static_cast<UISignal7 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal7::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal7::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal7,
      qt_meta_data_UISignal7, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal7::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal7::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal7::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal7))
        return static_cast<void*>(const_cast< UISignal7*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal7::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal8[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   11,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal8[] = {
    "UISignal8\0\0v1\0call(QClipboard::Mode)\0"
};

void UISignal8::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal8 *_t = static_cast<UISignal8 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QClipboard::Mode(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal8::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal8::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal8,
      qt_meta_data_UISignal8, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal8::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal8::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal8::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal8))
        return static_cast<void*>(const_cast< UISignal8*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal8::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal9[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   11,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal9[] = {
    "UISignal9\0\0v1\0call(QColor)\0"
};

void UISignal9::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal9 *_t = static_cast<UISignal9 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal9::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal9::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal9,
      qt_meta_data_UISignal9, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal9::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal9::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal9::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal9))
        return static_cast<void*>(const_cast< UISignal9*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal9::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal10[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal10[] = {
    "UISignal10\0\0v1\0call(QDate)\0"
};

void UISignal10::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal10 *_t = static_cast<UISignal10 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal10::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal10::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal10,
      qt_meta_data_UISignal10, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal10::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal10::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal10::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal10))
        return static_cast<void*>(const_cast< UISignal10*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal10::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal11[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal11[] = {
    "UISignal11\0\0v1\0call(QDateTime)\0"
};

void UISignal11::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal11 *_t = static_cast<UISignal11 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal11::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal11::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal11,
      qt_meta_data_UISignal11, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal11::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal11::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal11::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal11))
        return static_cast<void*>(const_cast< UISignal11*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal11::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal12[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal12[] = {
    "UISignal12\0\0v1\0"
    "call(QFlags<QDockWidget::DockWidgetFeature>)\0"
};

void UISignal12::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal12 *_t = static_cast<UISignal12 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QFlags<QDockWidget::DockWidgetFeature>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal12::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal12::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal12,
      qt_meta_data_UISignal12, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal12::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal12::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal12::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal12))
        return static_cast<void*>(const_cast< UISignal12*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal12::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal13[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal13[] = {
    "UISignal13\0\0v1\0"
    "call(QFlags<QGraphicsBlurEffect::BlurHint>)\0"
};

void UISignal13::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal13 *_t = static_cast<UISignal13 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QFlags<QGraphicsBlurEffect::BlurHint>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal13::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal13::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal13,
      qt_meta_data_UISignal13, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal13::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal13::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal13::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal13))
        return static_cast<void*>(const_cast< UISignal13*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal13::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal14[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal14[] = {
    "UISignal14\0\0v1\0call(QFlags<Qt::DockWidgetArea>)\0"
};

void UISignal14::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal14 *_t = static_cast<UISignal14 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QFlags<Qt::DockWidgetArea>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal14::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal14::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal14,
      qt_meta_data_UISignal14, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal14::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal14::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal14::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal14))
        return static_cast<void*>(const_cast< UISignal14*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal14::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal15[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal15[] = {
    "UISignal15\0\0v1\0call(QFlags<Qt::ToolBarArea>)\0"
};

void UISignal15::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal15 *_t = static_cast<UISignal15 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QFlags<Qt::ToolBarArea>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal15::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal15::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal15,
      qt_meta_data_UISignal15, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal15::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal15::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal15::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal15))
        return static_cast<void*>(const_cast< UISignal15*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal15::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal16[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal16[] = {
    "UISignal16\0\0v1,v2\0"
    "call(QFlags<Qt::WindowState>,QFlags<Qt::WindowState>)\0"
};

void UISignal16::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal16 *_t = static_cast<UISignal16 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QFlags<Qt::WindowState>(*)>(_a[1])),(*reinterpret_cast< QFlags<Qt::WindowState>(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal16::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal16::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal16,
      qt_meta_data_UISignal16, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal16::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal16::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal16::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal16))
        return static_cast<void*>(const_cast< UISignal16*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal16::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal17[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal17[] = {
    "UISignal17\0\0v1\0call(QFont)\0"
};

void UISignal17::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal17 *_t = static_cast<UISignal17 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal17::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal17::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal17,
      qt_meta_data_UISignal17, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal17::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal17::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal17::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal17))
        return static_cast<void*>(const_cast< UISignal17*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal17::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal18[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal18[] = {
    "UISignal18\0\0v1\0call(QImageReader::ImageReaderError)\0"
};

void UISignal18::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal18 *_t = static_cast<UISignal18 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QImageReader::ImageReaderError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal18::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal18::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal18,
      qt_meta_data_UISignal18, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal18::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal18::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal18::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal18))
        return static_cast<void*>(const_cast< UISignal18*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal18::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal19[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal19[] = {
    "UISignal19\0\0v1,v2\0call(QItemSelection,QItemSelection)\0"
};

void UISignal19::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal19 *_t = static_cast<UISignal19 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal19::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal19::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal19,
      qt_meta_data_UISignal19, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal19::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal19::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal19::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal19))
        return static_cast<void*>(const_cast< UISignal19*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal19::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal20[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal20[] = {
    "UISignal20\0\0v1\0call(QList<QModelIndex>)\0"
};

void UISignal20::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal20 *_t = static_cast<UISignal20 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QList<QModelIndex>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal20::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal20::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal20,
      qt_meta_data_UISignal20, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal20::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal20::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal20::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal20))
        return static_cast<void*>(const_cast< UISignal20*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal20::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal21[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal21[] = {
    "UISignal21\0\0v1\0call(QList<QRectF>)\0"
};

void UISignal21::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal21 *_t = static_cast<UISignal21 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QList<QRectF>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal21::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal21::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal21,
      qt_meta_data_UISignal21, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal21::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal21::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal21::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal21))
        return static_cast<void*>(const_cast< UISignal21*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal21::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal22[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal22[] = {
    "UISignal22\0\0v1\0call(QListWidgetItem*)\0"
};

void UISignal22::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal22 *_t = static_cast<UISignal22 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal22::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal22::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal22,
      qt_meta_data_UISignal22, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal22::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal22::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal22::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal22))
        return static_cast<void*>(const_cast< UISignal22*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal22::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal23[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal23[] = {
    "UISignal23\0\0v1,v2\0"
    "call(QListWidgetItem*,QListWidgetItem*)\0"
};

void UISignal23::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal23 *_t = static_cast<UISignal23 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal23::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal23::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal23,
      qt_meta_data_UISignal23, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal23::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal23::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal23::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal23))
        return static_cast<void*>(const_cast< UISignal23*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal23::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal24[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal24[] = {
    "UISignal24\0\0v1\0call(QMdiSubWindow*)\0"
};

void UISignal24::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal24 *_t = static_cast<UISignal24 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal24::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal24::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal24,
      qt_meta_data_UISignal24, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal24::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal24::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal24::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal24))
        return static_cast<void*>(const_cast< UISignal24*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal24::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal25[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal25[] = {
    "UISignal25\0\0v1\0call(QModelIndex)\0"
};

void UISignal25::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal25 *_t = static_cast<UISignal25 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal25::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal25::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal25,
      qt_meta_data_UISignal25, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal25::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal25::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal25::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal25))
        return static_cast<void*>(const_cast< UISignal25*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal25::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal26[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal26[] = {
    "UISignal26\0\0v1,v2\0call(QModelIndex,QModelIndex)\0"
};

void UISignal26::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal26 *_t = static_cast<UISignal26 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal26::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal26::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal26,
      qt_meta_data_UISignal26, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal26::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal26::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal26::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal26))
        return static_cast<void*>(const_cast< UISignal26*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal26::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal27[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal27[] = {
    "UISignal27\0\0v1\0call(QMovie::MovieState)\0"
};

void UISignal27::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal27 *_t = static_cast<UISignal27 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QMovie::MovieState(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal27::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal27::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal27,
      qt_meta_data_UISignal27, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal27::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal27::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal27::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal27))
        return static_cast<void*>(const_cast< UISignal27*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal27::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal28[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal28[] = {
    "UISignal28\0\0v1\0call(QObject*)\0"
};

void UISignal28::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal28 *_t = static_cast<UISignal28 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal28::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal28::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal28,
      qt_meta_data_UISignal28, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal28::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal28::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal28::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal28))
        return static_cast<void*>(const_cast< UISignal28*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal28::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal29[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal29[] = {
    "UISignal29\0\0v1\0call(QPoint)\0"
};

void UISignal29::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal29 *_t = static_cast<UISignal29 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal29::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal29::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal29,
      qt_meta_data_UISignal29, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal29::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal29::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal29::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal29))
        return static_cast<void*>(const_cast< UISignal29*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal29::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal30[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal30[] = {
    "UISignal30\0\0v1\0call(QPointF)\0"
};

void UISignal30::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal30 *_t = static_cast<UISignal30 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal30::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal30::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal30,
      qt_meta_data_UISignal30, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal30::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal30::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal30::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal30))
        return static_cast<void*>(const_cast< UISignal30*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal30::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal31[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal31[] = {
    "UISignal31\0\0v1\0call(QPrinter*)\0"
};

void UISignal31::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal31 *_t = static_cast<UISignal31 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal31::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal31::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal31,
      qt_meta_data_UISignal31, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal31::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal31::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal31::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal31))
        return static_cast<void*>(const_cast< UISignal31*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal31::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal32[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal32[] = {
    "UISignal32\0\0v1\0call(QProcess::ProcessError)\0"
};

void UISignal32::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal32 *_t = static_cast<UISignal32 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal32::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal32::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal32,
      qt_meta_data_UISignal32, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal32::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal32::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal32::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal32))
        return static_cast<void*>(const_cast< UISignal32*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal32::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal33[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal33[] = {
    "UISignal33\0\0v1\0call(QProcess::ProcessState)\0"
};

void UISignal33::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal33 *_t = static_cast<UISignal33 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal33::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal33::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal33,
      qt_meta_data_UISignal33, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal33::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal33::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal33::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal33))
        return static_cast<void*>(const_cast< UISignal33*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal33::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal34[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal34[] = {
    "UISignal34\0\0v1\0call(QRect)\0"
};

void UISignal34::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal34 *_t = static_cast<UISignal34 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal34::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal34::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal34,
      qt_meta_data_UISignal34, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal34::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal34::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal34::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal34))
        return static_cast<void*>(const_cast< UISignal34*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal34::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal35[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal35[] = {
    "UISignal35\0\0v1,v2\0call(QRect,int)\0"
};

void UISignal35::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal35 *_t = static_cast<UISignal35 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal35::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal35::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal35,
      qt_meta_data_UISignal35, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal35::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal35::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal35::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal35))
        return static_cast<void*>(const_cast< UISignal35*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal35::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal36[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal36[] = {
    "UISignal36\0\0v1\0call(QRectF)\0"
};

void UISignal36::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal36 *_t = static_cast<UISignal36 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal36::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal36::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal36,
      qt_meta_data_UISignal36, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal36::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal36::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal36::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal36))
        return static_cast<void*>(const_cast< UISignal36*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal36::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal37[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal37[] = {
    "UISignal37\0\0v1\0call(QSessionManager&)\0"
};

void UISignal37::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal37 *_t = static_cast<UISignal37 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QSessionManager(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal37::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal37::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal37,
      qt_meta_data_UISignal37, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal37::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal37::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal37::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal37))
        return static_cast<void*>(const_cast< UISignal37*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal37::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal38[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal38[] = {
    "UISignal38\0\0v1\0call(QSize)\0"
};

void UISignal38::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal38 *_t = static_cast<UISignal38 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal38::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal38::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal38,
      qt_meta_data_UISignal38, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal38::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal38::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal38::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal38))
        return static_cast<void*>(const_cast< UISignal38*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal38::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal39[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal39[] = {
    "UISignal39\0\0v1\0call(QSizeF)\0"
};

void UISignal39::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal39 *_t = static_cast<UISignal39 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QSizeF(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal39::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal39::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal39,
      qt_meta_data_UISignal39, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal39::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal39::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal39::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal39))
        return static_cast<void*>(const_cast< UISignal39*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal39::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal40[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal40[] = {
    "UISignal40\0\0v1\0call(QStandardItem*)\0"
};

void UISignal40::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal40 *_t = static_cast<UISignal40 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal40::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal40::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal40,
      qt_meta_data_UISignal40, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal40::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal40::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal40::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal40))
        return static_cast<void*>(const_cast< UISignal40*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal40::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal41[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal41[] = {
    "UISignal41\0\0v1\0call(QString)\0"
};

void UISignal41::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal41 *_t = static_cast<UISignal41 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal41::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal41::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal41,
      qt_meta_data_UISignal41, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal41::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal41::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal41::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal41))
        return static_cast<void*>(const_cast< UISignal41*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal41::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal42[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal42[] = {
    "UISignal42\0\0v1,v2,v3\0call(QString,QString,QString)\0"
};

void UISignal42::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal42 *_t = static_cast<UISignal42 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal42::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal42::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal42,
      qt_meta_data_UISignal42, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal42::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal42::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal42::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal42))
        return static_cast<void*>(const_cast< UISignal42*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal42::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal43[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal43[] = {
    "UISignal43\0\0v1\0call(QStringList)\0"
};

void UISignal43::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal43 *_t = static_cast<UISignal43 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal43::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal43::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal43,
      qt_meta_data_UISignal43, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal43::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal43::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal43::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal43))
        return static_cast<void*>(const_cast< UISignal43*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal43::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal44[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal44[] = {
    "UISignal44\0\0v1\0call(QSystemTrayIcon::ActivationReason)\0"
};

void UISignal44::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal44 *_t = static_cast<UISignal44 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal44::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal44::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal44,
      qt_meta_data_UISignal44, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal44::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal44::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal44::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal44))
        return static_cast<void*>(const_cast< UISignal44*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal44::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal45[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal45[] = {
    "UISignal45\0\0v1\0call(QTableWidgetItem*)\0"
};

void UISignal45::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal45 *_t = static_cast<UISignal45 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal45::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal45::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal45,
      qt_meta_data_UISignal45, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal45::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal45::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal45::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal45))
        return static_cast<void*>(const_cast< UISignal45*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal45::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal46[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal46[] = {
    "UISignal46\0\0v1,v2\0"
    "call(QTableWidgetItem*,QTableWidgetItem*)\0"
};

void UISignal46::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal46 *_t = static_cast<UISignal46 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal46::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal46::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal46,
      qt_meta_data_UISignal46, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal46::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal46::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal46::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal46))
        return static_cast<void*>(const_cast< UISignal46*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal46::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal47[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal47[] = {
    "UISignal47\0\0v1\0call(QTextBlock)\0"
};

void UISignal47::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal47 *_t = static_cast<UISignal47 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QTextBlock(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal47::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal47::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal47,
      qt_meta_data_UISignal47, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal47::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal47::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal47::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal47))
        return static_cast<void*>(const_cast< UISignal47*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal47::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal48[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal48[] = {
    "UISignal48\0\0v1\0call(QTextCharFormat)\0"
};

void UISignal48::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal48 *_t = static_cast<UISignal48 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QTextCharFormat(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal48::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal48::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal48,
      qt_meta_data_UISignal48, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal48::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal48::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal48::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal48))
        return static_cast<void*>(const_cast< UISignal48*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal48::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal49[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal49[] = {
    "UISignal49\0\0v1\0call(QTextCursor)\0"
};

void UISignal49::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal49 *_t = static_cast<UISignal49 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QTextCursor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal49::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal49::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal49,
      qt_meta_data_UISignal49, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal49::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal49::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal49::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal49))
        return static_cast<void*>(const_cast< UISignal49*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal49::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal50[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal50[] = {
    "UISignal50\0\0v1\0call(QTime)\0"
};

void UISignal50::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal50 *_t = static_cast<UISignal50 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal50::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal50::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal50,
      qt_meta_data_UISignal50, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal50::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal50::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal50::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal50))
        return static_cast<void*>(const_cast< UISignal50*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal50::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal51[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal51[] = {
    "UISignal51\0\0v1\0call(QTimeLine::State)\0"
};

void UISignal51::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal51 *_t = static_cast<UISignal51 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QTimeLine::State(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal51::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal51::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal51,
      qt_meta_data_UISignal51, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal51::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal51::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal51::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal51))
        return static_cast<void*>(const_cast< UISignal51*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal51::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal52[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal52[] = {
    "UISignal52\0\0v1\0call(QTreeWidgetItem*)\0"
};

void UISignal52::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal52 *_t = static_cast<UISignal52 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal52::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal52::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal52,
      qt_meta_data_UISignal52, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal52::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal52::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal52::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal52))
        return static_cast<void*>(const_cast< UISignal52*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal52::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal53[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal53[] = {
    "UISignal53\0\0v1,v2\0"
    "call(QTreeWidgetItem*,QTreeWidgetItem*)\0"
};

void UISignal53::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal53 *_t = static_cast<UISignal53 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal53::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal53::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal53,
      qt_meta_data_UISignal53, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal53::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal53::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal53::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal53))
        return static_cast<void*>(const_cast< UISignal53*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal53::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal54[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal54[] = {
    "UISignal54\0\0v1,v2\0call(QTreeWidgetItem*,int)\0"
};

void UISignal54::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal54 *_t = static_cast<UISignal54 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal54::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal54::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal54,
      qt_meta_data_UISignal54, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal54::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal54::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal54::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal54))
        return static_cast<void*>(const_cast< UISignal54*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal54::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal55[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal55[] = {
    "UISignal55\0\0v1\0call(QUndoStack*)\0"
};

void UISignal55::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal55 *_t = static_cast<UISignal55 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QUndoStack*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal55::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal55::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal55,
      qt_meta_data_UISignal55, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal55::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal55::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal55::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal55))
        return static_cast<void*>(const_cast< UISignal55*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal55::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal56[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal56[] = {
    "UISignal56\0\0v1\0call(QUrl)\0"
};

void UISignal56::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal56 *_t = static_cast<UISignal56 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal56::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal56::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal56,
      qt_meta_data_UISignal56, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal56::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal56::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal56::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal56))
        return static_cast<void*>(const_cast< UISignal56*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal56::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal57[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal57[] = {
    "UISignal57\0\0v1\0call(QVariant)\0"
};

void UISignal57::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal57 *_t = static_cast<UISignal57 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal57::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal57::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal57,
      qt_meta_data_UISignal57, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal57::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal57::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal57::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal57))
        return static_cast<void*>(const_cast< UISignal57*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal57::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal58[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal58[] = {
    "UISignal58\0\0v1\0call(QWidget*)\0"
};

void UISignal58::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal58 *_t = static_cast<UISignal58 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal58::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal58::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal58,
      qt_meta_data_UISignal58, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal58::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal58::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal58::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal58))
        return static_cast<void*>(const_cast< UISignal58*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal58::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal59[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal59[] = {
    "UISignal59\0\0v1,v2\0"
    "call(QWidget*,QAbstractItemDelegate::EndEditHint)\0"
};

void UISignal59::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal59 *_t = static_cast<UISignal59 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate::EndEditHint(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal59::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal59::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal59,
      qt_meta_data_UISignal59, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal59::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal59::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal59::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal59))
        return static_cast<void*>(const_cast< UISignal59*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal59::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal60[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal60[] = {
    "UISignal60\0\0v1,v2\0call(QWidget*,QWidget*)\0"
};

void UISignal60::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal60 *_t = static_cast<UISignal60 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal60::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal60::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal60,
      qt_meta_data_UISignal60, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal60::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal60::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal60::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal60))
        return static_cast<void*>(const_cast< UISignal60*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal60::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal61[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal61[] = {
    "UISignal61\0\0v1\0call(Qt::DockWidgetArea)\0"
};

void UISignal61::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal61 *_t = static_cast<UISignal61 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal61::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal61::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal61,
      qt_meta_data_UISignal61, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal61::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal61::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal61::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal61))
        return static_cast<void*>(const_cast< UISignal61*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal61::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal62[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal62[] = {
    "UISignal62\0\0v1\0call(Qt::DropAction)\0"
};

void UISignal62::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal62 *_t = static_cast<UISignal62 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< Qt::DropAction(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal62::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal62::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal62,
      qt_meta_data_UISignal62, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal62::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal62::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal62::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal62))
        return static_cast<void*>(const_cast< UISignal62*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal62::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal63[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal63[] = {
    "UISignal63\0\0v1\0call(Qt::Orientation)\0"
};

void UISignal63::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal63 *_t = static_cast<UISignal63 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal63::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal63::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal63,
      qt_meta_data_UISignal63, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal63::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal63::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal63::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal63))
        return static_cast<void*>(const_cast< UISignal63*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal63::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal64[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal64[] = {
    "UISignal64\0\0v1,v2,v3\0call(Qt::Orientation,int,int)\0"
};

void UISignal64::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal64 *_t = static_cast<UISignal64 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal64::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal64::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal64,
      qt_meta_data_UISignal64, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal64::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal64::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal64::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal64))
        return static_cast<void*>(const_cast< UISignal64*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal64::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal65[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal65[] = {
    "UISignal65\0\0v1\0call(Qt::ToolButtonStyle)\0"
};

void UISignal65::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal65 *_t = static_cast<UISignal65 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< Qt::ToolButtonStyle(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal65::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal65::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal65,
      qt_meta_data_UISignal65, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal65::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal65::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal65::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal65))
        return static_cast<void*>(const_cast< UISignal65*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal65::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal66[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal66[] = {
    "UISignal66\0\0v1\0call(bool)\0"
};

void UISignal66::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal66 *_t = static_cast<UISignal66 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal66::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal66::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal66,
      qt_meta_data_UISignal66, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal66::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal66::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal66::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal66))
        return static_cast<void*>(const_cast< UISignal66*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal66::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal67[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal67[] = {
    "UISignal67\0\0v1\0call(double)\0"
};

void UISignal67::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal67 *_t = static_cast<UISignal67 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal67::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal67::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal67,
      qt_meta_data_UISignal67, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal67::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal67::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal67::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal67))
        return static_cast<void*>(const_cast< UISignal67*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal67::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal68[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal68[] = {
    "UISignal68\0\0v1\0call(int)\0"
};

void UISignal68::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal68 *_t = static_cast<UISignal68 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal68::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal68::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal68,
      qt_meta_data_UISignal68, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal68::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal68::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal68::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal68))
        return static_cast<void*>(const_cast< UISignal68*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal68::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal69[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal69[] = {
    "UISignal69\0\0v1,v2\0call(int,QHeaderView::ResizeMode)\0"
};

void UISignal69::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal69 *_t = static_cast<UISignal69 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QHeaderView::ResizeMode(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal69::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal69::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal69,
      qt_meta_data_UISignal69, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal69::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal69::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal69::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal69))
        return static_cast<void*>(const_cast< UISignal69*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal69::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal70[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal70[] = {
    "UISignal70\0\0v1,v2\0call(int,QProcess::ExitStatus)\0"
};

void UISignal70::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal70 *_t = static_cast<UISignal70 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal70::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal70::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal70,
      qt_meta_data_UISignal70, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal70::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal70::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal70::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal70))
        return static_cast<void*>(const_cast< UISignal70*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal70::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal71[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal71[] = {
    "UISignal71\0\0v1,v2\0call(int,Qt::SortOrder)\0"
};

void UISignal71::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal71 *_t = static_cast<UISignal71 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal71::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal71::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal71,
      qt_meta_data_UISignal71, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal71::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal71::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal71::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal71))
        return static_cast<void*>(const_cast< UISignal71*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal71::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal72[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal72[] = {
    "UISignal72\0\0v1,v2\0call(int,int)\0"
};

void UISignal72::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal72 *_t = static_cast<UISignal72 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal72::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal72::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal72,
      qt_meta_data_UISignal72, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal72::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal72::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal72::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal72))
        return static_cast<void*>(const_cast< UISignal72*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal72::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal73[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal73[] = {
    "UISignal73\0\0v1,v2,v3\0call(int,int,int)\0"
};

void UISignal73::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal73 *_t = static_cast<UISignal73 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal73::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal73::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal73,
      qt_meta_data_UISignal73, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal73::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal73::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal73::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal73))
        return static_cast<void*>(const_cast< UISignal73*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal73::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal74[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal74[] = {
    "UISignal74\0\0v1,v2,v3,v4\0call(int,int,int,int)\0"
};

void UISignal74::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal74 *_t = static_cast<UISignal74 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal74::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal74::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal74,
      qt_meta_data_UISignal74, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal74::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal74::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal74::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal74))
        return static_cast<void*>(const_cast< UISignal74*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal74::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UISignal75[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UISignal75[] = {
    "UISignal75\0\0v1\0call(qint64)\0"
};

void UISignal75::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UISignal75 *_t = static_cast<UISignal75 *>(_o);
        switch (_id) {
        case 0: _t->call((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UISignal75::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UISignal75::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UISignal75,
      qt_meta_data_UISignal75, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UISignal75::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UISignal75::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UISignal75::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UISignal75))
        return static_cast<void*>(const_cast< UISignal75*>(this));
    return QObject::qt_metacast(_clname);
}

int UISignal75::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
