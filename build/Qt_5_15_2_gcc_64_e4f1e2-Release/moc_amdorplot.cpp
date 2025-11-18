/****************************************************************************
** Meta object code from reading C++ file 'amdorplot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../amdorplot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'amdorplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AmdorPlot_t {
    QByteArrayData data[18];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AmdorPlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AmdorPlot_t qt_meta_stringdata_AmdorPlot = {
    {
QT_MOC_LITERAL(0, 0, 9), // "AmdorPlot"
QT_MOC_LITERAL(1, 10, 10), // "updateData"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 39), // "QPair<QList<QVector<QPointF> ..."
QT_MOC_LITERAL(4, 62, 1), // "l"
QT_MOC_LITERAL(5, 64, 21), // "toggleCurveVisibility"
QT_MOC_LITERAL(6, 86, 4), // "item"
QT_MOC_LITERAL(7, 91, 4), // "hide"
QT_MOC_LITERAL(8, 96, 5), // "index"
QT_MOC_LITERAL(9, 102, 16), // "changeCurveColor"
QT_MOC_LITERAL(10, 119, 13), // "QwtPlotCurve*"
QT_MOC_LITERAL(11, 133, 1), // "c"
QT_MOC_LITERAL(12, 135, 12), // "currentColor"
QT_MOC_LITERAL(13, 148, 17), // "changeCurveSymbol"
QT_MOC_LITERAL(14, 166, 16), // "QwtSymbol::Style"
QT_MOC_LITERAL(15, 183, 3), // "sty"
QT_MOC_LITERAL(16, 187, 15), // "changeCurveSize"
QT_MOC_LITERAL(17, 203, 4) // "size"

    },
    "AmdorPlot\0updateData\0\0"
    "QPair<QList<QVector<QPointF> >,QPointF>\0"
    "l\0toggleCurveVisibility\0item\0hide\0"
    "index\0changeCurveColor\0QwtPlotCurve*\0"
    "c\0currentColor\0changeCurveSymbol\0"
    "QwtSymbol::Style\0sty\0changeCurveSize\0"
    "size"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AmdorPlot[] = {

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
       9,    2,   49,    2, 0x0a /* Public */,
      13,    2,   54,    2, 0x0a /* Public */,
      16,    2,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool, QMetaType::Int,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QColor,   11,   12,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 14,   11,   15,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,   11,   17,

       0        // eod
};

void AmdorPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AmdorPlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateData((*reinterpret_cast< QPair<QList<QVector<QPointF> >,QPointF>(*)>(_a[1]))); break;
        case 1: _t->toggleCurveVisibility((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->changeCurveColor((*reinterpret_cast< QwtPlotCurve*(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 3: _t->changeCurveSymbol((*reinterpret_cast< QwtPlotCurve*(*)>(_a[1])),(*reinterpret_cast< QwtSymbol::Style(*)>(_a[2]))); break;
        case 4: _t->changeCurveSize((*reinterpret_cast< QwtPlotCurve*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AmdorPlot::staticMetaObject = { {
    QMetaObject::SuperData::link<ZoomPanPlot::staticMetaObject>(),
    qt_meta_stringdata_AmdorPlot.data,
    qt_meta_data_AmdorPlot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AmdorPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AmdorPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AmdorPlot.stringdata0))
        return static_cast<void*>(this);
    return ZoomPanPlot::qt_metacast(_clname);
}

int AmdorPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
