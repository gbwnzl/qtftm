/****************************************************************************
** Meta object code from reading C++ file 'batchmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../batchmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batchmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BatchManager_t {
    QByteArrayData data[19];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BatchManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BatchManager_t qt_meta_stringdata_BatchManager = {
    {
QT_MOC_LITERAL(0, 0, 12), // "BatchManager"
QT_MOC_LITERAL(1, 13, 10), // "logMessage"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 21), // "QtFTM::LogMessageCode"
QT_MOC_LITERAL(4, 47, 9), // "beginScan"
QT_MOC_LITERAL(5, 57, 4), // "Scan"
QT_MOC_LITERAL(6, 62, 5), // "isCal"
QT_MOC_LITERAL(7, 68, 13), // "batchComplete"
QT_MOC_LITERAL(8, 82, 7), // "aborted"
QT_MOC_LITERAL(9, 90, 8), // "plotData"
QT_MOC_LITERAL(10, 99, 24), // "QtFTM::BatchPlotMetaData"
QT_MOC_LITERAL(11, 124, 24), // "QList<QVector<QPointF> >"
QT_MOC_LITERAL(12, 149, 10), // "titleReady"
QT_MOC_LITERAL(13, 160, 18), // "processingComplete"
QT_MOC_LITERAL(14, 179, 1), // "s"
QT_MOC_LITERAL(15, 181, 11), // "sleepSignal"
QT_MOC_LITERAL(16, 193, 8), // "advanced"
QT_MOC_LITERAL(17, 202, 12), // "scanComplete"
QT_MOC_LITERAL(18, 215, 10) // "beginBatch"

    },
    "BatchManager\0logMessage\0\0QtFTM::LogMessageCode\0"
    "beginScan\0Scan\0isCal\0batchComplete\0"
    "aborted\0plotData\0QtFTM::BatchPlotMetaData\0"
    "QList<QVector<QPointF> >\0titleReady\0"
    "processingComplete\0s\0sleepSignal\0"
    "advanced\0scanComplete\0beginBatch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BatchManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       4,    2,   79,    2, 0x06 /* Public */,
       4,    1,   84,    2, 0x26 /* Public | MethodCloned */,
       7,    1,   87,    2, 0x06 /* Public */,
       7,    0,   90,    2, 0x26 /* Public | MethodCloned */,
       9,    2,   91,    2, 0x06 /* Public */,
      12,    1,   96,    2, 0x06 /* Public */,
      13,    1,   99,    2, 0x06 /* Public */,
      15,    0,  102,    2, 0x06 /* Public */,
      16,    0,  103,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,  104,    2, 0x0a /* Public */,
      18,    0,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    2,    6,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 11,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 5,   14,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,   14,
    QMetaType::Void,

       0        // eod
};

void BatchManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BatchManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QtFTM::LogMessageCode(*)>(_a[2]))); break;
        case 1: _t->beginScan((*reinterpret_cast< Scan(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->beginScan((*reinterpret_cast< Scan(*)>(_a[1]))); break;
        case 3: _t->batchComplete((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 4: _t->batchComplete(); break;
        case 5: _t->plotData((*reinterpret_cast< const QtFTM::BatchPlotMetaData(*)>(_a[1])),(*reinterpret_cast< const QList<QVector<QPointF> >(*)>(_a[2]))); break;
        case 6: _t->titleReady((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->processingComplete((*reinterpret_cast< Scan(*)>(_a[1]))); break;
        case 8: _t->sleepSignal(); break;
        case 9: _t->advanced(); break;
        case 10: _t->scanComplete((*reinterpret_cast< const Scan(*)>(_a[1]))); break;
        case 11: _t->beginBatch(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtFTM::LogMessageCode >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QVector<QPointF> > >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BatchManager::*)(const QString , const QtFTM::LogMessageCode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatchManager::logMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BatchManager::*)(Scan , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatchManager::beginScan)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BatchManager::*)(const bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatchManager::batchComplete)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BatchManager::*)(const QtFTM::BatchPlotMetaData , const QList<QVector<QPointF> > );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatchManager::plotData)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (BatchManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatchManager::titleReady)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (BatchManager::*)(Scan );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatchManager::processingComplete)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (BatchManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatchManager::sleepSignal)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (BatchManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatchManager::advanced)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BatchManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BatchManager.data,
    qt_meta_data_BatchManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BatchManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatchManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BatchManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BatchManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void BatchManager::logMessage(const QString _t1, const QtFTM::LogMessageCode _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BatchManager::beginScan(Scan _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void BatchManager::batchComplete(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 5
void BatchManager::plotData(const QtFTM::BatchPlotMetaData _t1, const QList<QVector<QPointF> > _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void BatchManager::titleReady(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void BatchManager::processingComplete(Scan _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void BatchManager::sleepSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void BatchManager::advanced()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
