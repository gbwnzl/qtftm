/****************************************************************************
** Meta object code from reading C++ file 'hardwaremanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../hardwaremanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hardwaremanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HardwareManager_t {
    QByteArrayData data[126];
    char stringdata0[1791];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HardwareManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HardwareManager_t qt_meta_stringdata_HardwareManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "HardwareManager"
QT_MOC_LITERAL(1, 16, 15), // "scanInitialized"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "Scan"
QT_MOC_LITERAL(4, 38, 1), // "s"
QT_MOC_LITERAL(5, 40, 14), // "ftmSynthUpdate"
QT_MOC_LITERAL(6, 55, 1), // "f"
QT_MOC_LITERAL(7, 57, 24), // "ftmSynthChangeBandFromUi"
QT_MOC_LITERAL(8, 82, 15), // "probeFreqUpdate"
QT_MOC_LITERAL(9, 98, 17), // "synthRangeChanged"
QT_MOC_LITERAL(10, 116, 17), // "drSynthFreqUpdate"
QT_MOC_LITERAL(11, 134, 16), // "drSynthPwrUpdate"
QT_MOC_LITERAL(12, 151, 1), // "p"
QT_MOC_LITERAL(13, 153, 23), // "drSynthChangeBandFromUi"
QT_MOC_LITERAL(14, 177, 11), // "attenUpdate"
QT_MOC_LITERAL(15, 189, 1), // "a"
QT_MOC_LITERAL(16, 191, 13), // "taattenUpdate"
QT_MOC_LITERAL(17, 205, 10), // "flowUpdate"
QT_MOC_LITERAL(18, 216, 14), // "flowNameUpdate"
QT_MOC_LITERAL(19, 231, 14), // "pressureUpdate"
QT_MOC_LITERAL(20, 246, 18), // "flowSetpointUpdate"
QT_MOC_LITERAL(21, 265, 22), // "pressureSetpointUpdate"
QT_MOC_LITERAL(22, 288, 15), // "setFlowSetpoint"
QT_MOC_LITERAL(23, 304, 1), // "i"
QT_MOC_LITERAL(24, 306, 3), // "val"
QT_MOC_LITERAL(25, 310, 19), // "setPressureSetpoint"
QT_MOC_LITERAL(26, 330, 10), // "setGasName"
QT_MOC_LITERAL(27, 341, 19), // "pressureControlMode"
QT_MOC_LITERAL(28, 361, 22), // "setPressureControlMode"
QT_MOC_LITERAL(29, 384, 17), // "scopeWaveAcquired"
QT_MOC_LITERAL(30, 402, 15), // "mirrorPosUpdate"
QT_MOC_LITERAL(31, 418, 3), // "pos"
QT_MOC_LITERAL(32, 422, 19), // "updateMotorSettings"
QT_MOC_LITERAL(33, 442, 18), // "pGenChannelSetting"
QT_MOC_LITERAL(34, 461, 19), // "QtFTM::PulseSetting"
QT_MOC_LITERAL(35, 481, 16), // "pGenConfigUpdate"
QT_MOC_LITERAL(36, 498, 14), // "PulseGenConfig"
QT_MOC_LITERAL(37, 513, 10), // "logMessage"
QT_MOC_LITERAL(38, 524, 21), // "QtFTM::LogMessageCode"
QT_MOC_LITERAL(39, 546, 13), // "statusMessage"
QT_MOC_LITERAL(40, 560, 20), // "allHardwareConnected"
QT_MOC_LITERAL(41, 581, 12), // "testComplete"
QT_MOC_LITERAL(42, 594, 14), // "tuningComplete"
QT_MOC_LITERAL(43, 609, 9), // "canTuneUp"
QT_MOC_LITERAL(44, 619, 11), // "canTuneDown"
QT_MOC_LITERAL(45, 631, 11), // "modeChanged"
QT_MOC_LITERAL(46, 643, 20), // "tuningVoltageChanged"
QT_MOC_LITERAL(47, 664, 15), // "attnLoadSuccess"
QT_MOC_LITERAL(48, 680, 21), // "attnTablePrepComplete"
QT_MOC_LITERAL(49, 702, 22), // "setFtmCavityFreqFromUI"
QT_MOC_LITERAL(50, 725, 13), // "setAttnFromUI"
QT_MOC_LITERAL(51, 739, 20), // "setDrSynthFreqFromUI"
QT_MOC_LITERAL(52, 760, 19), // "setDrSynthPwrFromUI"
QT_MOC_LITERAL(53, 780, 15), // "setPulseSetting"
QT_MOC_LITERAL(54, 796, 2), // "ch"
QT_MOC_LITERAL(55, 799, 1), // "x"
QT_MOC_LITERAL(56, 801, 10), // "setRepRate"
QT_MOC_LITERAL(57, 812, 13), // "repRateUpdate"
QT_MOC_LITERAL(58, 826, 24), // "setProtectionDelayFromUI"
QT_MOC_LITERAL(59, 851, 19), // "setScopeDelayFromUI"
QT_MOC_LITERAL(60, 871, 23), // "hmProtectionDelayUpdate"
QT_MOC_LITERAL(61, 895, 18), // "hmScopeDelayUpdate"
QT_MOC_LITERAL(62, 914, 18), // "setDcVoltageFromUI"
QT_MOC_LITERAL(63, 933, 15), // "dcVoltageUpdate"
QT_MOC_LITERAL(64, 949, 7), // "failure"
QT_MOC_LITERAL(65, 957, 15), // "setMagnetFromUI"
QT_MOC_LITERAL(66, 973, 12), // "magnetUpdate"
QT_MOC_LITERAL(67, 986, 9), // "retryScan"
QT_MOC_LITERAL(68, 996, 18), // "initializeHardware"
QT_MOC_LITERAL(69, 1015, 16), // "connectionResult"
QT_MOC_LITERAL(70, 1032, 15), // "HardwareObject*"
QT_MOC_LITERAL(71, 1048, 3), // "obj"
QT_MOC_LITERAL(72, 1052, 7), // "success"
QT_MOC_LITERAL(73, 1060, 3), // "msg"
QT_MOC_LITERAL(74, 1064, 20), // "testObjectConnection"
QT_MOC_LITERAL(75, 1085, 4), // "type"
QT_MOC_LITERAL(76, 1090, 3), // "key"
QT_MOC_LITERAL(77, 1094, 15), // "hardwareFailure"
QT_MOC_LITERAL(78, 1110, 14), // "changeAttnFile"
QT_MOC_LITERAL(79, 1125, 8), // "fileName"
QT_MOC_LITERAL(80, 1134, 22), // "configurePGenForTuning"
QT_MOC_LITERAL(81, 1157, 14), // "setPulseConfig"
QT_MOC_LITERAL(82, 1172, 1), // "c"
QT_MOC_LITERAL(83, 1174, 21), // "goToFtmSynthProbeFreq"
QT_MOC_LITERAL(84, 1196, 22), // "goToFtmSynthCavityFreq"
QT_MOC_LITERAL(85, 1219, 21), // "setFtmSynthCavityFreq"
QT_MOC_LITERAL(86, 1241, 1), // "d"
QT_MOC_LITERAL(87, 1243, 23), // "readCavityTuningVoltage"
QT_MOC_LITERAL(88, 1267, 19), // "readTuneAttenuation"
QT_MOC_LITERAL(89, 1287, 18), // "setFlowChannelName"
QT_MOC_LITERAL(90, 1306, 5), // "index"
QT_MOC_LITERAL(91, 1312, 4), // "name"
QT_MOC_LITERAL(92, 1317, 18), // "setProtectionDelay"
QT_MOC_LITERAL(93, 1336, 13), // "setScopeDelay"
QT_MOC_LITERAL(94, 1350, 12), // "setDcVoltage"
QT_MOC_LITERAL(95, 1363, 14), // "readCalVoltage"
QT_MOC_LITERAL(96, 1378, 14), // "setDrSynthFreq"
QT_MOC_LITERAL(97, 1393, 13), // "setDrSynthPwr"
QT_MOC_LITERAL(98, 1407, 15), // "readDrFrequency"
QT_MOC_LITERAL(99, 1423, 11), // "readDrPower"
QT_MOC_LITERAL(100, 1435, 9), // "setCwMode"
QT_MOC_LITERAL(101, 1445, 2), // "cw"
QT_MOC_LITERAL(102, 1448, 13), // "setMagnetMode"
QT_MOC_LITERAL(103, 1462, 3), // "mag"
QT_MOC_LITERAL(104, 1466, 10), // "pauseScope"
QT_MOC_LITERAL(105, 1477, 5), // "pause"
QT_MOC_LITERAL(106, 1483, 14), // "readFlowConfig"
QT_MOC_LITERAL(107, 1498, 10), // "FlowConfig"
QT_MOC_LITERAL(108, 1509, 14), // "prepareForScan"
QT_MOC_LITERAL(109, 1524, 17), // "finishPreparation"
QT_MOC_LITERAL(110, 1542, 11), // "tuneSuccess"
QT_MOC_LITERAL(111, 1554, 5), // "sleep"
QT_MOC_LITERAL(112, 1560, 1), // "b"
QT_MOC_LITERAL(113, 1562, 22), // "scopeResolutionChanged"
QT_MOC_LITERAL(114, 1585, 10), // "tuneCavity"
QT_MOC_LITERAL(115, 1596, 4), // "freq"
QT_MOC_LITERAL(116, 1601, 4), // "mode"
QT_MOC_LITERAL(117, 1606, 18), // "cavityTuneComplete"
QT_MOC_LITERAL(118, 1625, 15), // "calibrateCavity"
QT_MOC_LITERAL(119, 1641, 16), // "changeCavityMode"
QT_MOC_LITERAL(120, 1658, 5), // "above"
QT_MOC_LITERAL(121, 1664, 29), // "prepareForAttnTableGeneration"
QT_MOC_LITERAL(122, 1694, 25), // "attnTablePrepTuneComplete"
QT_MOC_LITERAL(123, 1720, 28), // "restoreSettingsAfterAttnPrep"
QT_MOC_LITERAL(124, 1749, 28), // "restoreSettingsAfterScanPrep"
QT_MOC_LITERAL(125, 1778, 12) // "scanComplete"

    },
    "HardwareManager\0scanInitialized\0\0Scan\0"
    "s\0ftmSynthUpdate\0f\0ftmSynthChangeBandFromUi\0"
    "probeFreqUpdate\0synthRangeChanged\0"
    "drSynthFreqUpdate\0drSynthPwrUpdate\0p\0"
    "drSynthChangeBandFromUi\0attenUpdate\0"
    "a\0taattenUpdate\0flowUpdate\0flowNameUpdate\0"
    "pressureUpdate\0flowSetpointUpdate\0"
    "pressureSetpointUpdate\0setFlowSetpoint\0"
    "i\0val\0setPressureSetpoint\0setGasName\0"
    "pressureControlMode\0setPressureControlMode\0"
    "scopeWaveAcquired\0mirrorPosUpdate\0pos\0"
    "updateMotorSettings\0pGenChannelSetting\0"
    "QtFTM::PulseSetting\0pGenConfigUpdate\0"
    "PulseGenConfig\0logMessage\0"
    "QtFTM::LogMessageCode\0statusMessage\0"
    "allHardwareConnected\0testComplete\0"
    "tuningComplete\0canTuneUp\0canTuneDown\0"
    "modeChanged\0tuningVoltageChanged\0"
    "attnLoadSuccess\0attnTablePrepComplete\0"
    "setFtmCavityFreqFromUI\0setAttnFromUI\0"
    "setDrSynthFreqFromUI\0setDrSynthPwrFromUI\0"
    "setPulseSetting\0ch\0x\0setRepRate\0"
    "repRateUpdate\0setProtectionDelayFromUI\0"
    "setScopeDelayFromUI\0hmProtectionDelayUpdate\0"
    "hmScopeDelayUpdate\0setDcVoltageFromUI\0"
    "dcVoltageUpdate\0failure\0setMagnetFromUI\0"
    "magnetUpdate\0retryScan\0initializeHardware\0"
    "connectionResult\0HardwareObject*\0obj\0"
    "success\0msg\0testObjectConnection\0type\0"
    "key\0hardwareFailure\0changeAttnFile\0"
    "fileName\0configurePGenForTuning\0"
    "setPulseConfig\0c\0goToFtmSynthProbeFreq\0"
    "goToFtmSynthCavityFreq\0setFtmSynthCavityFreq\0"
    "d\0readCavityTuningVoltage\0readTuneAttenuation\0"
    "setFlowChannelName\0index\0name\0"
    "setProtectionDelay\0setScopeDelay\0"
    "setDcVoltage\0readCalVoltage\0setDrSynthFreq\0"
    "setDrSynthPwr\0readDrFrequency\0readDrPower\0"
    "setCwMode\0cw\0setMagnetMode\0mag\0"
    "pauseScope\0pause\0readFlowConfig\0"
    "FlowConfig\0prepareForScan\0finishPreparation\0"
    "tuneSuccess\0sleep\0b\0scopeResolutionChanged\0"
    "tuneCavity\0freq\0mode\0cavityTuneComplete\0"
    "calibrateCavity\0changeCavityMode\0above\0"
    "prepareForAttnTableGeneration\0"
    "attnTablePrepTuneComplete\0"
    "restoreSettingsAfterAttnPrep\0"
    "restoreSettingsAfterScanPrep\0scanComplete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HardwareManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      94,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      54,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  484,    2, 0x06 /* Public */,
       5,    1,  487,    2, 0x06 /* Public */,
       7,    0,  490,    2, 0x06 /* Public */,
       8,    1,  491,    2, 0x06 /* Public */,
       9,    0,  494,    2, 0x06 /* Public */,
      10,    1,  495,    2, 0x06 /* Public */,
      11,    1,  498,    2, 0x06 /* Public */,
      13,    0,  501,    2, 0x06 /* Public */,
      14,    1,  502,    2, 0x06 /* Public */,
      16,    1,  505,    2, 0x06 /* Public */,
      17,    2,  508,    2, 0x06 /* Public */,
      18,    2,  513,    2, 0x06 /* Public */,
      19,    1,  518,    2, 0x06 /* Public */,
      20,    2,  521,    2, 0x06 /* Public */,
      21,    1,  526,    2, 0x06 /* Public */,
      22,    2,  529,    2, 0x06 /* Public */,
      25,    1,  534,    2, 0x06 /* Public */,
      26,    2,  537,    2, 0x06 /* Public */,
      27,    1,  542,    2, 0x06 /* Public */,
      28,    1,  545,    2, 0x06 /* Public */,
      29,    1,  548,    2, 0x06 /* Public */,
      30,    1,  551,    2, 0x06 /* Public */,
      32,    0,  554,    2, 0x06 /* Public */,
      33,    3,  555,    2, 0x06 /* Public */,
      35,    1,  562,    2, 0x06 /* Public */,
      37,    2,  565,    2, 0x06 /* Public */,
      37,    1,  570,    2, 0x26 /* Public | MethodCloned */,
      39,    1,  573,    2, 0x06 /* Public */,
      40,    1,  576,    2, 0x06 /* Public */,
      41,    3,  579,    2, 0x06 /* Public */,
      42,    0,  586,    2, 0x06 /* Public */,
      43,    1,  587,    2, 0x06 /* Public */,
      44,    1,  590,    2, 0x06 /* Public */,
      45,    1,  593,    2, 0x06 /* Public */,
      46,    1,  596,    2, 0x06 /* Public */,
      47,    1,  599,    2, 0x06 /* Public */,
      48,    1,  602,    2, 0x06 /* Public */,
      49,    1,  605,    2, 0x06 /* Public */,
      50,    1,  608,    2, 0x06 /* Public */,
      51,    1,  611,    2, 0x06 /* Public */,
      52,    1,  614,    2, 0x06 /* Public */,
      53,    3,  617,    2, 0x06 /* Public */,
      56,    1,  624,    2, 0x06 /* Public */,
      57,    1,  627,    2, 0x06 /* Public */,
      58,    1,  630,    2, 0x06 /* Public */,
      59,    1,  633,    2, 0x06 /* Public */,
      60,    1,  636,    2, 0x06 /* Public */,
      61,    1,  639,    2, 0x06 /* Public */,
      62,    1,  642,    2, 0x06 /* Public */,
      63,    1,  645,    2, 0x06 /* Public */,
      64,    0,  648,    2, 0x06 /* Public */,
      65,    1,  649,    2, 0x06 /* Public */,
      66,    1,  652,    2, 0x06 /* Public */,
      67,    0,  655,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      68,    0,  656,    2, 0x0a /* Public */,
      69,    3,  657,    2, 0x0a /* Public */,
      74,    2,  664,    2, 0x0a /* Public */,
      77,    0,  669,    2, 0x0a /* Public */,
      78,    1,  670,    2, 0x0a /* Public */,
      80,    0,  673,    2, 0x0a /* Public */,
      81,    1,  674,    2, 0x0a /* Public */,
      83,    0,  677,    2, 0x0a /* Public */,
      84,    0,  678,    2, 0x0a /* Public */,
      85,    1,  679,    2, 0x0a /* Public */,
      87,    0,  682,    2, 0x0a /* Public */,
      88,    0,  683,    2, 0x0a /* Public */,
      89,    2,  684,    2, 0x0a /* Public */,
      92,    1,  689,    2, 0x0a /* Public */,
      93,    1,  692,    2, 0x0a /* Public */,
      94,    1,  695,    2, 0x0a /* Public */,
      95,    0,  698,    2, 0x0a /* Public */,
      96,    1,  699,    2, 0x0a /* Public */,
      97,    1,  702,    2, 0x0a /* Public */,
      98,    0,  705,    2, 0x0a /* Public */,
      99,    0,  706,    2, 0x0a /* Public */,
     100,    1,  707,    2, 0x0a /* Public */,
     102,    1,  710,    2, 0x0a /* Public */,
     104,    1,  713,    2, 0x0a /* Public */,
     106,    0,  716,    2, 0x0a /* Public */,
     108,    1,  717,    2, 0x0a /* Public */,
     109,    1,  720,    2, 0x0a /* Public */,
     111,    1,  723,    2, 0x0a /* Public */,
     113,    0,  726,    2, 0x0a /* Public */,
     114,    2,  727,    2, 0x0a /* Public */,
     114,    1,  732,    2, 0x2a /* Public | MethodCloned */,
     117,    1,  735,    2, 0x0a /* Public */,
     118,    0,  738,    2, 0x0a /* Public */,
     119,    2,  739,    2, 0x0a /* Public */,
     121,    1,  744,    2, 0x0a /* Public */,
     121,    0,  747,    2, 0x2a /* Public | MethodCloned */,
     122,    1,  748,    2, 0x0a /* Public */,
     123,    1,  751,    2, 0x0a /* Public */,
     124,    0,  754,    2, 0x0a /* Public */,
     125,    1,  755,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,   23,   24,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 34, QMetaType::QVariant,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 36,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 38,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 34, QMetaType::QVariant,   54,    4,   55,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 70, QMetaType::Bool, QMetaType::QString,   71,   72,   73,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   75,   76,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   79,
    0x80000000 | 36,
    0x80000000 | 36, 0x80000000 | 36,   82,
    QMetaType::Double,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Double,   86,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   90,   91,
    QMetaType::Int, QMetaType::Int,   15,
    QMetaType::Int, QMetaType::Int,   15,
    QMetaType::Int, QMetaType::Int,   15,
    QMetaType::Int,
    QMetaType::Double, QMetaType::Double,    6,
    QMetaType::Double, QMetaType::Double,   12,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Int, QMetaType::Bool,  101,
    QMetaType::Int, QMetaType::Bool,  103,
    QMetaType::Void, QMetaType::Bool,  105,
    0x80000000 | 107,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void, QMetaType::Bool,  112,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,  115,  116,
    QMetaType::Void, QMetaType::Double,  115,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,  115,  120,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Void, QMetaType::Bool,   72,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void HardwareManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HardwareManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scanInitialized((*reinterpret_cast< Scan(*)>(_a[1]))); break;
        case 1: _t->ftmSynthUpdate((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 2: _t->ftmSynthChangeBandFromUi(); break;
        case 3: _t->probeFreqUpdate((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 4: _t->synthRangeChanged(); break;
        case 5: _t->drSynthFreqUpdate((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 6: _t->drSynthPwrUpdate((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 7: _t->drSynthChangeBandFromUi(); break;
        case 8: _t->attenUpdate((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 9: _t->taattenUpdate((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 10: _t->flowUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 11: _t->flowNameUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->pressureUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->flowSetpointUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 14: _t->pressureSetpointUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->setFlowSetpoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 16: _t->setPressureSetpoint((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->setGasName((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 18: _t->pressureControlMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->setPressureControlMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->scopeWaveAcquired((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 21: _t->mirrorPosUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->updateMotorSettings(); break;
        case 23: _t->pGenChannelSetting((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QtFTM::PulseSetting(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 24: _t->pGenConfigUpdate((*reinterpret_cast< const PulseGenConfig(*)>(_a[1]))); break;
        case 25: _t->logMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QtFTM::LogMessageCode(*)>(_a[2]))); break;
        case 26: _t->logMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->statusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->allHardwareConnected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->testComplete((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 30: _t->tuningComplete(); break;
        case 31: _t->canTuneUp((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->canTuneDown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->modeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->tuningVoltageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->attnLoadSuccess((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->attnTablePrepComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->setFtmCavityFreqFromUI((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 38: _t->setAttnFromUI((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->setDrSynthFreqFromUI((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 40: _t->setDrSynthPwrFromUI((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 41: _t->setPulseSetting((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QtFTM::PulseSetting(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 42: _t->setRepRate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 43: _t->repRateUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 44: _t->setProtectionDelayFromUI((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->setScopeDelayFromUI((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->hmProtectionDelayUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->hmScopeDelayUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->setDcVoltageFromUI((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->dcVoltageUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->failure(); break;
        case 51: _t->setMagnetFromUI((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->magnetUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->retryScan(); break;
        case 54: _t->initializeHardware(); break;
        case 55: _t->connectionResult((*reinterpret_cast< HardwareObject*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 56: _t->testObjectConnection((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 57: _t->hardwareFailure(); break;
        case 58: _t->changeAttnFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 59: { PulseGenConfig _r = _t->configurePGenForTuning();
            if (_a[0]) *reinterpret_cast< PulseGenConfig*>(_a[0]) = std::move(_r); }  break;
        case 60: { PulseGenConfig _r = _t->setPulseConfig((*reinterpret_cast< const PulseGenConfig(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< PulseGenConfig*>(_a[0]) = std::move(_r); }  break;
        case 61: { double _r = _t->goToFtmSynthProbeFreq();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 62: { bool _r = _t->goToFtmSynthCavityFreq();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 63: { bool _r = _t->setFtmSynthCavityFreq((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 64: { int _r = _t->readCavityTuningVoltage();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 65: { int _r = _t->readTuneAttenuation();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 66: _t->setFlowChannelName((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 67: { int _r = _t->setProtectionDelay((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 68: { int _r = _t->setScopeDelay((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 69: { int _r = _t->setDcVoltage((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 70: { int _r = _t->readCalVoltage();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 71: { double _r = _t->setDrSynthFreq((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 72: { double _r = _t->setDrSynthPwr((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 73: { double _r = _t->readDrFrequency();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 74: { double _r = _t->readDrPower();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 75: { int _r = _t->setCwMode((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 76: { int _r = _t->setMagnetMode((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 77: _t->pauseScope((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 78: { FlowConfig _r = _t->readFlowConfig();
            if (_a[0]) *reinterpret_cast< FlowConfig*>(_a[0]) = std::move(_r); }  break;
        case 79: _t->prepareForScan((*reinterpret_cast< Scan(*)>(_a[1]))); break;
        case 80: _t->finishPreparation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 81: _t->sleep((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 82: _t->scopeResolutionChanged(); break;
        case 83: _t->tuneCavity((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 84: _t->tuneCavity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 85: _t->cavityTuneComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 86: _t->calibrateCavity(); break;
        case 87: _t->changeCavityMode((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 88: _t->prepareForAttnTableGeneration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 89: _t->prepareForAttnTableGeneration(); break;
        case 90: _t->attnTablePrepTuneComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 91: _t->restoreSettingsAfterAttnPrep((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 92: _t->restoreSettingsAfterScanPrep(); break;
        case 93: _t->scanComplete((*reinterpret_cast< const Scan(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtFTM::LogMessageCode >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HardwareObject* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HardwareManager::*)(Scan );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::scanInitialized)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(const double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::ftmSynthUpdate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::ftmSynthChangeBandFromUi)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(const double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::probeFreqUpdate)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::synthRangeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(const double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::drSynthFreqUpdate)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(const double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::drSynthPwrUpdate)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::drSynthChangeBandFromUi)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::attenUpdate)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::taattenUpdate)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::flowUpdate)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::flowNameUpdate)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::pressureUpdate)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::flowSetpointUpdate)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::pressureSetpointUpdate)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::setFlowSetpoint)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::setPressureSetpoint)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::setGasName)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::pressureControlMode)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::setPressureControlMode)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(const QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::scopeWaveAcquired)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::mirrorPosUpdate)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::updateMotorSettings)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(int , QtFTM::PulseSetting , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::pGenChannelSetting)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(const PulseGenConfig );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::pGenConfigUpdate)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(const QString , const QtFTM::LogMessageCode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::logMessage)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::statusMessage)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::allHardwareConnected)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(QString , bool , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::testComplete)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::tuningComplete)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::canTuneUp)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::canTuneDown)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::modeChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::tuningVoltageChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::attnLoadSuccess)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::attnTablePrepComplete)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::setFtmCavityFreqFromUI)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::setAttnFromUI)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::setDrSynthFreqFromUI)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::setDrSynthPwrFromUI)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(const int , const QtFTM::PulseSetting , const QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::setPulseSetting)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::setRepRate)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::repRateUpdate)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::setProtectionDelayFromUI)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::setScopeDelayFromUI)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::hmProtectionDelayUpdate)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::hmScopeDelayUpdate)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::setDcVoltageFromUI)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::dcVoltageUpdate)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::failure)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::setMagnetFromUI)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::magnetUpdate)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (HardwareManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HardwareManager::retryScan)) {
                *result = 53;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HardwareManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_HardwareManager.data,
    qt_meta_data_HardwareManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HardwareManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HardwareManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HardwareManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HardwareManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 94)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 94;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 94)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 94;
    }
    return _id;
}

// SIGNAL 0
void HardwareManager::scanInitialized(Scan _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HardwareManager::ftmSynthUpdate(const double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HardwareManager::ftmSynthChangeBandFromUi()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void HardwareManager::probeFreqUpdate(const double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HardwareManager::synthRangeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void HardwareManager::drSynthFreqUpdate(const double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void HardwareManager::drSynthPwrUpdate(const double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void HardwareManager::drSynthChangeBandFromUi()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void HardwareManager::attenUpdate(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void HardwareManager::taattenUpdate(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void HardwareManager::flowUpdate(int _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void HardwareManager::flowNameUpdate(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void HardwareManager::pressureUpdate(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void HardwareManager::flowSetpointUpdate(int _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void HardwareManager::pressureSetpointUpdate(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void HardwareManager::setFlowSetpoint(int _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void HardwareManager::setPressureSetpoint(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void HardwareManager::setGasName(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void HardwareManager::pressureControlMode(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void HardwareManager::setPressureControlMode(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void HardwareManager::scopeWaveAcquired(const QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void HardwareManager::mirrorPosUpdate(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void HardwareManager::updateMotorSettings()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void HardwareManager::pGenChannelSetting(int _t1, QtFTM::PulseSetting _t2, QVariant _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void HardwareManager::pGenConfigUpdate(const PulseGenConfig _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void HardwareManager::logMessage(const QString _t1, const QtFTM::LogMessageCode _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 27
void HardwareManager::statusMessage(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void HardwareManager::allHardwareConnected(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void HardwareManager::testComplete(QString _t1, bool _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void HardwareManager::tuningComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void HardwareManager::canTuneUp(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void HardwareManager::canTuneDown(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void HardwareManager::modeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void HardwareManager::tuningVoltageChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void HardwareManager::attnLoadSuccess(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void HardwareManager::attnTablePrepComplete(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void HardwareManager::setFtmCavityFreqFromUI(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void HardwareManager::setAttnFromUI(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void HardwareManager::setDrSynthFreqFromUI(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void HardwareManager::setDrSynthPwrFromUI(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void HardwareManager::setPulseSetting(const int _t1, const QtFTM::PulseSetting _t2, const QVariant _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void HardwareManager::setRepRate(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void HardwareManager::repRateUpdate(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void HardwareManager::setProtectionDelayFromUI(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void HardwareManager::setScopeDelayFromUI(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void HardwareManager::hmProtectionDelayUpdate(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void HardwareManager::hmScopeDelayUpdate(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void HardwareManager::setDcVoltageFromUI(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void HardwareManager::dcVoltageUpdate(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void HardwareManager::failure()
{
    QMetaObject::activate(this, &staticMetaObject, 50, nullptr);
}

// SIGNAL 51
void HardwareManager::setMagnetFromUI(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void HardwareManager::magnetUpdate(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void HardwareManager::retryScan()
{
    QMetaObject::activate(this, &staticMetaObject, 53, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
