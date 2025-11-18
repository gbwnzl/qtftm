/****************************************************************************
** Meta object code from reading C++ file 'abstractfitter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../abstractfitter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractfitter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AbstractFitter_t {
    QByteArrayData data[10];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractFitter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractFitter_t qt_meta_stringdata_AbstractFitter = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AbstractFitter"
QT_MOC_LITERAL(1, 15, 11), // "fitComplete"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "FitResult"
QT_MOC_LITERAL(4, 38, 5), // "doFit"
QT_MOC_LITERAL(5, 44, 4), // "Scan"
QT_MOC_LITERAL(6, 49, 1), // "s"
QT_MOC_LITERAL(7, 51, 14), // "isFidSaturated"
QT_MOC_LITERAL(8, 66, 3), // "Fid"
QT_MOC_LITERAL(9, 70, 1) // "f"

    },
    "AbstractFitter\0fitComplete\0\0FitResult\0"
    "doFit\0Scan\0s\0isFidSaturated\0Fid\0f"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractFitter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x0a /* Public */,
       7,    1,   40,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    0x80000000 | 3, 0x80000000 | 5,    6,
    QMetaType::Bool, 0x80000000 | 5,    6,
    QMetaType::Bool, 0x80000000 | 8,    9,

       0        // eod
};

void AbstractFitter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractFitter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fitComplete((*reinterpret_cast< const FitResult(*)>(_a[1]))); break;
        case 1: { FitResult _r = _t->doFit((*reinterpret_cast< const Scan(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< FitResult*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->isFidSaturated((*reinterpret_cast< const Scan(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->isFidSaturated((*reinterpret_cast< const Fid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractFitter::*)(const FitResult & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractFitter::fitComplete)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AbstractFitter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AbstractFitter.data,
    qt_meta_data_AbstractFitter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AbstractFitter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractFitter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractFitter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AbstractFitter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void AbstractFitter::fitComplete(const FitResult & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
