/****************************************************************************
** Meta object code from reading C++ file 'pulseplot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../pulseplot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pulseplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PulsePlot_t {
    QByteArrayData data[14];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PulsePlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PulsePlot_t qt_meta_stringdata_PulsePlot = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PulsePlot"
QT_MOC_LITERAL(1, 10, 9), // "newConfig"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 14), // "PulseGenConfig"
QT_MOC_LITERAL(4, 36, 1), // "c"
QT_MOC_LITERAL(5, 38, 10), // "newSetting"
QT_MOC_LITERAL(6, 49, 5), // "index"
QT_MOC_LITERAL(7, 55, 19), // "QtFTM::PulseSetting"
QT_MOC_LITERAL(8, 75, 1), // "s"
QT_MOC_LITERAL(9, 77, 3), // "val"
QT_MOC_LITERAL(10, 81, 10), // "newRepRate"
QT_MOC_LITERAL(11, 92, 1), // "d"
QT_MOC_LITERAL(12, 94, 12), // "newProtDelay"
QT_MOC_LITERAL(13, 107, 13) // "newScopeDelay"

    },
    "PulsePlot\0newConfig\0\0PulseGenConfig\0"
    "c\0newSetting\0index\0QtFTM::PulseSetting\0"
    "s\0val\0newRepRate\0d\0newProtDelay\0"
    "newScopeDelay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PulsePlot[] = {

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
       1,    1,   39,    2, 0x0a /* Public */,
       5,    3,   42,    2, 0x0a /* Public */,
      10,    1,   49,    2, 0x0a /* Public */,
      12,    1,   52,    2, 0x0a /* Public */,
      13,    1,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7, QMetaType::QVariant,    6,    8,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void PulsePlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PulsePlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newConfig((*reinterpret_cast< const PulseGenConfig(*)>(_a[1]))); break;
        case 1: _t->newSetting((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QtFTM::PulseSetting(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 2: _t->newRepRate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->newProtDelay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->newScopeDelay((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PulsePlot::staticMetaObject = { {
    QMetaObject::SuperData::link<ZoomPanPlot::staticMetaObject>(),
    qt_meta_stringdata_PulsePlot.data,
    qt_meta_data_PulsePlot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PulsePlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PulsePlot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PulsePlot.stringdata0))
        return static_cast<void*>(this);
    return ZoomPanPlot::qt_metacast(_clname);
}

int PulsePlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ZoomPanPlot::qt_metacall(_c, _id, _a);
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
