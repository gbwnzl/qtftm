/****************************************************************************
** Meta object code from reading C++ file 'scanmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../scanmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scanmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScanManager_t {
    QByteArrayData data[33];
    char stringdata0[360];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScanManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScanManager_t qt_meta_stringdata_ScanManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ScanManager"
QT_MOC_LITERAL(1, 12, 10), // "logMessage"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 21), // "QtFTM::LogMessageCode"
QT_MOC_LITERAL(4, 46, 13), // "statusMessage"
QT_MOC_LITERAL(5, 60, 9), // "peakUpFid"
QT_MOC_LITERAL(6, 70, 3), // "Fid"
QT_MOC_LITERAL(7, 74, 6), // "newFid"
QT_MOC_LITERAL(8, 81, 25), // "initializeHardwareForScan"
QT_MOC_LITERAL(9, 107, 4), // "Scan"
QT_MOC_LITERAL(10, 112, 22), // "initializationComplete"
QT_MOC_LITERAL(11, 135, 7), // "scanFid"
QT_MOC_LITERAL(12, 143, 16), // "scanShotAcquired"
QT_MOC_LITERAL(13, 160, 12), // "scanComplete"
QT_MOC_LITERAL(14, 173, 13), // "dummyComplete"
QT_MOC_LITERAL(15, 187, 14), // "fatalSaveError"
QT_MOC_LITERAL(16, 202, 11), // "fidReceived"
QT_MOC_LITERAL(17, 214, 1), // "d"
QT_MOC_LITERAL(18, 216, 11), // "prepareScan"
QT_MOC_LITERAL(19, 228, 1), // "s"
QT_MOC_LITERAL(20, 230, 9), // "startScan"
QT_MOC_LITERAL(21, 240, 13), // "peakUpAverage"
QT_MOC_LITERAL(22, 254, 1), // "f"
QT_MOC_LITERAL(23, 256, 13), // "setPeakUpAvgs"
QT_MOC_LITERAL(24, 270, 1), // "a"
QT_MOC_LITERAL(25, 272, 15), // "resetPeakUpAvgs"
QT_MOC_LITERAL(26, 288, 10), // "acqAverage"
QT_MOC_LITERAL(27, 299, 5), // "pause"
QT_MOC_LITERAL(28, 305, 6), // "resume"
QT_MOC_LITERAL(29, 312, 9), // "abortScan"
QT_MOC_LITERAL(30, 322, 19), // "setCurrentProbeFreq"
QT_MOC_LITERAL(31, 342, 7), // "failure"
QT_MOC_LITERAL(32, 350, 9) // "retryScan"

    },
    "ScanManager\0logMessage\0\0QtFTM::LogMessageCode\0"
    "statusMessage\0peakUpFid\0Fid\0newFid\0"
    "initializeHardwareForScan\0Scan\0"
    "initializationComplete\0scanFid\0"
    "scanShotAcquired\0scanComplete\0"
    "dummyComplete\0fatalSaveError\0fidReceived\0"
    "d\0prepareScan\0s\0startScan\0peakUpAverage\0"
    "f\0setPeakUpAvgs\0a\0resetPeakUpAvgs\0"
    "acqAverage\0pause\0resume\0abortScan\0"
    "setCurrentProbeFreq\0failure\0retryScan"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScanManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  139,    2, 0x06 /* Public */,
       1,    1,  144,    2, 0x26 /* Public | MethodCloned */,
       4,    1,  147,    2, 0x06 /* Public */,
       5,    1,  150,    2, 0x06 /* Public */,
       7,    1,  153,    2, 0x06 /* Public */,
       8,    1,  156,    2, 0x06 /* Public */,
      10,    0,  159,    2, 0x06 /* Public */,
      11,    1,  160,    2, 0x06 /* Public */,
      12,    0,  163,    2, 0x06 /* Public */,
      13,    1,  164,    2, 0x06 /* Public */,
      14,    1,  167,    2, 0x06 /* Public */,
      15,    0,  170,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  171,    2, 0x0a /* Public */,
      18,    1,  174,    2, 0x0a /* Public */,
      20,    1,  177,    2, 0x0a /* Public */,
      21,    1,  180,    2, 0x0a /* Public */,
      23,    1,  183,    2, 0x0a /* Public */,
      25,    0,  186,    2, 0x0a /* Public */,
      26,    1,  187,    2, 0x0a /* Public */,
      27,    0,  190,    2, 0x0a /* Public */,
      28,    0,  191,    2, 0x0a /* Public */,
      29,    0,  192,    2, 0x0a /* Public */,
      30,    1,  193,    2, 0x0a /* Public */,
      31,    0,  196,    2, 0x0a /* Public */,
      32,    0,  197,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,   17,
    QMetaType::Void, 0x80000000 | 9,   19,
    QMetaType::Void, 0x80000000 | 9,   19,
    QMetaType::Void, 0x80000000 | 6,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   22,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ScanManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScanManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QtFTM::LogMessageCode(*)>(_a[2]))); break;
        case 1: _t->logMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->statusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->peakUpFid((*reinterpret_cast< const Fid(*)>(_a[1]))); break;
        case 4: _t->newFid((*reinterpret_cast< const Fid(*)>(_a[1]))); break;
        case 5: _t->initializeHardwareForScan((*reinterpret_cast< Scan(*)>(_a[1]))); break;
        case 6: _t->initializationComplete(); break;
        case 7: _t->scanFid((*reinterpret_cast< const Fid(*)>(_a[1]))); break;
        case 8: _t->scanShotAcquired(); break;
        case 9: _t->scanComplete((*reinterpret_cast< Scan(*)>(_a[1]))); break;
        case 10: _t->dummyComplete((*reinterpret_cast< Scan(*)>(_a[1]))); break;
        case 11: _t->fatalSaveError(); break;
        case 12: _t->fidReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 13: _t->prepareScan((*reinterpret_cast< Scan(*)>(_a[1]))); break;
        case 14: _t->startScan((*reinterpret_cast< Scan(*)>(_a[1]))); break;
        case 15: _t->peakUpAverage((*reinterpret_cast< const Fid(*)>(_a[1]))); break;
        case 16: _t->setPeakUpAvgs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->resetPeakUpAvgs(); break;
        case 18: _t->acqAverage((*reinterpret_cast< const Fid(*)>(_a[1]))); break;
        case 19: _t->pause(); break;
        case 20: _t->resume(); break;
        case 21: _t->abortScan(); break;
        case 22: _t->setCurrentProbeFreq((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 23: _t->failure(); break;
        case 24: _t->retryScan(); break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScanManager::*)(const QString , const QtFTM::LogMessageCode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanManager::logMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScanManager::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanManager::statusMessage)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ScanManager::*)(const Fid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanManager::peakUpFid)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ScanManager::*)(const Fid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanManager::newFid)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ScanManager::*)(Scan );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanManager::initializeHardwareForScan)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ScanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanManager::initializationComplete)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ScanManager::*)(const Fid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanManager::scanFid)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ScanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanManager::scanShotAcquired)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ScanManager::*)(Scan );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanManager::scanComplete)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ScanManager::*)(Scan );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanManager::dummyComplete)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ScanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanManager::fatalSaveError)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScanManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ScanManager.data,
    qt_meta_data_ScanManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScanManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScanManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScanManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ScanManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void ScanManager::logMessage(const QString _t1, const QtFTM::LogMessageCode _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void ScanManager::statusMessage(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ScanManager::peakUpFid(const Fid _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ScanManager::newFid(const Fid _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ScanManager::initializeHardwareForScan(Scan _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ScanManager::initializationComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ScanManager::scanFid(const Fid _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ScanManager::scanShotAcquired()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ScanManager::scanComplete(Scan _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ScanManager::dummyComplete(Scan _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ScanManager::fatalSaveError()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
