/****************************************************************************
** Meta object code from reading C++ file 'batchwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../batchwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batchwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BatchWidget_t {
    QByteArrayData data[24];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BatchWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BatchWidget_t qt_meta_stringdata_BatchWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "BatchWidget"
QT_MOC_LITERAL(1, 12, 12), // "scansChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "amdorDrOnly"
QT_MOC_LITERAL(4, 38, 3), // "drf"
QT_MOC_LITERAL(5, 42, 3), // "drp"
QT_MOC_LITERAL(6, 46, 17), // "requestDrOnlyList"
QT_MOC_LITERAL(7, 64, 11), // "updateLabel"
QT_MOC_LITERAL(8, 76, 17), // "addButtonCallBack"
QT_MOC_LITERAL(9, 94, 20), // "insertButtonCallBack"
QT_MOC_LITERAL(10, 115, 14), // "addCalCallBack"
QT_MOC_LITERAL(11, 130, 17), // "insertCalCallBack"
QT_MOC_LITERAL(12, 148, 13), // "toggleButtons"
QT_MOC_LITERAL(13, 162, 19), // "clearButtonCallBack"
QT_MOC_LITERAL(14, 182, 10), // "deleteRows"
QT_MOC_LITERAL(15, 193, 8), // "editScan"
QT_MOC_LITERAL(16, 202, 10), // "moveRowsUp"
QT_MOC_LITERAL(17, 213, 12), // "moveRowsDown"
QT_MOC_LITERAL(18, 226, 18), // "sortButtonCallBack"
QT_MOC_LITERAL(19, 245, 9), // "parseFile"
QT_MOC_LITERAL(20, 255, 8), // "saveFile"
QT_MOC_LITERAL(21, 264, 13), // "setDrOnlyList"
QT_MOC_LITERAL(22, 278, 28), // "QList<QPair<double,double> >"
QT_MOC_LITERAL(23, 307, 1) // "l"

    },
    "BatchWidget\0scansChanged\0\0amdorDrOnly\0"
    "drf\0drp\0requestDrOnlyList\0updateLabel\0"
    "addButtonCallBack\0insertButtonCallBack\0"
    "addCalCallBack\0insertCalCallBack\0"
    "toggleButtons\0clearButtonCallBack\0"
    "deleteRows\0editScan\0moveRowsUp\0"
    "moveRowsDown\0sortButtonCallBack\0"
    "parseFile\0saveFile\0setDrOnlyList\0"
    "QList<QPair<double,double> >\0l"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BatchWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    2,  105,    2, 0x06 /* Public */,
       6,    0,  110,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  111,    2, 0x0a /* Public */,
       8,    0,  112,    2, 0x0a /* Public */,
       9,    0,  113,    2, 0x0a /* Public */,
      10,    0,  114,    2, 0x0a /* Public */,
      11,    0,  115,    2, 0x0a /* Public */,
      12,    0,  116,    2, 0x0a /* Public */,
      13,    0,  117,    2, 0x0a /* Public */,
      14,    0,  118,    2, 0x0a /* Public */,
      15,    0,  119,    2, 0x0a /* Public */,
      16,    0,  120,    2, 0x0a /* Public */,
      17,    0,  121,    2, 0x0a /* Public */,
      18,    0,  122,    2, 0x0a /* Public */,
      19,    0,  123,    2, 0x0a /* Public */,
      20,    0,  124,    2, 0x0a /* Public */,
      21,    1,  125,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,

       0        // eod
};

void BatchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BatchWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scansChanged(); break;
        case 1: _t->amdorDrOnly((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->requestDrOnlyList(); break;
        case 3: _t->updateLabel(); break;
        case 4: _t->addButtonCallBack(); break;
        case 5: _t->insertButtonCallBack(); break;
        case 6: _t->addCalCallBack(); break;
        case 7: _t->insertCalCallBack(); break;
        case 8: _t->toggleButtons(); break;
        case 9: _t->clearButtonCallBack(); break;
        case 10: _t->deleteRows(); break;
        case 11: _t->editScan(); break;
        case 12: _t->moveRowsUp(); break;
        case 13: _t->moveRowsDown(); break;
        case 14: _t->sortButtonCallBack(); break;
        case 15: _t->parseFile(); break;
        case 16: _t->saveFile(); break;
        case 17: _t->setDrOnlyList((*reinterpret_cast< const QList<QPair<double,double> >(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BatchWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatchWidget::scansChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BatchWidget::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatchWidget::amdorDrOnly)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BatchWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BatchWidget::requestDrOnlyList)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BatchWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_BatchWidget.data,
    qt_meta_data_BatchWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BatchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BatchWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BatchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void BatchWidget::scansChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BatchWidget::amdorDrOnly(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BatchWidget::requestDrOnlyList()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
