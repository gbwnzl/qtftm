/****************************************************************************
** Meta object code from reading C++ file 'batchwizard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../batchwizard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batchwizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BatchWizard_t {
    QByteArrayData data[25];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BatchWizard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BatchWizard_t qt_meta_stringdata_BatchWizard = {
    {
QT_MOC_LITERAL(0, 0, 11), // "BatchWizard"
QT_MOC_LITERAL(1, 12, 7), // "setupDr"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "Scan"
QT_MOC_LITERAL(4, 26, 6), // "newFid"
QT_MOC_LITERAL(5, 33, 3), // "Fid"
QT_MOC_LITERAL(6, 37, 11), // "resetPeakUp"
QT_MOC_LITERAL(7, 49, 19), // "changeNumPeakupFids"
QT_MOC_LITERAL(8, 69, 15), // "setScanTemplate"
QT_MOC_LITERAL(9, 85, 1), // "s"
QT_MOC_LITERAL(10, 87, 14), // "setCalTemplate"
QT_MOC_LITERAL(11, 102, 11), // "setDrRanges"
QT_MOC_LITERAL(12, 114, 28), // "QList<QPair<double,double> >"
QT_MOC_LITERAL(13, 143, 1), // "r"
QT_MOC_LITERAL(14, 145, 11), // "setCatTests"
QT_MOC_LITERAL(15, 157, 36), // "QList<BatchCategorize::Catego..."
QT_MOC_LITERAL(16, 194, 1), // "l"
QT_MOC_LITERAL(17, 196, 15), // "setBatchManager"
QT_MOC_LITERAL(18, 212, 13), // "BatchManager*"
QT_MOC_LITERAL(19, 226, 1), // "b"
QT_MOC_LITERAL(20, 228, 9), // "setFitter"
QT_MOC_LITERAL(21, 238, 15), // "AbstractFitter*"
QT_MOC_LITERAL(22, 254, 2), // "af"
QT_MOC_LITERAL(23, 257, 9), // "prepareDr"
QT_MOC_LITERAL(24, 267, 14) // "drPrepComplete"

    },
    "BatchWizard\0setupDr\0\0Scan\0newFid\0Fid\0"
    "resetPeakUp\0changeNumPeakupFids\0"
    "setScanTemplate\0s\0setCalTemplate\0"
    "setDrRanges\0QList<QPair<double,double> >\0"
    "r\0setCatTests\0QList<BatchCategorize::CategoryTest>\0"
    "l\0setBatchManager\0BatchManager*\0b\0"
    "setFitter\0AbstractFitter*\0af\0prepareDr\0"
    "drPrepComplete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BatchWizard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       6,    0,   80,    2, 0x06 /* Public */,
       7,    1,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   84,    2, 0x0a /* Public */,
      10,    1,   87,    2, 0x0a /* Public */,
      11,    1,   90,    2, 0x0a /* Public */,
      14,    1,   93,    2, 0x0a /* Public */,
      17,    1,   96,    2, 0x0a /* Public */,
      20,    1,   99,    2, 0x0a /* Public */,
      23,    1,  102,    2, 0x0a /* Public */,
      24,    0,  105,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    9,
    QMetaType::Void, 0x80000000 | 3,    9,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 3,    9,
    QMetaType::Void,

       0        // eod
};

void BatchWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BatchWizard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setupDr((*reinterpret_cast< Scan(*)>(_a[1]))); break;
        case 1: _t->newFid((*reinterpret_cast< Fid(*)>(_a[1]))); break;
        case 2: _t->resetPeakUp(); break;
        case 3: _t->changeNumPeakupFids((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setScanTemplate((*reinterpret_cast< Scan(*)>(_a[1]))); break;
        case 5: _t->setCalTemplate((*reinterpret_cast< Scan(*)>(_a[1]))); break;
        case 6: _t->setDrRanges((*reinterpret_cast< const QList<QPair<double,double> >(*)>(_a[1]))); break;
        case 7: _t->setCatTests((*reinterpret_cast< const QList<BatchCategorize::CategoryTest>(*)>(_a[1]))); break;
        case 8: _t->setBatchManager((*reinterpret_cast< BatchManager*(*)>(_a[1]))); break;
        case 9: _t->setFitter((*reinterpret_cast< AbstractFitter*(*)>(_a[1]))); break;
        case 10: _t->prepareDr((*reinterpret_cast< Scan(*)>(_a[1]))); break;
        case 11: _t->drPrepComplete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BatchManager* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AbstractFitter* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BatchWizard::*)(Scan );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatchWizard::setupDr)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BatchWizard::*)(Fid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatchWizard::newFid)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BatchWizard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatchWizard::resetPeakUp)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BatchWizard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatchWizard::changeNumPeakupFids)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BatchWizard::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizard::staticMetaObject>(),
    qt_meta_stringdata_BatchWizard.data,
    qt_meta_data_BatchWizard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BatchWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatchWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BatchWizard.stringdata0))
        return static_cast<void*>(this);
    return QWizard::qt_metacast(_clname);
}

int BatchWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void BatchWizard::setupDr(Scan _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BatchWizard::newFid(Fid _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BatchWizard::resetPeakUp()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void BatchWizard::changeNumPeakupFids(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
