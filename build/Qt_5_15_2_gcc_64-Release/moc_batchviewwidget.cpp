/****************************************************************************
** Meta object code from reading C++ file 'batchviewwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../batchviewwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batchviewwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BatchViewWidget_t {
    QByteArrayData data[7];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BatchViewWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BatchViewWidget_t qt_meta_stringdata_BatchViewWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "BatchViewWidget"
QT_MOC_LITERAL(1, 16, 15), // "metaDataChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 23), // "checkForMetaDataChanged"
QT_MOC_LITERAL(4, 57, 7), // "process"
QT_MOC_LITERAL(5, 65, 18), // "processingComplete"
QT_MOC_LITERAL(6, 84, 7) // "failure"

    },
    "BatchViewWidget\0metaDataChanged\0\0"
    "checkForMetaDataChanged\0process\0"
    "processingComplete\0failure"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BatchViewWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   40,    2, 0x0a /* Public */,
       5,    1,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void BatchViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BatchViewWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->metaDataChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->checkForMetaDataChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->process(); break;
        case 3: _t->processingComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BatchViewWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatchViewWidget::metaDataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BatchViewWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatchViewWidget::checkForMetaDataChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BatchViewWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_BatchViewWidget.data,
    qt_meta_data_BatchViewWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BatchViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatchViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BatchViewWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BatchViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void BatchViewWidget::metaDataChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BatchViewWidget::checkForMetaDataChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
