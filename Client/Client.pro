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
    net.cpp

HEADERS += \
    ui.h \
    excepEvents.h \
    statics.h \
    workFlow.h \
    storageMgr.h \
    dataIO.h \
    net.h
