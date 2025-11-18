/****************************************************************************
** Meta object code from reading C++ file 'virtualattenuator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../virtualattenuator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'virtualattenuator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VirtualAttenuator_t {
    QByteArrayData data[7];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VirtualAttenuator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VirtualAttenuator_t qt_meta_stringdata_VirtualAttenuator = {
    {
QT_MOC_LITERAL(0, 0, 17), // "VirtualAttenuator"
QT_MOC_LITERAL(1, 18, 10), // "initialize"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "testConnection"
QT_MOC_LITERAL(4, 45, 7), // "setAttn"
QT_MOC_LITERAL(5, 53, 1), // "a"
QT_MOC_LITERAL(6, 55, 8) // "readAttn"

    },
    "VirtualAttenuator\0initialize\0\0"
    "testConnection\0setAttn\0a\0readAttn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VirtualAttenuator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    1,   36,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Int, QMetaType::Int,    5,
    QMetaType::Int,

       0        // eod
};

void VirtualAttenuator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VirtualAttenuator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initialize(); break;
        case 1: { bool _r = _t->testConnection();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->setAttn((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->readAttn();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VirtualAttenuator::staticMetaObject = { {
    QMetaObject::SuperData::link<Attenuator::staticMetaObject>(),
    qt_meta_stringdata_VirtualAttenuator.data,
    qt_meta_data_VirtualAttenuator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VirtualAttenuator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VirtualAttenuator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VirtualAttenuator.stringdata0))
        return static_cast<void*>(this);
    return Attenuator::qt_metacast(_clname);
}

int VirtualAttenuator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Attenuator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
