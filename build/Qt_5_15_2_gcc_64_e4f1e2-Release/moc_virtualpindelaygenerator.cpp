/****************************************************************************
** Meta object code from reading C++ file 'virtualpindelaygenerator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../virtualpindelaygenerator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'virtualpindelaygenerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VirtualPinDelayGenerator_t {
    QByteArrayData data[9];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VirtualPinDelayGenerator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VirtualPinDelayGenerator_t qt_meta_stringdata_VirtualPinDelayGenerator = {
    {
QT_MOC_LITERAL(0, 0, 24), // "VirtualPinDelayGenerator"
QT_MOC_LITERAL(1, 25, 14), // "testConnection"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 10), // "initialize"
QT_MOC_LITERAL(4, 52, 18), // "setProtectionDelay"
QT_MOC_LITERAL(5, 71, 19), // "delayInMicroseconds"
QT_MOC_LITERAL(6, 91, 13), // "setScopeDelay"
QT_MOC_LITERAL(7, 105, 19), // "delayInMicroscconds"
QT_MOC_LITERAL(8, 125, 7) // "readAll"

    },
    "VirtualPinDelayGenerator\0testConnection\0"
    "\0initialize\0setProtectionDelay\0"
    "delayInMicroseconds\0setScopeDelay\0"
    "delayInMicroscconds\0readAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VirtualPinDelayGenerator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    1,   41,    2, 0x0a /* Public */,
       6,    1,   44,    2, 0x0a /* Public */,
       8,    0,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int,    5,
    QMetaType::Int, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void VirtualPinDelayGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VirtualPinDelayGenerator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->testConnection();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->initialize(); break;
        case 2: { int _r = _t->setProtectionDelay((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->setScopeDelay((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->readAll(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VirtualPinDelayGenerator::staticMetaObject = { {
    QMetaObject::SuperData::link<PinSwitchDriveDelayGenerator::staticMetaObject>(),
    qt_meta_stringdata_VirtualPinDelayGenerator.data,
    qt_meta_data_VirtualPinDelayGenerator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VirtualPinDelayGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VirtualPinDelayGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VirtualPinDelayGenerator.stringdata0))
        return static_cast<void*>(this);
    return PinSwitchDriveDelayGenerator::qt_metacast(_clname);
}

int VirtualPinDelayGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PinSwitchDriveDelayGenerator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
