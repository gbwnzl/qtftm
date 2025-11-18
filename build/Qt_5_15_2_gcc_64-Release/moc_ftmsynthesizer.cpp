/****************************************************************************
** Meta object code from reading C++ file 'ftmsynthesizer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ftmsynthesizer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ftmsynthesizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FtmSynthesizer_t {
    QByteArrayData data[12];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FtmSynthesizer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FtmSynthesizer_t qt_meta_stringdata_FtmSynthesizer = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FtmSynthesizer"
QT_MOC_LITERAL(1, 15, 13), // "newCavityFreq"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "newProbeFreq"
QT_MOC_LITERAL(4, 43, 10), // "initialize"
QT_MOC_LITERAL(5, 54, 19), // "setCavityFreqFromUI"
QT_MOC_LITERAL(6, 74, 1), // "d"
QT_MOC_LITERAL(7, 76, 13), // "setCavityFreq"
QT_MOC_LITERAL(8, 90, 13), // "goToProbeFreq"
QT_MOC_LITERAL(9, 104, 14), // "goToCavityFreq"
QT_MOC_LITERAL(10, 119, 19), // "goToCavityDeltaFreq"
QT_MOC_LITERAL(11, 139, 5) // "delta"

    },
    "FtmSynthesizer\0newCavityFreq\0\0"
    "newProbeFreq\0initialize\0setCavityFreqFromUI\0"
    "d\0setCavityFreq\0goToProbeFreq\0"
    "goToCavityFreq\0goToCavityDeltaFreq\0"
    "delta"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FtmSynthesizer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   60,    2, 0x0a /* Public */,
       5,    1,   61,    2, 0x0a /* Public */,
       7,    1,   64,    2, 0x0a /* Public */,
       8,    0,   67,    2, 0x0a /* Public */,
       9,    0,   68,    2, 0x0a /* Public */,
      10,    1,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Bool, QMetaType::Double,    6,
    QMetaType::Double,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Double,   11,

       0        // eod
};

void FtmSynthesizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FtmSynthesizer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newCavityFreq((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->newProbeFreq((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->initialize(); break;
        case 3: _t->setCavityFreqFromUI((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: { bool _r = _t->setCavityFreq((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { double _r = _t->goToProbeFreq();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->goToCavityFreq();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->goToCavityDeltaFreq((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FtmSynthesizer::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FtmSynthesizer::newCavityFreq)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FtmSynthesizer::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FtmSynthesizer::newProbeFreq)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FtmSynthesizer::staticMetaObject = { {
    QMetaObject::SuperData::link<Synthesizer::staticMetaObject>(),
    qt_meta_stringdata_FtmSynthesizer.data,
    qt_meta_data_FtmSynthesizer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FtmSynthesizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FtmSynthesizer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FtmSynthesizer.stringdata0))
        return static_cast<void*>(this);
    return Synthesizer::qt_metacast(_clname);
}

int FtmSynthesizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Synthesizer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void FtmSynthesizer::newCavityFreq(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FtmSynthesizer::newProbeFreq(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
