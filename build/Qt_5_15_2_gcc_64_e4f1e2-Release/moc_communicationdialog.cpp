/****************************************************************************
** Meta object code from reading C++ file 'communicationdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../communicationdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'communicationdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CommunicationDialog_t {
    QByteArrayData data[14];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommunicationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommunicationDialog_t qt_meta_stringdata_CommunicationDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "CommunicationDialog"
QT_MOC_LITERAL(1, 20, 14), // "testConnection"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 17), // "gpibDeviceChanged"
QT_MOC_LITERAL(4, 54, 5), // "index"
QT_MOC_LITERAL(5, 60, 16), // "tcpDeviceChanged"
QT_MOC_LITERAL(6, 77, 18), // "rs232DeviceChanged"
QT_MOC_LITERAL(7, 96, 8), // "testGpib"
QT_MOC_LITERAL(8, 105, 7), // "testTcp"
QT_MOC_LITERAL(9, 113, 9), // "testRs232"
QT_MOC_LITERAL(10, 123, 12), // "testComplete"
QT_MOC_LITERAL(11, 136, 6), // "device"
QT_MOC_LITERAL(12, 143, 7), // "success"
QT_MOC_LITERAL(13, 151, 3) // "msg"

    },
    "CommunicationDialog\0testConnection\0\0"
    "gpibDeviceChanged\0index\0tcpDeviceChanged\0"
    "rs232DeviceChanged\0testGpib\0testTcp\0"
    "testRs232\0testComplete\0device\0success\0"
    "msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommunicationDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   59,    2, 0x0a /* Public */,
       5,    1,   62,    2, 0x0a /* Public */,
       6,    1,   65,    2, 0x0a /* Public */,
       7,    0,   68,    2, 0x0a /* Public */,
       8,    0,   69,    2, 0x0a /* Public */,
       9,    0,   70,    2, 0x0a /* Public */,
      10,    3,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString,   11,   12,   13,

       0        // eod
};

void CommunicationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CommunicationDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testConnection((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->gpibDeviceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->tcpDeviceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->rs232DeviceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->testGpib(); break;
        case 5: _t->testTcp(); break;
        case 6: _t->testRs232(); break;
        case 7: _t->testComplete((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CommunicationDialog::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommunicationDialog::testConnection)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CommunicationDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CommunicationDialog.data,
    qt_meta_data_CommunicationDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CommunicationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommunicationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommunicationDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CommunicationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void CommunicationDialog::testConnection(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
