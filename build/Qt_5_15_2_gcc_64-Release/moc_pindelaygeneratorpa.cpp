/****************************************************************************
** Meta object code from reading C++ file 'pindelaygeneratorpa.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../pindelaygeneratorpa.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pindelaygeneratorpa.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PinDelayGeneratorPA_t {
    QByteArrayData data[8];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PinDelayGeneratorPA_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PinDelayGeneratorPA_t qt_meta_stringdata_PinDelayGeneratorPA = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PinDelayGeneratorPA"
QT_MOC_LITERAL(1, 20, 14), // "testConnection"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "initialize"
QT_MOC_LITERAL(4, 47, 18), // "setProtectionDelay"
QT_MOC_LITERAL(5, 66, 7), // "delayus"
QT_MOC_LITERAL(6, 74, 13), // "setScopeDelay"
QT_MOC_LITERAL(7, 88, 7) // "readAll"

    },
    "PinDelayGeneratorPA\0testConnection\0\0"
    "initialize\0setProtectionDelay\0delayus\0"
    "setScopeDelay\0readAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PinDelayGeneratorPA[] = {

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
       7,    0,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int,    5,
    QMetaType::Int, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

void PinDelayGeneratorPA::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PinDelayGeneratorPA *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject PinDelayGeneratorPA::staticMetaObject = { {
    QMetaObject::SuperData::link<PinSwitchDriveDelayGenerator::staticMetaObject>(),
    qt_meta_stringdata_PinDelayGeneratorPA.data,
    qt_meta_data_PinDelayGeneratorPA,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PinDelayGeneratorPA::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PinDelayGeneratorPA::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PinDelayGeneratorPA.stringdata0))
        return static_cast<void*>(this);
    return PinSwitchDriveDelayGenerator::qt_metacast(_clname);
}

int PinDelayGeneratorPA::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
