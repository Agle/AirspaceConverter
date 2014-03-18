#-------------------------------------------------
#
# Project created by QtCreator 2014-03-18T12:52:57
#
#-------------------------------------------------

QT       -= gui

TARGET = AirspaceConverter
TEMPLATE = lib

DEFINES += AIRSPACECONVERTER_LIBRARY

SOURCES += airspace_converter.cpp

HEADERS += airspace_converter.h\
        airspaceconverter_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
