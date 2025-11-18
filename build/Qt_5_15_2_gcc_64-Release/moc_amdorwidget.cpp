/****************************************************************************
** Meta object code from reading C++ file 'amdorwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../amdorwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'amdorwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AmdorWidget_t {
    QByteArrayData data[15];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AmdorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AmdorWidget_t qt_meta_stringdata_AmdorWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AmdorWidget"
QT_MOC_LITERAL(1, 12, 16), // "configureButtons"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "enableEditing"
QT_MOC_LITERAL(4, 44, 2), // "en"
QT_MOC_LITERAL(5, 47, 10), // "newRefScan"
QT_MOC_LITERAL(6, 58, 3), // "num"
QT_MOC_LITERAL(7, 62, 2), // "id"
QT_MOC_LITERAL(8, 65, 1), // "i"
QT_MOC_LITERAL(9, 67, 9), // "newDrScan"
QT_MOC_LITERAL(10, 77, 13), // "updateFtPlots"
QT_MOC_LITERAL(11, 91, 12), // "goToLastScan"
QT_MOC_LITERAL(12, 104, 10), // "addLinkage"
QT_MOC_LITERAL(13, 115, 13), // "removeLinkage"
QT_MOC_LITERAL(14, 129, 11) // "exportAscii"

    },
    "AmdorWidget\0configureButtons\0\0"
    "enableEditing\0en\0newRefScan\0num\0id\0i\0"
    "newDrScan\0updateFtPlots\0goToLastScan\0"
    "addLinkage\0removeLinkage\0exportAscii"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AmdorWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    1,   60,    2, 0x0a /* Public */,
       5,    3,   63,    2, 0x0a /* Public */,
       9,    3,   70,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,
      13,    0,   80,    2, 0x0a /* Public */,
      14,    0,   81,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,    6,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AmdorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AmdorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configureButtons(); break;
        case 1: _t->enableEditing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->newRefScan((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 3: _t->newDrScan((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 4: _t->updateFtPlots(); break;
        case 5: _t->goToLastScan(); break;
        case 6: _t->addLinkage(); break;
        case 7: _t->removeLinkage(); break;
        case 8: _t->exportAscii(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AmdorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AmdorWidget.data,
    qt_meta_data_AmdorWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AmdorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AmdorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AmdorWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AmdorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
