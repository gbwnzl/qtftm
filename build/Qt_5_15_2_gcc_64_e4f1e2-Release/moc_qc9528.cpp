/****************************************************************************
** Meta object code from reading C++ file 'qc9528.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qc9528.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qc9528.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qc9528_t {
    QByteArrayData data[15];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qc9528_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qc9528_t qt_meta_stringdata_Qc9528 = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Qc9528"
QT_MOC_LITERAL(1, 7, 14), // "testConnection"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "initialize"
QT_MOC_LITERAL(4, 34, 5), // "sleep"
QT_MOC_LITERAL(5, 40, 1), // "b"
QT_MOC_LITERAL(6, 42, 4), // "read"
QT_MOC_LITERAL(7, 47, 5), // "index"
QT_MOC_LITERAL(8, 53, 19), // "QtFTM::PulseSetting"
QT_MOC_LITERAL(9, 73, 1), // "s"
QT_MOC_LITERAL(10, 75, 11), // "readRepRate"
QT_MOC_LITERAL(11, 87, 3), // "set"
QT_MOC_LITERAL(12, 91, 3), // "val"
QT_MOC_LITERAL(13, 95, 10), // "setRepRate"
QT_MOC_LITERAL(14, 106, 1) // "d"

    },
    "Qc9528\0testConnection\0\0initialize\0"
    "sleep\0b\0read\0index\0QtFTM::PulseSetting\0"
    "s\0readRepRate\0set\0val\0setRepRate\0d"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qc9528[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    1,   51,    2, 0x0a /* Public */,
       6,    2,   54,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x0a /* Public */,
      11,    3,   60,    2, 0x0a /* Public */,
      13,    1,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::QVariant, QMetaType::Int, 0x80000000 | 8,    7,    9,
    QMetaType::Double,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 8, QMetaType::QVariant,    7,    9,   12,
    QMetaType::Bool, QMetaType::Double,   14,

       0        // eod
};

void Qc9528::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Qc9528 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->testConnection();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->initialize(); break;
        case 2: _t->sleep((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: { QVariant _r = _t->read((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QtFTM::PulseSetting(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 4: { double _r = _t->readRepRate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->set((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QtFTM::PulseSetting(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->setRepRate((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Qc9528::staticMetaObject = { {
    QMetaObject::SuperData::link<PulseGenerator::staticMetaObject>(),
    qt_meta_stringdata_Qc9528.data,
    qt_meta_data_Qc9528,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Qc9528::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qc9528::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qc9528.stringdata0))
        return static_cast<void*>(this);
    return PulseGenerator::qt_metacast(_clname);
}

int Qc9528::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PulseGenerator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
