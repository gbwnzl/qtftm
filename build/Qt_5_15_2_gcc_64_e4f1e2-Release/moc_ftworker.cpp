/****************************************************************************
** Meta object code from reading C++ file 'ftworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ftworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ftworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FtWorker_t {
    QByteArrayData data[39];
    char stringdata0[337];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FtWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FtWorker_t qt_meta_stringdata_FtWorker = {
    {
QT_MOC_LITERAL(0, 0, 8), // "FtWorker"
QT_MOC_LITERAL(1, 9, 6), // "ftDone"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 16), // "QVector<QPointF>"
QT_MOC_LITERAL(4, 34, 2), // "ft"
QT_MOC_LITERAL(5, 37, 3), // "max"
QT_MOC_LITERAL(6, 41, 7), // "fidDone"
QT_MOC_LITERAL(7, 49, 3), // "fid"
QT_MOC_LITERAL(8, 53, 4), // "doFT"
QT_MOC_LITERAL(9, 58, 30), // "QPair<QVector<QPointF>,double>"
QT_MOC_LITERAL(10, 89, 3), // "Fid"
QT_MOC_LITERAL(11, 93, 10), // "doFT_noPad"
QT_MOC_LITERAL(12, 104, 10), // "offsetOnly"
QT_MOC_LITERAL(13, 115, 8), // "doFT_pad"
QT_MOC_LITERAL(14, 124, 11), // "calculateFT"
QT_MOC_LITERAL(15, 136, 10), // "realPoints"
QT_MOC_LITERAL(16, 147, 23), // "gsl_fft_real_wavetable*"
QT_MOC_LITERAL(17, 171, 2), // "wt"
QT_MOC_LITERAL(18, 174, 23), // "gsl_fft_real_workspace*"
QT_MOC_LITERAL(19, 198, 2), // "ws"
QT_MOC_LITERAL(20, 201, 9), // "filterFid"
QT_MOC_LITERAL(21, 211, 1), // "f"
QT_MOC_LITERAL(22, 213, 6), // "padFid"
QT_MOC_LITERAL(23, 220, 8), // "makeWinf"
QT_MOC_LITERAL(24, 229, 1), // "n"
QT_MOC_LITERAL(25, 231, 8), // "setDelay"
QT_MOC_LITERAL(26, 240, 1), // "d"
QT_MOC_LITERAL(27, 242, 6), // "setHpf"
QT_MOC_LITERAL(28, 249, 6), // "setExp"
QT_MOC_LITERAL(29, 256, 10), // "setAutoPad"
QT_MOC_LITERAL(30, 267, 1), // "b"
QT_MOC_LITERAL(31, 269, 11), // "setRemoveDC"
QT_MOC_LITERAL(32, 281, 12), // "setUseWindow"
QT_MOC_LITERAL(33, 294, 5), // "delay"
QT_MOC_LITERAL(34, 300, 3), // "hpf"
QT_MOC_LITERAL(35, 304, 3), // "exp"
QT_MOC_LITERAL(36, 308, 7), // "autoPad"
QT_MOC_LITERAL(37, 316, 8), // "removeDC"
QT_MOC_LITERAL(38, 325, 11) // "isUseWindow"

    },
    "FtWorker\0ftDone\0\0QVector<QPointF>\0ft\0"
    "max\0fidDone\0fid\0doFT\0"
    "QPair<QVector<QPointF>,double>\0Fid\0"
    "doFT_noPad\0offsetOnly\0doFT_pad\0"
    "calculateFT\0realPoints\0gsl_fft_real_wavetable*\0"
    "wt\0gsl_fft_real_workspace*\0ws\0filterFid\0"
    "f\0padFid\0makeWinf\0n\0setDelay\0d\0setHpf\0"
    "setExp\0setAutoPad\0b\0setRemoveDC\0"
    "setUseWindow\0delay\0hpf\0exp\0autoPad\0"
    "removeDC\0isUseWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FtWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  134,    2, 0x06 /* Public */,
       6,    1,  139,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  142,    2, 0x0a /* Public */,
      11,    2,  145,    2, 0x0a /* Public */,
      11,    1,  150,    2, 0x2a /* Public | MethodCloned */,
      13,    2,  153,    2, 0x0a /* Public */,
      13,    1,  158,    2, 0x2a /* Public | MethodCloned */,
      14,    5,  161,    2, 0x0a /* Public */,
      14,    4,  172,    2, 0x2a /* Public | MethodCloned */,
      20,    1,  181,    2, 0x0a /* Public */,
      22,    1,  184,    2, 0x0a /* Public */,
      23,    1,  187,    2, 0x0a /* Public */,
      25,    1,  190,    2, 0x0a /* Public */,
      27,    1,  193,    2, 0x0a /* Public */,
      28,    1,  196,    2, 0x0a /* Public */,
      29,    1,  199,    2, 0x0a /* Public */,
      31,    1,  202,    2, 0x0a /* Public */,
      32,    1,  205,    2, 0x0a /* Public */,
      33,    0,  208,    2, 0x0a /* Public */,
      34,    0,  209,    2, 0x0a /* Public */,
      35,    0,  210,    2, 0x0a /* Public */,
      36,    0,  211,    2, 0x0a /* Public */,
      37,    0,  212,    2, 0x0a /* Public */,
      38,    0,  213,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    7,

 // slots: parameters
    0x80000000 | 9, 0x80000000 | 10,    7,
    0x80000000 | 3, 0x80000000 | 10, QMetaType::Bool,    7,   12,
    0x80000000 | 3, 0x80000000 | 10,    7,
    0x80000000 | 3, 0x80000000 | 10, QMetaType::Bool,    7,   12,
    0x80000000 | 3, 0x80000000 | 10,    7,
    0x80000000 | 3, 0x80000000 | 10, QMetaType::Int, 0x80000000 | 16, 0x80000000 | 18, QMetaType::Bool,    7,   15,   17,   19,   12,
    0x80000000 | 3, 0x80000000 | 10, QMetaType::Int, 0x80000000 | 16, 0x80000000 | 18,    7,   15,   17,   19,
    0x80000000 | 10, 0x80000000 | 10,   21,
    0x80000000 | 10, 0x80000000 | 10,   21,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Double,   26,
    QMetaType::Void, QMetaType::Double,   26,
    QMetaType::Void, QMetaType::Double,   26,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,

       0        // eod
};

void FtWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FtWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ftDone((*reinterpret_cast< QVector<QPointF>(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->fidDone((*reinterpret_cast< QVector<QPointF>(*)>(_a[1]))); break;
        case 2: { QPair<QVector<QPointF>,double> _r = _t->doFT((*reinterpret_cast< const Fid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPair<QVector<QPointF>,double>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QVector<QPointF> _r = _t->doFT_noPad((*reinterpret_cast< const Fid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<QPointF>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVector<QPointF> _r = _t->doFT_noPad((*reinterpret_cast< const Fid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QPointF>*>(_a[0]) = std::move(_r); }  break;
        case 5: { QVector<QPointF> _r = _t->doFT_pad((*reinterpret_cast< const Fid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<QPointF>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QVector<QPointF> _r = _t->doFT_pad((*reinterpret_cast< const Fid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QPointF>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QVector<QPointF> _r = _t->calculateFT((*reinterpret_cast< const Fid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< gsl_fft_real_wavetable*(*)>(_a[3])),(*reinterpret_cast< gsl_fft_real_workspace*(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QVector<QPointF>*>(_a[0]) = std::move(_r); }  break;
        case 8: { QVector<QPointF> _r = _t->calculateFT((*reinterpret_cast< const Fid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< gsl_fft_real_wavetable*(*)>(_a[3])),(*reinterpret_cast< gsl_fft_real_workspace*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVector<QPointF>*>(_a[0]) = std::move(_r); }  break;
        case 9: { Fid _r = _t->filterFid((*reinterpret_cast< const Fid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Fid*>(_a[0]) = std::move(_r); }  break;
        case 10: { Fid _r = _t->padFid((*reinterpret_cast< const Fid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Fid*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->makeWinf((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setDelay((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 13: _t->setHpf((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 14: _t->setExp((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 15: _t->setAutoPad((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->setRemoveDC((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->setUseWindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: { double _r = _t->delay();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 19: { double _r = _t->hpf();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 20: { double _r = _t->exp();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 21: { bool _r = _t->autoPad();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: { bool _r = _t->removeDC();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: { bool _r = _t->isUseWindow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPointF> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPointF> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FtWorker::*)(QVector<QPointF> , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FtWorker::ftDone)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FtWorker::*)(QVector<QPointF> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FtWorker::fidDone)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FtWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FtWorker.data,
    qt_meta_data_FtWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FtWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FtWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FtWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FtWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void FtWorker::ftDone(QVector<QPointF> _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FtWorker::fidDone(QVector<QPointF> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
