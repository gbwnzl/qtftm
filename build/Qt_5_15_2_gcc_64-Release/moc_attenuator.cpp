/****************************************************************************
** Meta object code from reading C++ file 'attenuator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../attenuator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'attenuator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Attenuator_t {
    QByteArrayData data[14];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Attenuator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Attenuator_t qt_meta_stringdata_Attenuator = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Attenuator"
QT_MOC_LITERAL(1, 11, 10), // "attnUpdate"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "taattnUpdate"
QT_MOC_LITERAL(4, 36, 21), // "attenFileParseSuccess"
QT_MOC_LITERAL(5, 58, 10), // "initialize"
QT_MOC_LITERAL(6, 69, 15), // "changeAttenFile"
QT_MOC_LITERAL(7, 85, 8), // "fileName"
QT_MOC_LITERAL(8, 94, 13), // "setTuningAttn"
QT_MOC_LITERAL(9, 108, 4), // "freq"
QT_MOC_LITERAL(10, 113, 7), // "setAttn"
QT_MOC_LITERAL(11, 121, 1), // "a"
QT_MOC_LITERAL(12, 123, 8), // "readAttn"
QT_MOC_LITERAL(13, 132, 14) // "clearAttenData"

    },
    "Attenuator\0attnUpdate\0\0taattnUpdate\0"
    "attenFileParseSuccess\0initialize\0"
    "changeAttenFile\0fileName\0setTuningAttn\0"
    "freq\0setAttn\0a\0readAttn\0clearAttenData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Attenuator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    1,   62,    2, 0x06 /* Public */,
       4,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   68,    2, 0x0a /* Public */,
       6,    1,   69,    2, 0x0a /* Public */,
       8,    1,   72,    2, 0x0a /* Public */,
      10,    1,   75,    2, 0x0a /* Public */,
      12,    0,   78,    2, 0x0a /* Public */,
      13,    0,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Int, QMetaType::Double,    9,
    QMetaType::Int, QMetaType::Int,   11,
    QMetaType::Int,
    QMetaType::Void,

       0        // eod
};

void Attenuator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Attenuator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->attnUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->taattnUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->attenFileParseSuccess((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->initialize(); break;
        case 4: _t->changeAttenFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: { int _r = _t->setTuningAttn((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->setAttn((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->readAttn();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->clearAttenData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Attenuator::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Attenuator::attnUpdate)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Attenuator::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Attenuator::taattnUpdate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Attenuator::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Attenuator::attenFileParseSuccess)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Attenuator::staticMetaObject = { {
    QMetaObject::SuperData::link<HardwareObject::staticMetaObject>(),
    qt_meta_stringdata_Attenuator.data,
    qt_meta_data_Attenuator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Attenuator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Attenuator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Attenuator.stringdata0))
        return static_cast<void*>(this);
    return HardwareObject::qt_metacast(_clname);
}

int Attenuator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HardwareObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Attenuator::attnUpdate(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Attenuator::taattnUpdate(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Attenuator::attenFileParseSuccess(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
