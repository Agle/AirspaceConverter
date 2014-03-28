#-------------------------------------------------
#
# Project created by QtCreator 2014-03-18T12:45:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ConverterGui
TEMPLATE = app


SOURCES += main.cpp \
    main_window.cpp \
    Gui/airspace_converter_interface.cpp \
    FileChooser/file_chooser.cpp

HEADERS  += \
    main_window.h \
    Gui/airspace_converter_interface.h \
    FileChooser/file_chooser.h

FORMS +=
