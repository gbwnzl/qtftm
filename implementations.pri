HEADERS += \
    $$PWD/dpo3012.h \
    $$PWD/prologixgpiblan.h \
    $$PWD/aeroflexattn.h \
    $$PWD/pindelaygeneratorpa.h \
    $$PWD/antonuccimotordriver.h \
    $$PWD/mks647c.h \
    $$PWD/hp8340ftm.h \
    $$PWD/hp8340dr.h \
    $$PWD/hp8673ftm.h \
    $$PWD/hp8673dr.h \
    $$PWD/qc9518.h \
    $$PWD/virtualioboard.h \
    $$PWD/virtualscope.h \
    $$PWD/virtualgpibcontroller.h \
    $$PWD/virtualattenuator.h \
    $$PWD/virtualpindelaygenerator.h \
    $$PWD/virtualftmsynth.h \
    $$PWD/virtualdrsynth.h \
    $$PWD/virtualpulsegenerator.h \
    $$PWD/virtualmotordriver.h \
    $$PWD/virtualflowcontroller.h \
    $$PWD/virtualhvps.h \
    $$PWD/glassmanfj02r60.h \
    $$PWD/n5183dr.h \
    $$PWD/n5183ftm.h \
    $$PWD/qc9528.h

SOURCES += \
    $$PWD/dpo3012.cpp \
    $$PWD/prologixgpiblan.cpp \
    $$PWD/aeroflexattn.cpp \
    $$PWD/pindelaygeneratorpa.cpp \
    $$PWD/antonuccimotordriver.cpp \
    $$PWD/mks647c.cpp \
    $$PWD/hp8340ftm.cpp \
    $$PWD/hp8340dr.cpp \
    $$PWD/hp8673ftm.cpp \
    $$PWD/hp8673dr.cpp \
    $$PWD/qc9518.cpp \
    $$PWD/virtualioboard.cpp \
    $$PWD/virtualscope.cpp \
    $$PWD/virtualgpibcontroller.cpp \
    $$PWD/virtualattenuator.cpp \
    $$PWD/virtualpindelaygenerator.cpp \
    $$PWD/virtualftmsynth.cpp \
    $$PWD/virtualdrsynth.cpp \
    $$PWD/virtualpulsegenerator.cpp \
    $$PWD/virtualmotordriver.cpp \
    $$PWD/virtualflowcontroller.cpp \
    $$PWD/virtualhvps.cpp \
    $$PWD/glassmanfj02r60.cpp \
    $$PWD/n5183dr.cpp \
    $$PWD/n5183ftm.cpp \
    $$PWD/qc9528.cpp

equals(IOB, 1) {
HEADERS += labjacku3.h \
    u3.h

SOURCES += labjacku3.cpp \
    u3.cpp

LIBS += -llabjackusb
}
