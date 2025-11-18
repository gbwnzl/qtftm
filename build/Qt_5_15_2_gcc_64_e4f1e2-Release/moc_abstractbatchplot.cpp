/****************************************************************************
** Meta object code from reading C++ file 'abstractbatchplot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../abstractbatchplot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractbatchplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AbstractBatchPlot_t {
    QByteArrayData data[33];
    char stringdata0[376];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractBatchPlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractBatchPlot_t qt_meta_stringdata_AbstractBatchPlot = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AbstractBatchPlot"
QT_MOC_LITERAL(1, 18, 11), // "requestScan"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "colorChanged"
QT_MOC_LITERAL(4, 44, 11), // "receiveData"
QT_MOC_LITERAL(5, 56, 24), // "QtFTM::BatchPlotMetaData"
QT_MOC_LITERAL(6, 81, 2), // "md"
QT_MOC_LITERAL(7, 84, 24), // "QList<QVector<QPointF> >"
QT_MOC_LITERAL(8, 109, 1), // "d"
QT_MOC_LITERAL(9, 111, 17), // "launchContextMenu"
QT_MOC_LITERAL(10, 129, 3), // "pos"
QT_MOC_LITERAL(11, 133, 8), // "loadScan"
QT_MOC_LITERAL(12, 142, 1), // "x"
QT_MOC_LITERAL(13, 144, 11), // "loadCalScan"
QT_MOC_LITERAL(14, 156, 15), // "setSelectedZone"
QT_MOC_LITERAL(15, 172, 7), // "scanNum"
QT_MOC_LITERAL(16, 180, 18), // "formatSelectedZone"
QT_MOC_LITERAL(17, 199, 13), // "metadataIndex"
QT_MOC_LITERAL(18, 213, 12), // "setZoneWidth"
QT_MOC_LITERAL(19, 226, 16), // "QwtPlotZoneItem*"
QT_MOC_LITERAL(20, 243, 4), // "zone"
QT_MOC_LITERAL(21, 248, 10), // "filterData"
QT_MOC_LITERAL(22, 259, 5), // "print"
QT_MOC_LITERAL(23, 265, 8), // "exportXY"
QT_MOC_LITERAL(24, 274, 17), // "disableReplotting"
QT_MOC_LITERAL(25, 292, 16), // "enableReplotting"
QT_MOC_LITERAL(26, 309, 11), // "toggleCurve"
QT_MOC_LITERAL(27, 321, 4), // "item"
QT_MOC_LITERAL(28, 326, 4), // "hide"
QT_MOC_LITERAL(29, 331, 5), // "index"
QT_MOC_LITERAL(30, 337, 18), // "toggleHideBadZones"
QT_MOC_LITERAL(31, 356, 16), // "togglePlotLabels"
QT_MOC_LITERAL(32, 373, 2) // "on"

    },
    "AbstractBatchPlot\0requestScan\0\0"
    "colorChanged\0receiveData\0"
    "QtFTM::BatchPlotMetaData\0md\0"
    "QList<QVector<QPointF> >\0d\0launchContextMenu\0"
    "pos\0loadScan\0x\0loadCalScan\0setSelectedZone\0"
    "scanNum\0formatSelectedZone\0metadataIndex\0"
    "setZoneWidth\0QwtPlotZoneItem*\0zone\0"
    "filterData\0print\0exportXY\0disableReplotting\0"
    "enableReplotting\0toggleCurve\0item\0"
    "hide\0index\0toggleHideBadZones\0"
    "togglePlotLabels\0on"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractBatchPlot[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       3,    2,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,  107,    2, 0x0a /* Public */,
       9,    1,  112,    2, 0x0a /* Public */,
      11,    1,  115,    2, 0x0a /* Public */,
      13,    1,  118,    2, 0x0a /* Public */,
      14,    1,  121,    2, 0x0a /* Public */,
      16,    1,  124,    2, 0x0a /* Public */,
      18,    2,  127,    2, 0x0a /* Public */,
      21,    0,  132,    2, 0x0a /* Public */,
      22,    0,  133,    2, 0x0a /* Public */,
      23,    0,  134,    2, 0x0a /* Public */,
      24,    0,  135,    2, 0x0a /* Public */,
      25,    0,  136,    2, 0x0a /* Public */,
      26,    3,  137,    2, 0x0a /* Public */,
      30,    1,  144,    2, 0x0a /* Public */,
      31,    1,  147,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void, QMetaType::QPoint,   10,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 5,   20,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool, QMetaType::Int,   27,   28,   29,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   32,

       0        // eod
};

void AbstractBatchPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractBatchPlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestScan((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->colorChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 2: _t->receiveData((*reinterpret_cast< QtFTM::BatchPlotMetaData(*)>(_a[1])),(*reinterpret_cast< QList<QVector<QPointF> >(*)>(_a[2]))); break;
        case 3: _t->launchContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->loadScan((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 5: _t->loadCalScan((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 6: _t->setSelectedZone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->formatSelectedZone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setZoneWidth((*reinterpret_cast< QwtPlotZoneItem*(*)>(_a[1])),(*reinterpret_cast< QtFTM::BatchPlotMetaData(*)>(_a[2]))); break;
        case 9: _t->filterData(); break;
        case 10: _t->print(); break;
        case 11: _t->exportXY(); break;
        case 12: _t->disableReplotting(); break;
        case 13: _t->enableReplotting(); break;
        case 14: _t->toggleCurve((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->toggleHideBadZones((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->togglePlotLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
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
            using _t = void (AbstractBatchPlot::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractBatchPlot::requestScan)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractBatchPlot::*)(QString , QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractBatchPlot::colorChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AbstractBatchPlot::staticMetaObject = { {
    QMetaObject::SuperData::link<ZoomPanPlot::staticMetaObject>(),
    qt_meta_stringdata_AbstractBatchPlot.data,
    qt_meta_data_AbstractBatchPlot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AbstractBatchPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractBatchPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractBatchPlot.stringdata0))
        return static_cast<void*>(this);
    return ZoomPanPlot::qt_metacast(_clname);
}

int AbstractBatchPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ZoomPanPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void AbstractBatchPlot::requestScan(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AbstractBatchPlot::colorChanged(QString _t1, QColor _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
