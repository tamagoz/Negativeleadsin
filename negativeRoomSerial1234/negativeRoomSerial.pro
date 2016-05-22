
#-------------------------------------------------
#
# Project created by QtCreator 2015-12-13T02:10:35
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = negativeRoomSerial
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    settingpage.cpp

HEADERS  += mainwindow.h \
    settingpage.h

FORMS    += mainwindow.ui \
    settingpage.ui

RESOURCES += \
    resource.qrc
