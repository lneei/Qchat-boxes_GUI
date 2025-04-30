QT       += core gui
QT       += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    $$PWD/cell_main.cpp \
    $$PWD/dlg_set.cpp \
    $$PWD/main.cpp

HEADERS += \
    $$PWD/cell_main.h \
    $$PWD/dlg_set.h

FORMS += \
    $$PWD/cell_main.ui \
    $$PWD/dlg_set.ui

RESOURCES += \
    $$PWD/res.qrc


