/****************************************************************************
** Meta object code from reading C++ file 'amdorbatch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../amdorbatch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'amdorbatch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AmdorBatch_t {
    QByteArrayData data[4];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AmdorBatch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AmdorBatch_t qt_meta_stringdata_AmdorBatch = {
    {
QT_MOC_LITERAL(0, 0, 10), // "AmdorBatch"
QT_MOC_LITERAL(1, 11, 10), // "newRefScan"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9) // "newDrScan"

    },
    "AmdorBatch\0newRefScan\0\0newDrScan"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AmdorBatch[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,
       3,    3,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,    2,    2,    2,

       0        // eod
};

void AmdorBatch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AmdorBatch *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newRefScan((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->newDrScan((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AmdorBatch::*)(int , int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AmdorBatch::newRefScan)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AmdorBatch::*)(int , int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AmdorBatch::newDrScan)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AmdorBatch::staticMetaObject = { {
    QMetaObject::SuperData::link<BatchManager::staticMetaObject>(),
    qt_meta_stringdata_AmdorBatch.data,
    qt_meta_data_AmdorBatch,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AmdorBatch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AmdorBatch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AmdorBatch.stringdata0))
        return static_cast<void*>(this);
    return BatchManager::qt_metacast(_clname);
}

int AmdorBatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BatchManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AmdorBatch::newRefScan(int _t1, int _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AmdorBatch::newDrScan(int _t1, int _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
