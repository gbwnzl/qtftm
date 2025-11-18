/****************************************************************************
** Meta object code from reading C++ file 'oscilloscope.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../oscilloscope.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oscilloscope.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Oscilloscope_t {
    QByteArrayData data[10];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Oscilloscope_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Oscilloscope_t qt_meta_stringdata_Oscilloscope = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Oscilloscope"
QT_MOC_LITERAL(1, 13, 11), // "fidAcquired"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 1), // "d"
QT_MOC_LITERAL(4, 28, 13), // "statusMessage"
QT_MOC_LITERAL(5, 42, 1), // "s"
QT_MOC_LITERAL(6, 44, 13), // "setResolution"
QT_MOC_LITERAL(7, 58, 14), // "sendCurveQuery"
QT_MOC_LITERAL(8, 73, 9), // "setActive"
QT_MOC_LITERAL(9, 83, 6) // "active"

    },
    "Oscilloscope\0fidAcquired\0\0d\0statusMessage\0"
    "s\0setResolution\0sendCurveQuery\0setActive\0"
    "active"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Oscilloscope[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   50,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x0a /* Public */,
       8,    1,   52,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,

       0        // eod
};

void Oscilloscope::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Oscilloscope *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fidAcquired((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->statusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setResolution(); break;
        case 3: _t->sendCurveQuery(); break;
        case 4: _t->setActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setActive(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Oscilloscope::*)(const QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Oscilloscope::fidAcquired)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Oscilloscope::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Oscilloscope::statusMessage)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Oscilloscope::staticMetaObject = { {
    QMetaObject::SuperData::link<HardwareObject::staticMetaObject>(),
    qt_meta_stringdata_Oscilloscope.data,
    qt_meta_data_Oscilloscope,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Oscilloscope::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Oscilloscope::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Oscilloscope.stringdata0))
        return static_cast<void*>(this);
    return HardwareObject::qt_metacast(_clname);
}

int Oscilloscope::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HardwareObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Oscilloscope::fidAcquired(const QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Oscilloscope::statusMessage(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
