/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[86];
    char stringdata0[1138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "changeGasName"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "setFlowSetpoint"
QT_MOC_LITERAL(4, 42, 1), // "i"
QT_MOC_LITERAL(5, 44, 1), // "d"
QT_MOC_LITERAL(6, 46, 17), // "pGenSettingUpdate"
QT_MOC_LITERAL(7, 64, 2), // "ch"
QT_MOC_LITERAL(8, 67, 19), // "QtFTM::PulseSetting"
QT_MOC_LITERAL(9, 87, 1), // "s"
QT_MOC_LITERAL(10, 89, 3), // "val"
QT_MOC_LITERAL(11, 93, 22), // "scopeResolutionChanged"
QT_MOC_LITERAL(12, 116, 7), // "closing"
QT_MOC_LITERAL(13, 124, 21), // "updateScanProgressBar"
QT_MOC_LITERAL(14, 146, 22), // "updateBatchProgressBar"
QT_MOC_LITERAL(15, 169, 14), // "updateUiConfig"
QT_MOC_LITERAL(16, 184, 15), // "saveLogCallback"
QT_MOC_LITERAL(17, 200, 18), // "logOnErrorCallback"
QT_MOC_LITERAL(18, 219, 12), // "scanStarting"
QT_MOC_LITERAL(19, 232, 4), // "Scan"
QT_MOC_LITERAL(20, 237, 5), // "isCal"
QT_MOC_LITERAL(21, 243, 13), // "batchComplete"
QT_MOC_LITERAL(22, 257, 7), // "aborted"
QT_MOC_LITERAL(23, 265, 8), // "pauseAcq"
QT_MOC_LITERAL(24, 274, 9), // "resumeAcq"
QT_MOC_LITERAL(25, 284, 20), // "synthSettingsChanged"
QT_MOC_LITERAL(26, 305, 15), // "ftmCavityUpdate"
QT_MOC_LITERAL(27, 321, 1), // "f"
QT_MOC_LITERAL(28, 323, 14), // "ftmProbeUpdate"
QT_MOC_LITERAL(29, 338, 17), // "drSynthFreqUpdate"
QT_MOC_LITERAL(30, 356, 16), // "drSynthPwrUpdate"
QT_MOC_LITERAL(31, 373, 1), // "p"
QT_MOC_LITERAL(32, 375, 10), // "attnUpdate"
QT_MOC_LITERAL(33, 386, 1), // "a"
QT_MOC_LITERAL(34, 388, 12), // "taattnUpdate"
QT_MOC_LITERAL(35, 401, 11), // "setcvUpdate"
QT_MOC_LITERAL(36, 413, 12), // "magnetUpdate"
QT_MOC_LITERAL(37, 426, 3), // "mag"
QT_MOC_LITERAL(38, 430, 17), // "viewBatchCallback"
QT_MOC_LITERAL(39, 448, 15), // "mirrorPosUpdate"
QT_MOC_LITERAL(40, 464, 3), // "pos"
QT_MOC_LITERAL(41, 468, 14), // "updateFlowName"
QT_MOC_LITERAL(42, 483, 4), // "name"
QT_MOC_LITERAL(43, 488, 10), // "updateFlow"
QT_MOC_LITERAL(44, 499, 18), // "updateFlowSetpoint"
QT_MOC_LITERAL(45, 518, 22), // "pressureSetpointUpdate"
QT_MOC_LITERAL(46, 541, 19), // "pressureControlMode"
QT_MOC_LITERAL(47, 561, 2), // "en"
QT_MOC_LITERAL(48, 564, 18), // "singleScanCallback"
QT_MOC_LITERAL(49, 583, 17), // "batchScanCallback"
QT_MOC_LITERAL(50, 601, 5), // "sleep"
QT_MOC_LITERAL(51, 607, 1), // "b"
QT_MOC_LITERAL(52, 609, 12), // "delayedSleep"
QT_MOC_LITERAL(53, 622, 21), // "hardwareStatusChanged"
QT_MOC_LITERAL(54, 644, 7), // "success"
QT_MOC_LITERAL(55, 652, 25), // "launchCommunicationDialog"
QT_MOC_LITERAL(56, 678, 16), // "launchFtSettings"
QT_MOC_LITERAL(57, 695, 16), // "launchDrSettings"
QT_MOC_LITERAL(58, 712, 21), // "launchIOBoardSettings"
QT_MOC_LITERAL(59, 734, 17), // "resolutionChanged"
QT_MOC_LITERAL(60, 752, 22), // "QtFTM::ScopeResolution"
QT_MOC_LITERAL(61, 775, 3), // "res"
QT_MOC_LITERAL(62, 779, 14), // "tuningComplete"
QT_MOC_LITERAL(63, 794, 18), // "tuneCavityCallback"
QT_MOC_LITERAL(64, 813, 23), // "calibrateCavityCallback"
QT_MOC_LITERAL(65, 837, 11), // "modeChanged"
QT_MOC_LITERAL(66, 849, 4), // "mode"
QT_MOC_LITERAL(67, 854, 14), // "tuneUpCallback"
QT_MOC_LITERAL(68, 869, 16), // "tuneDownCallback"
QT_MOC_LITERAL(69, 886, 20), // "tuningVoltageChanged"
QT_MOC_LITERAL(70, 907, 1), // "v"
QT_MOC_LITERAL(71, 909, 17), // "setHardwareRanges"
QT_MOC_LITERAL(72, 927, 22), // "changeAttnFileCallback"
QT_MOC_LITERAL(73, 950, 15), // "attnFileSuccess"
QT_MOC_LITERAL(74, 966, 20), // "genAttnTableCallback"
QT_MOC_LITERAL(75, 987, 21), // "attnTablePrepComplete"
QT_MOC_LITERAL(76, 1009, 22), // "attnTableBatchComplete"
QT_MOC_LITERAL(77, 1032, 10), // "setLogIcon"
QT_MOC_LITERAL(78, 1043, 21), // "QtFTM::LogMessageCode"
QT_MOC_LITERAL(79, 1065, 1), // "c"
QT_MOC_LITERAL(80, 1067, 15), // "updatePulseLeds"
QT_MOC_LITERAL(81, 1083, 14), // "PulseGenConfig"
QT_MOC_LITERAL(82, 1098, 2), // "cc"
QT_MOC_LITERAL(83, 1101, 14), // "updatePulseLed"
QT_MOC_LITERAL(84, 1116, 5), // "index"
QT_MOC_LITERAL(85, 1122, 15) // "dcVoltageUpdate"

    },
    "MainWindow\0changeGasName\0\0setFlowSetpoint\0"
    "i\0d\0pGenSettingUpdate\0ch\0QtFTM::PulseSetting\0"
    "s\0val\0scopeResolutionChanged\0closing\0"
    "updateScanProgressBar\0updateBatchProgressBar\0"
    "updateUiConfig\0saveLogCallback\0"
    "logOnErrorCallback\0scanStarting\0Scan\0"
    "isCal\0batchComplete\0aborted\0pauseAcq\0"
    "resumeAcq\0synthSettingsChanged\0"
    "ftmCavityUpdate\0f\0ftmProbeUpdate\0"
    "drSynthFreqUpdate\0drSynthPwrUpdate\0p\0"
    "attnUpdate\0a\0taattnUpdate\0setcvUpdate\0"
    "magnetUpdate\0mag\0viewBatchCallback\0"
    "mirrorPosUpdate\0pos\0updateFlowName\0"
    "name\0updateFlow\0updateFlowSetpoint\0"
    "pressureSetpointUpdate\0pressureControlMode\0"
    "en\0singleScanCallback\0batchScanCallback\0"
    "sleep\0b\0delayedSleep\0hardwareStatusChanged\0"
    "success\0launchCommunicationDialog\0"
    "launchFtSettings\0launchDrSettings\0"
    "launchIOBoardSettings\0resolutionChanged\0"
    "QtFTM::ScopeResolution\0res\0tuningComplete\0"
    "tuneCavityCallback\0calibrateCavityCallback\0"
    "modeChanged\0mode\0tuneUpCallback\0"
    "tuneDownCallback\0tuningVoltageChanged\0"
    "v\0setHardwareRanges\0changeAttnFileCallback\0"
    "attnFileSuccess\0genAttnTableCallback\0"
    "attnTablePrepComplete\0attnTableBatchComplete\0"
    "setLogIcon\0QtFTM::LogMessageCode\0c\0"
    "updatePulseLeds\0PulseGenConfig\0cc\0"
    "updatePulseLed\0index\0dcVoltageUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      57,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  299,    2, 0x06 /* Public */,
       3,    2,  304,    2, 0x06 /* Public */,
       6,    3,  309,    2, 0x06 /* Public */,
      11,    0,  316,    2, 0x06 /* Public */,
      12,    0,  317,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  318,    2, 0x0a /* Public */,
      14,    0,  319,    2, 0x0a /* Public */,
      15,    0,  320,    2, 0x0a /* Public */,
      16,    0,  321,    2, 0x0a /* Public */,
      17,    1,  322,    2, 0x0a /* Public */,
      18,    2,  325,    2, 0x0a /* Public */,
      21,    1,  330,    2, 0x0a /* Public */,
      23,    0,  333,    2, 0x0a /* Public */,
      24,    0,  334,    2, 0x0a /* Public */,
      25,    0,  335,    2, 0x0a /* Public */,
      26,    1,  336,    2, 0x0a /* Public */,
      28,    1,  339,    2, 0x0a /* Public */,
      29,    1,  342,    2, 0x0a /* Public */,
      30,    1,  345,    2, 0x0a /* Public */,
      32,    1,  348,    2, 0x0a /* Public */,
      34,    1,  351,    2, 0x0a /* Public */,
      35,    1,  354,    2, 0x0a /* Public */,
      36,    1,  357,    2, 0x0a /* Public */,
      38,    0,  360,    2, 0x0a /* Public */,
      39,    1,  361,    2, 0x0a /* Public */,
      41,    2,  364,    2, 0x0a /* Public */,
      43,    2,  369,    2, 0x0a /* Public */,
      44,    2,  374,    2, 0x0a /* Public */,
      45,    1,  379,    2, 0x0a /* Public */,
      46,    1,  382,    2, 0x0a /* Public */,
      48,    0,  385,    2, 0x0a /* Public */,
      49,    0,  386,    2, 0x0a /* Public */,
      50,    1,  387,    2, 0x0a /* Public */,
      52,    0,  390,    2, 0x0a /* Public */,
      53,    1,  391,    2, 0x0a /* Public */,
      55,    0,  394,    2, 0x0a /* Public */,
      56,    0,  395,    2, 0x0a /* Public */,
      57,    0,  396,    2, 0x0a /* Public */,
      58,    0,  397,    2, 0x0a /* Public */,
      59,    1,  398,    2, 0x0a /* Public */,
      62,    0,  401,    2, 0x0a /* Public */,
      63,    0,  402,    2, 0x0a /* Public */,
      64,    0,  403,    2, 0x0a /* Public */,
      65,    1,  404,    2, 0x0a /* Public */,
      67,    0,  407,    2, 0x0a /* Public */,
      68,    0,  408,    2, 0x0a /* Public */,
      69,    1,  409,    2, 0x0a /* Public */,
      71,    0,  412,    2, 0x0a /* Public */,
      72,    0,  413,    2, 0x0a /* Public */,
      73,    1,  414,    2, 0x0a /* Public */,
      74,    0,  417,    2, 0x0a /* Public */,
      75,    1,  418,    2, 0x0a /* Public */,
      76,    1,  421,    2, 0x0a /* Public */,
      77,    1,  424,    2, 0x0a /* Public */,
      80,    1,  427,    2, 0x0a /* Public */,
      83,    3,  430,    2, 0x0a /* Public */,
      85,    1,  437,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    4,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8, QMetaType::QVariant,    7,    9,   10,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 19, QMetaType::Bool,    9,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   27,
    QMetaType::Void, QMetaType::Double,   27,
    QMetaType::Void, QMetaType::Double,   27,
    QMetaType::Void, QMetaType::Double,   31,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,   42,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    7,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    7,   10,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 60,   61,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   66,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   70,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, 0x80000000 | 78,   79,
    QMetaType::Void, 0x80000000 | 81,   82,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8, QMetaType::QVariant,   84,    9,   10,
    QMetaType::Void, QMetaType::Int,   70,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeGasName((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->setFlowSetpoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->pGenSettingUpdate((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QtFTM::PulseSetting(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 3: _t->scopeResolutionChanged(); break;
        case 4: _t->closing(); break;
        case 5: _t->updateScanProgressBar(); break;
        case 6: _t->updateBatchProgressBar(); break;
        case 7: _t->updateUiConfig(); break;
        case 8: _t->saveLogCallback(); break;
        case 9: _t->logOnErrorCallback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->scanStarting((*reinterpret_cast< Scan(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->batchComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->pauseAcq(); break;
        case 13: _t->resumeAcq(); break;
        case 14: _t->synthSettingsChanged(); break;
        case 15: _t->ftmCavityUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->ftmProbeUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->drSynthFreqUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->drSynthPwrUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->attnUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->taattnUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->setcvUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->magnetUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->viewBatchCallback(); break;
        case 24: _t->mirrorPosUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->updateFlowName((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 26: _t->updateFlow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 27: _t->updateFlowSetpoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 28: _t->pressureSetpointUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 29: _t->pressureControlMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->singleScanCallback(); break;
        case 31: _t->batchScanCallback(); break;
        case 32: _t->sleep((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->delayedSleep(); break;
        case 34: _t->hardwareStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->launchCommunicationDialog(); break;
        case 36: _t->launchFtSettings(); break;
        case 37: _t->launchDrSettings(); break;
        case 38: _t->launchIOBoardSettings(); break;
        case 39: _t->resolutionChanged((*reinterpret_cast< QtFTM::ScopeResolution(*)>(_a[1]))); break;
        case 40: _t->tuningComplete(); break;
        case 41: _t->tuneCavityCallback(); break;
        case 42: _t->calibrateCavityCallback(); break;
        case 43: _t->modeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->tuneUpCallback(); break;
        case 45: _t->tuneDownCallback(); break;
        case 46: _t->tuningVoltageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->setHardwareRanges(); break;
        case 48: _t->changeAttnFileCallback(); break;
        case 49: _t->attnFileSuccess((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->genAttnTableCallback(); break;
        case 51: _t->attnTablePrepComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->attnTableBatchComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->setLogIcon((*reinterpret_cast< QtFTM::LogMessageCode(*)>(_a[1]))); break;
        case 54: _t->updatePulseLeds((*reinterpret_cast< const PulseGenConfig(*)>(_a[1]))); break;
        case 55: _t->updatePulseLed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QtFTM::PulseSetting(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 56: _t->dcVoltageUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtFTM::ScopeResolution >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtFTM::LogMessageCode >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::changeGasName)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::setFlowSetpoint)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const int , const QtFTM::PulseSetting , const QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::pGenSettingUpdate)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::scopeResolutionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::closing)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::changeGasName(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::setFlowSetpoint(int _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::pGenSettingUpdate(const int _t1, const QtFTM::PulseSetting _t2, const QVariant _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::scopeResolutionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainWindow::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
