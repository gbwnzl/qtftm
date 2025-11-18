/****************************************************************************
** Meta object code from reading C++ file 'dsox3102t.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../dsox3102t.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dsox3102t.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DSOX3102T_t {
    QByteArrayData data[11];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DSOX3102T_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DSOX3102T_t qt_meta_stringdata_DSOX3102T = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DSOX3102T"
QT_MOC_LITERAL(1, 10, 10), // "initialize"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14), // "testConnection"
QT_MOC_LITERAL(4, 37, 9), // "configure"
QT_MOC_LITERAL(5, 47, 13), // "setResolution"
QT_MOC_LITERAL(6, 61, 13), // "replyReceived"
QT_MOC_LITERAL(7, 75, 14), // "sendCurveQuery"
QT_MOC_LITERAL(8, 90, 10), // "wakeTheFUp"
QT_MOC_LITERAL(9, 101, 18), // "startStreamingMode"
QT_MOC_LITERAL(10, 120, 22) // "acquireAndReadPreamble"

    },
    "DSOX3102T\0initialize\0\0testConnection\0"
    "configure\0setResolution\0replyReceived\0"
    "sendCurveQuery\0wakeTheFUp\0startStreamingMode\0"
    "acquireAndReadPreamble"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DSOX3102T[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void DSOX3102T::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DSOX3102T *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initialize(); break;
        case 1: { bool _r = _t->testConnection();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->configure(); break;
        case 3: _t->setResolution(); break;
        case 4: _t->replyReceived(); break;
        case 5: _t->sendCurveQuery(); break;
        case 6: _t->wakeTheFUp(); break;
        case 7: _t->startStreamingMode(); break;
        case 8: { bool _r = _t->acquireAndReadPreamble();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DSOX3102T::staticMetaObject = { {
    QMetaObject::SuperData::link<Oscilloscope::staticMetaObject>(),
    qt_meta_stringdata_DSOX3102T.data,
    qt_meta_data_DSOX3102T,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DSOX3102T::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DSOX3102T::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DSOX3102T.stringdata0))
        return static_cast<void*>(this);
    return Oscilloscope::qt_metacast(_clname);
}

int DSOX3102T::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Oscilloscope::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
