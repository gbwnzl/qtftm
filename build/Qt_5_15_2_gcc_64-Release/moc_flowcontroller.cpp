/****************************************************************************
** Meta object code from reading C++ file 'flowcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../flowcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flowcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FlowController_t {
    QByteArrayData data[26];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlowController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlowController_t qt_meta_stringdata_FlowController = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FlowController"
QT_MOC_LITERAL(1, 15, 17), // "channelNameUpdate"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 10), // "flowUpdate"
QT_MOC_LITERAL(4, 45, 14), // "pressureUpdate"
QT_MOC_LITERAL(5, 60, 18), // "flowSetpointUpdate"
QT_MOC_LITERAL(6, 79, 22), // "pressureSetpointUpdate"
QT_MOC_LITERAL(7, 102, 19), // "pressureControlMode"
QT_MOC_LITERAL(8, 122, 10), // "initialize"
QT_MOC_LITERAL(9, 133, 6), // "config"
QT_MOC_LITERAL(10, 140, 10), // "FlowConfig"
QT_MOC_LITERAL(11, 151, 15), // "setFlowSetpoint"
QT_MOC_LITERAL(12, 167, 2), // "ch"
QT_MOC_LITERAL(13, 170, 3), // "val"
QT_MOC_LITERAL(14, 174, 19), // "setPressureSetpoint"
QT_MOC_LITERAL(15, 194, 14), // "setChannelName"
QT_MOC_LITERAL(16, 209, 4), // "name"
QT_MOC_LITERAL(17, 214, 16), // "readFlowSetpoint"
QT_MOC_LITERAL(18, 231, 20), // "readPressureSetpoint"
QT_MOC_LITERAL(19, 252, 8), // "readFlow"
QT_MOC_LITERAL(20, 261, 12), // "readPressure"
QT_MOC_LITERAL(21, 274, 22), // "setPressureControlMode"
QT_MOC_LITERAL(22, 297, 7), // "enabled"
QT_MOC_LITERAL(23, 305, 23), // "readPressureControlMode"
QT_MOC_LITERAL(24, 329, 14), // "updateInterval"
QT_MOC_LITERAL(25, 344, 8) // "readNext"

    },
    "FlowController\0channelNameUpdate\0\0"
    "flowUpdate\0pressureUpdate\0flowSetpointUpdate\0"
    "pressureSetpointUpdate\0pressureControlMode\0"
    "initialize\0config\0FlowConfig\0"
    "setFlowSetpoint\0ch\0val\0setPressureSetpoint\0"
    "setChannelName\0name\0readFlowSetpoint\0"
    "readPressureSetpoint\0readFlow\0"
    "readPressure\0setPressureControlMode\0"
    "enabled\0readPressureControlMode\0"
    "updateInterval\0readNext"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlowController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  109,    2, 0x06 /* Public */,
       3,    2,  114,    2, 0x06 /* Public */,
       4,    1,  119,    2, 0x06 /* Public */,
       5,    2,  122,    2, 0x06 /* Public */,
       6,    1,  127,    2, 0x06 /* Public */,
       7,    1,  130,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  133,    2, 0x0a /* Public */,
       9,    0,  134,    2, 0x0a /* Public */,
      11,    2,  135,    2, 0x0a /* Public */,
      14,    1,  140,    2, 0x0a /* Public */,
      15,    2,  143,    2, 0x0a /* Public */,
      17,    1,  148,    2, 0x0a /* Public */,
      18,    0,  151,    2, 0x0a /* Public */,
      19,    1,  152,    2, 0x0a /* Public */,
      20,    0,  155,    2, 0x0a /* Public */,
      21,    1,  156,    2, 0x0a /* Public */,
      23,    0,  159,    2, 0x0a /* Public */,
      24,    0,  160,    2, 0x0a /* Public */,
      25,    0,  161,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    0x80000000 | 10,
    QMetaType::Double, QMetaType::Int, QMetaType::Double,   12,   13,
    QMetaType::Double, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   12,   16,
    QMetaType::Double, QMetaType::Int,   12,
    QMetaType::Double,
    QMetaType::Double, QMetaType::Int,   12,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FlowController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlowController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->channelNameUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->flowUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->pressureUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->flowSetpointUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->pressureSetpointUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->pressureControlMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->initialize(); break;
        case 7: { FlowConfig _r = _t->config();
            if (_a[0]) *reinterpret_cast< FlowConfig*>(_a[0]) = std::move(_r); }  break;
        case 8: { double _r = _t->setFlowSetpoint((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 9: { double _r = _t->setPressureSetpoint((*reinterpret_cast< const double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->setChannelName((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: { double _r = _t->readFlowSetpoint((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 12: { double _r = _t->readPressureSetpoint();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 13: { double _r = _t->readFlow((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 14: { double _r = _t->readPressure();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->setPressureControlMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: { bool _r = _t->readPressureControlMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->updateInterval(); break;
        case 18: _t->readNext(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FlowController::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowController::channelNameUpdate)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FlowController::*)(int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowController::flowUpdate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FlowController::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowController::pressureUpdate)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FlowController::*)(int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowController::flowSetpointUpdate)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FlowController::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowController::pressureSetpointUpdate)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FlowController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlowController::pressureControlMode)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FlowController::staticMetaObject = { {
    QMetaObject::SuperData::link<HardwareObject::staticMetaObject>(),
    qt_meta_stringdata_FlowController.data,
    qt_meta_data_FlowController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlowController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlowController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlowController.stringdata0))
        return static_cast<void*>(this);
    return HardwareObject::qt_metacast(_clname);
}

int FlowController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HardwareObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void FlowController::channelNameUpdate(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FlowController::flowUpdate(int _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FlowController::pressureUpdate(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FlowController::flowSetpointUpdate(int _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FlowController::pressureSetpointUpdate(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FlowController::pressureControlMode(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
