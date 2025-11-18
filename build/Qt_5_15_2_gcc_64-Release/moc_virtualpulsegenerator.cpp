/****************************************************************************
** Meta object code from reading C++ file 'virtualpulsegenerator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../virtualpulsegenerator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'virtualpulsegenerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VirtualPulseGenerator_t {
    QByteArrayData data[13];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VirtualPulseGenerator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VirtualPulseGenerator_t qt_meta_stringdata_VirtualPulseGenerator = {
    {
QT_MOC_LITERAL(0, 0, 21), // "VirtualPulseGenerator"
QT_MOC_LITERAL(1, 22, 14), // "testConnection"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 10), // "initialize"
QT_MOC_LITERAL(4, 49, 4), // "read"
QT_MOC_LITERAL(5, 54, 5), // "index"
QT_MOC_LITERAL(6, 60, 19), // "QtFTM::PulseSetting"
QT_MOC_LITERAL(7, 80, 1), // "s"
QT_MOC_LITERAL(8, 82, 11), // "readRepRate"
QT_MOC_LITERAL(9, 94, 3), // "set"
QT_MOC_LITERAL(10, 98, 3), // "val"
QT_MOC_LITERAL(11, 102, 10), // "setRepRate"
QT_MOC_LITERAL(12, 113, 1) // "d"

    },
    "VirtualPulseGenerator\0testConnection\0"
    "\0initialize\0read\0index\0QtFTM::PulseSetting\0"
    "s\0readRepRate\0set\0val\0setRepRate\0d"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VirtualPulseGenerator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    2,   46,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,
       9,    3,   52,    2, 0x0a /* Public */,
      11,    1,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::QVariant, QMetaType::Int, 0x80000000 | 6,    5,    7,
    QMetaType::Double,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 6, QMetaType::QVariant,    5,    7,   10,
    QMetaType::Bool, QMetaType::Double,   12,

       0        // eod
};

void VirtualPulseGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VirtualPulseGenerator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->testConnection();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->initialize(); break;
        case 2: { QVariant _r = _t->read((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QtFTM::PulseSetting(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 3: { double _r = _t->readRepRate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->set((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QtFTM::PulseSetting(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->setRepRate((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VirtualPulseGenerator::staticMetaObject = { {
    QMetaObject::SuperData::link<PulseGenerator::staticMetaObject>(),
    qt_meta_stringdata_VirtualPulseGenerator.data,
    qt_meta_data_VirtualPulseGenerator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VirtualPulseGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VirtualPulseGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VirtualPulseGenerator.stringdata0))
        return static_cast<void*>(this);
    return PulseGenerator::qt_metacast(_clname);
}

int VirtualPulseGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PulseGenerator::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
