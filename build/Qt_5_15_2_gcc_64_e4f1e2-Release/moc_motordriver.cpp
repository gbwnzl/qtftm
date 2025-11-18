/****************************************************************************
** Meta object code from reading C++ file 'motordriver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../motordriver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'motordriver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MotorDriver_t {
    QByteArrayData data[25];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MotorDriver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MotorDriver_t qt_meta_stringdata_MotorDriver = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MotorDriver"
QT_MOC_LITERAL(1, 12, 9), // "posUpdate"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 6), // "deltaF"
QT_MOC_LITERAL(4, 30, 14), // "tuningComplete"
QT_MOC_LITERAL(5, 45, 9), // "canTuneUp"
QT_MOC_LITERAL(6, 55, 11), // "canTuneDown"
QT_MOC_LITERAL(7, 67, 11), // "modeChanged"
QT_MOC_LITERAL(8, 79, 14), // "voltageChanged"
QT_MOC_LITERAL(9, 94, 10), // "initialize"
QT_MOC_LITERAL(10, 105, 12), // "calcNextMode"
QT_MOC_LITERAL(11, 118, 4), // "freq"
QT_MOC_LITERAL(12, 123, 5), // "above"
QT_MOC_LITERAL(13, 129, 17), // "cavityFreqChanged"
QT_MOC_LITERAL(14, 147, 4), // "tune"
QT_MOC_LITERAL(15, 152, 11), // "currentAttn"
QT_MOC_LITERAL(16, 164, 4), // "mode"
QT_MOC_LITERAL(17, 169, 9), // "calibrate"
QT_MOC_LITERAL(18, 179, 15), // "lastTuneVoltage"
QT_MOC_LITERAL(19, 195, 19), // "lastTuneAttenuation"
QT_MOC_LITERAL(20, 215, 14), // "lastCalVoltage"
QT_MOC_LITERAL(21, 230, 6), // "shutUp"
QT_MOC_LITERAL(22, 237, 5), // "quiet"
QT_MOC_LITERAL(23, 243, 20), // "measureVoltageNoTune"
QT_MOC_LITERAL(24, 264, 18) // "readCavitySettings"

    },
    "MotorDriver\0posUpdate\0\0deltaF\0"
    "tuningComplete\0canTuneUp\0canTuneDown\0"
    "modeChanged\0voltageChanged\0initialize\0"
    "calcNextMode\0freq\0above\0cavityFreqChanged\0"
    "tune\0currentAttn\0mode\0calibrate\0"
    "lastTuneVoltage\0lastTuneAttenuation\0"
    "lastCalVoltage\0shutUp\0quiet\0"
    "measureVoltageNoTune\0readCavitySettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MotorDriver[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       3,    1,  107,    2, 0x06 /* Public */,
       4,    1,  110,    2, 0x06 /* Public */,
       5,    1,  113,    2, 0x06 /* Public */,
       6,    1,  116,    2, 0x06 /* Public */,
       7,    1,  119,    2, 0x06 /* Public */,
       8,    1,  122,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  125,    2, 0x0a /* Public */,
      10,    2,  126,    2, 0x0a /* Public */,
      13,    1,  131,    2, 0x0a /* Public */,
      14,    3,  134,    2, 0x0a /* Public */,
      17,    0,  141,    2, 0x0a /* Public */,
      18,    0,  142,    2, 0x0a /* Public */,
      19,    0,  143,    2, 0x0a /* Public */,
      20,    0,  144,    2, 0x0a /* Public */,
      21,    1,  145,    2, 0x0a /* Public */,
      23,    0,  148,    2, 0x0a /* Public */,
      24,    0,  149,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Int, QMetaType::Double, QMetaType::Bool,   11,   12,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double, QMetaType::Int, QMetaType::Int,   11,   15,   16,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Int,
    QMetaType::Void,

       0        // eod
};

void MotorDriver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MotorDriver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->posUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->deltaF((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->tuningComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->canTuneUp((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->canTuneDown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->modeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->voltageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->initialize(); break;
        case 8: { int _r = _t->calcNextMode((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->cavityFreqChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->tune((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->calibrate(); break;
        case 12: { int _r = _t->lastTuneVoltage();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 13: { int _r = _t->lastTuneAttenuation();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 14: { int _r = _t->lastCalVoltage();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->shutUp((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: { int _r = _t->measureVoltageNoTune();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->readCavitySettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MotorDriver::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MotorDriver::posUpdate)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MotorDriver::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MotorDriver::deltaF)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MotorDriver::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MotorDriver::tuningComplete)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MotorDriver::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MotorDriver::canTuneUp)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MotorDriver::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MotorDriver::canTuneDown)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MotorDriver::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MotorDriver::modeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MotorDriver::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MotorDriver::voltageChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MotorDriver::staticMetaObject = { {
    QMetaObject::SuperData::link<HardwareObject::staticMetaObject>(),
    qt_meta_stringdata_MotorDriver.data,
    qt_meta_data_MotorDriver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MotorDriver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MotorDriver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MotorDriver.stringdata0))
        return static_cast<void*>(this);
    return HardwareObject::qt_metacast(_clname);
}

int MotorDriver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HardwareObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void MotorDriver::posUpdate(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MotorDriver::deltaF(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MotorDriver::tuningComplete(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MotorDriver::canTuneUp(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MotorDriver::canTuneDown(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MotorDriver::modeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MotorDriver::voltageChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
