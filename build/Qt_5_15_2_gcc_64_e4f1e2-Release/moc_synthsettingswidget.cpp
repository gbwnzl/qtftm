/****************************************************************************
** Meta object code from reading C++ file 'synthsettingswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../synthsettingswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'synthsettingswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SynthSettingsWidget_t {
    QByteArrayData data[11];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SynthSettingsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SynthSettingsWidget_t qt_meta_stringdata_SynthSettingsWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SynthSettingsWidget"
QT_MOC_LITERAL(1, 20, 11), // "bandChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 18), // "switchPointChanged"
QT_MOC_LITERAL(4, 52, 12), // "loadSettings"
QT_MOC_LITERAL(5, 65, 12), // "saveSettings"
QT_MOC_LITERAL(6, 78, 19), // "updateBandsComboBox"
QT_MOC_LITERAL(7, 98, 12), // "loadBandInfo"
QT_MOC_LITERAL(8, 111, 15), // "bandInfoChanged"
QT_MOC_LITERAL(9, 127, 16), // "saveBandSettings"
QT_MOC_LITERAL(10, 144, 4) // "band"

    },
    "SynthSettingsWidget\0bandChanged\0\0"
    "switchPointChanged\0loadSettings\0"
    "saveSettings\0updateBandsComboBox\0"
    "loadBandInfo\0bandInfoChanged\0"
    "saveBandSettings\0band"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SynthSettingsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    1,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void SynthSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SynthSettingsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bandChanged(); break;
        case 1: _t->switchPointChanged(); break;
        case 2: _t->loadSettings(); break;
        case 3: _t->saveSettings(); break;
        case 4: _t->updateBandsComboBox(); break;
        case 5: _t->loadBandInfo(); break;
        case 6: _t->bandInfoChanged(); break;
        case 7: _t->saveBandSettings((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SynthSettingsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SynthSettingsWidget::bandChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SynthSettingsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SynthSettingsWidget::switchPointChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SynthSettingsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsWidget::staticMetaObject>(),
    qt_meta_stringdata_SynthSettingsWidget.data,
    qt_meta_data_SynthSettingsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SynthSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SynthSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SynthSettingsWidget.stringdata0))
        return static_cast<void*>(this);
    return SettingsWidget::qt_metacast(_clname);
}

int SynthSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsWidget::qt_metacall(_c, _id, _a);
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
void SynthSettingsWidget::bandChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SynthSettingsWidget::switchPointChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
