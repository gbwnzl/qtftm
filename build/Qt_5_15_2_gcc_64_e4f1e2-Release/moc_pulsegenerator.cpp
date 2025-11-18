/****************************************************************************
** Meta object code from reading C++ file 'pulsegenerator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../pulsegenerator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pulsegenerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PulseGenerator_t {
    QByteArrayData data[21];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PulseGenerator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PulseGenerator_t qt_meta_stringdata_PulseGenerator = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PulseGenerator"
QT_MOC_LITERAL(1, 15, 13), // "settingUpdate"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 19), // "QtFTM::PulseSetting"
QT_MOC_LITERAL(4, 50, 12), // "configUpdate"
QT_MOC_LITERAL(5, 63, 14), // "PulseGenConfig"
QT_MOC_LITERAL(6, 78, 13), // "repRateUpdate"
QT_MOC_LITERAL(7, 92, 6), // "config"
QT_MOC_LITERAL(8, 99, 4), // "read"
QT_MOC_LITERAL(9, 104, 5), // "index"
QT_MOC_LITERAL(10, 110, 1), // "s"
QT_MOC_LITERAL(11, 112, 11), // "readRepRate"
QT_MOC_LITERAL(12, 124, 25), // "QtFTM::PulseChannelConfig"
QT_MOC_LITERAL(13, 150, 3), // "set"
QT_MOC_LITERAL(14, 154, 3), // "val"
QT_MOC_LITERAL(15, 158, 10), // "setChannel"
QT_MOC_LITERAL(16, 169, 2), // "cc"
QT_MOC_LITERAL(17, 172, 6), // "setAll"
QT_MOC_LITERAL(18, 179, 10), // "setRepRate"
QT_MOC_LITERAL(19, 190, 1), // "d"
QT_MOC_LITERAL(20, 192, 18) // "configureForTuning"

    },
    "PulseGenerator\0settingUpdate\0\0"
    "QtFTM::PulseSetting\0configUpdate\0"
    "PulseGenConfig\0repRateUpdate\0config\0"
    "read\0index\0s\0readRepRate\0"
    "QtFTM::PulseChannelConfig\0set\0val\0"
    "setChannel\0cc\0setAll\0setRepRate\0d\0"
    "configureForTuning"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PulseGenerator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   74,    2, 0x06 /* Public */,
       4,    1,   81,    2, 0x06 /* Public */,
       6,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   87,    2, 0x0a /* Public */,
       8,    2,   88,    2, 0x0a /* Public */,
      11,    0,   93,    2, 0x0a /* Public */,
       8,    1,   94,    2, 0x0a /* Public */,
      13,    3,   97,    2, 0x0a /* Public */,
      15,    2,  104,    2, 0x0a /* Public */,
      17,    1,  109,    2, 0x0a /* Public */,
      18,    1,  112,    2, 0x0a /* Public */,
      20,    0,  115,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3, QMetaType::QVariant,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    0x80000000 | 5,
    QMetaType::QVariant, QMetaType::Int, 0x80000000 | 3,    9,   10,
    QMetaType::Double,
    0x80000000 | 12, QMetaType::Int,    9,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 3, QMetaType::QVariant,    9,   10,   14,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 12,    9,   16,
    QMetaType::Bool, 0x80000000 | 5,   16,
    QMetaType::Bool, QMetaType::Double,   19,
    0x80000000 | 5,

       0        // eod
};

void PulseGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PulseGenerator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->settingUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QtFTM::PulseSetting(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 1: _t->configUpdate((*reinterpret_cast< const PulseGenConfig(*)>(_a[1]))); break;
        case 2: _t->repRateUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: { PulseGenConfig _r = _t->config();
            if (_a[0]) *reinterpret_cast< PulseGenConfig*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVariant _r = _t->read((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QtFTM::PulseSetting(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 5: { double _r = _t->readRepRate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 6: { QtFTM::PulseChannelConfig _r = _t->read((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QtFTM::PulseChannelConfig*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->set((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QtFTM::PulseSetting(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->setChannel((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QtFTM::PulseChannelConfig(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->setAll((*reinterpret_cast< const PulseGenConfig(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->setRepRate((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { PulseGenConfig _r = _t->configureForTuning();
            if (_a[0]) *reinterpret_cast< PulseGenConfig*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PulseGenerator::*)(int , QtFTM::PulseSetting , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PulseGenerator::settingUpdate)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PulseGenerator::*)(const PulseGenConfig );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PulseGenerator::configUpdate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PulseGenerator::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PulseGenerator::repRateUpdate)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PulseGenerator::staticMetaObject = { {
    QMetaObject::SuperData::link<HardwareObject::staticMetaObject>(),
    qt_meta_stringdata_PulseGenerator.data,
    qt_meta_data_PulseGenerator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PulseGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PulseGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PulseGenerator.stringdata0))
        return static_cast<void*>(this);
    return HardwareObject::qt_metacast(_clname);
}

int PulseGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HardwareObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PulseGenerator::settingUpdate(int _t1, QtFTM::PulseSetting _t2, QVariant _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PulseGenerator::configUpdate(const PulseGenConfig _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PulseGenerator::repRateUpdate(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
