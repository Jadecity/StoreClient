#-------------------------------------------------
#
# Project created by QtCreator 2011-10-08T09:32:51
#
#-------------------------------------------------

QT       += core
QT       += network
QT       -= gui

TARGET = Client
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    net.cpp \
    testnetconnector.cpp \
    dataIO.cpp \
    testdatatrans.cpp \
    storageMgr.cpp \
    teststoragemgr.cpp \
    excepEvents.cpp \
    testuecepmgr.cpp \
    testdiary.cpp

HEADERS += \
    ui.h \
    excepEvents.h \
    statics.h \
    workFlow.h \
    storageMgr.h \
    dataIO.h \
    net.h \
    testnetconnector.h \
    testdatatrans.h \
    upcntrbase.h \
    cmddef.h \
    teststoragemgr.h \
    globalDataType.h \
    testuecepmgr.h \
    testdiary.h
