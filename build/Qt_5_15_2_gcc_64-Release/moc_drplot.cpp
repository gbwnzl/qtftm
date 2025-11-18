/****************************************************************************
** Meta object code from reading C++ file 'drplot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../drplot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DrPlot_t {
    QByteArrayData data[8];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DrPlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DrPlot_t qt_meta_stringdata_DrPlot = {
    {
QT_MOC_LITERAL(0, 0, 6), // "DrPlot"
QT_MOC_LITERAL(1, 7, 11), // "receiveData"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 24), // "QtFTM::BatchPlotMetaData"
QT_MOC_LITERAL(4, 45, 2), // "md"
QT_MOC_LITERAL(5, 48, 24), // "QList<QVector<QPointF> >"
QT_MOC_LITERAL(6, 73, 1), // "d"
QT_MOC_LITERAL(7, 75, 5) // "print"

    },
    "DrPlot\0receiveData\0\0QtFTM::BatchPlotMetaData\0"
    "md\0QList<QVector<QPointF> >\0d\0print"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DrPlot[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       7,    0,   29,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,

       0        // eod
};

void DrPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DrPlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiveData((*reinterpret_cast< QtFTM::BatchPlotMetaData(*)>(_a[1])),(*reinterpret_cast< QList<QVector<QPointF> >(*)>(_a[2]))); break;
        case 1: _t->print(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QVector<QPointF> > >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DrPlot::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractBatchPlot::staticMetaObject>(),
    qt_meta_stringdata_DrPlot.data,
    qt_meta_data_DrPlot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DrPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DrPlot.stringdata0))
        return static_cast<void*>(this);
    return AbstractBatchPlot::qt_metacast(_clname);
}

int DrPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractBatchPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
