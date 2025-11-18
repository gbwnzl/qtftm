/****************************************************************************
** Meta object code from reading C++ file 'zoompanplot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../zoompanplot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zoompanplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ZoomPanPlot_t {
    QByteArrayData data[12];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZoomPanPlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZoomPanPlot_t qt_meta_stringdata_ZoomPanPlot = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ZoomPanPlot"
QT_MOC_LITERAL(1, 12, 14), // "panningStarted"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "panningFinished"
QT_MOC_LITERAL(4, 44, 16), // "plotRightClicked"
QT_MOC_LITERAL(5, 61, 3), // "pos"
QT_MOC_LITERAL(6, 65, 9), // "autoScale"
QT_MOC_LITERAL(7, 75, 6), // "replot"
QT_MOC_LITERAL(8, 82, 13), // "setZoomFactor"
QT_MOC_LITERAL(9, 96, 13), // "QwtPlot::Axis"
QT_MOC_LITERAL(10, 110, 1), // "a"
QT_MOC_LITERAL(11, 112, 1) // "v"

    },
    "ZoomPanPlot\0panningStarted\0\0panningFinished\0"
    "plotRightClicked\0pos\0autoScale\0replot\0"
    "setZoomFactor\0QwtPlot::Axis\0a\0v"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZoomPanPlot[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   49,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    2,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Double,   10,   11,

       0        // eod
};

void ZoomPanPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ZoomPanPlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->panningStarted(); break;
        case 1: _t->panningFinished(); break;
        case 2: _t->plotRightClicked((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->autoScale(); break;
        case 4: _t->replot(); break;
        case 5: _t->setZoomFactor((*reinterpret_cast< QwtPlot::Axis(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QwtPlot::Axis >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ZoomPanPlot::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZoomPanPlot::panningStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ZoomPanPlot::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZoomPanPlot::panningFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ZoomPanPlot::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZoomPanPlot::plotRightClicked)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ZoomPanPlot::staticMetaObject = { {
    QMetaObject::SuperData::link<QwtPlot::staticMetaObject>(),
    qt_meta_stringdata_ZoomPanPlot.data,
    qt_meta_data_ZoomPanPlot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ZoomPanPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZoomPanPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZoomPanPlot.stringdata0))
        return static_cast<void*>(this);
    return QwtPlot::qt_metacast(_clname);
}

int ZoomPanPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ZoomPanPlot::panningStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ZoomPanPlot::panningFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ZoomPanPlot::plotRightClicked(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
