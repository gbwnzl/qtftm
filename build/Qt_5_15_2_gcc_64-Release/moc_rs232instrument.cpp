/****************************************************************************
** Meta object code from reading C++ file 'rs232instrument.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rs232instrument.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rs232instrument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Rs232Instrument_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Rs232Instrument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Rs232Instrument_t qt_meta_stringdata_Rs232Instrument = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Rs232Instrument"
QT_MOC_LITERAL(1, 16, 10), // "initialize"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14) // "testConnection"

    },
    "Rs232Instrument\0initialize\0\0testConnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Rs232Instrument[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void Rs232Instrument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Rs232Instrument *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initialize(); break;
        case 1: { bool _r = _t->testConnection();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Rs232Instrument::staticMetaObject = { {
    QMetaObject::SuperData::link<CommunicationProtocol::staticMetaObject>(),
    qt_meta_stringdata_Rs232Instrument.data,
    qt_meta_data_Rs232Instrument,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Rs232Instrument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Rs232Instrument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Rs232Instrument.stringdata0))
        return static_cast<void*>(this);
    return CommunicationProtocol::qt_metacast(_clname);
}

int Rs232Instrument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CommunicationProtocol::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
