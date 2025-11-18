/****************************************************************************
** Meta object code from reading C++ file 'batchattenuation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../batchattenuation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batchattenuation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BatchAttenuation_t {
    QByteArrayData data[11];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BatchAttenuation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BatchAttenuation_t qt_meta_stringdata_BatchAttenuation = {
    {
QT_MOC_LITERAL(0, 0, 16), // "BatchAttenuation"
QT_MOC_LITERAL(1, 17, 15), // "elementComplete"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "prepareNextScan"
QT_MOC_LITERAL(4, 50, 4), // "Scan"
QT_MOC_LITERAL(5, 55, 15), // "isBatchComplete"
QT_MOC_LITERAL(6, 71, 12), // "advanceBatch"
QT_MOC_LITERAL(7, 84, 1), // "s"
QT_MOC_LITERAL(8, 86, 11), // "processScan"
QT_MOC_LITERAL(9, 98, 11), // "writeReport"
QT_MOC_LITERAL(10, 110, 5) // "abort"

    },
    "BatchAttenuation\0elementComplete\0\0"
    "prepareNextScan\0Scan\0isBatchComplete\0"
    "advanceBatch\0s\0processScan\0writeReport\0"
    "abort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BatchAttenuation[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x0a /* Public */,
       5,    0,   51,    2, 0x0a /* Public */,
       6,    1,   52,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,
       9,    0,   58,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 4,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 4,    7,
    QMetaType::Void, 0x80000000 | 4,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BatchAttenuation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BatchAttenuation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->elementComplete(); break;
        case 1: { Scan _r = _t->prepareNextScan();
            if (_a[0]) *reinterpret_cast< Scan*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->isBatchComplete();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->advanceBatch((*reinterpret_cast< const Scan(*)>(_a[1]))); break;
        case 4: _t->processScan((*reinterpret_cast< Scan(*)>(_a[1]))); break;
        case 5: _t->writeReport(); break;
        case 6: _t->abort(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BatchAttenuation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatchAttenuation::elementComplete)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BatchAttenuation::staticMetaObject = { {
    QMetaObject::SuperData::link<BatchManager::staticMetaObject>(),
    qt_meta_stringdata_BatchAttenuation.data,
    qt_meta_data_BatchAttenuation,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BatchAttenuation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatchAttenuation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BatchAttenuation.stringdata0))
        return static_cast<void*>(this);
    return BatchManager::qt_metacast(_clname);
}

int BatchAttenuation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BatchManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void BatchAttenuation::elementComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
