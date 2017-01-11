#-------------------------------------------------
#
# Project created by QtCreator 2016-12-23T13:54:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = easy_converter
TEMPLATE = app


SOURCES += main.cpp\
        mainframe.cpp \
    standard_libraw_decoder.cpp \
    factories.cpp

HEADERS  += mainframe.h \
    generic_raw_decoder.h \
    factories.h \
    standard_libraw_decoder.h

FORMS    += mainframe.ui

#TODO insert directly in the project ?
win32:CONFIG(release, debug|release): LIBS += /usr/local/lib/release/ -lraw
else:win32:CONFIG(debug, debug|release): LIBS += /usr/local/lib/debug/ -lraw
else:unix: LIBS += -L$$PWD/../../../../usr/local/lib/ -lraw

INCLUDEPATH += /usr/local/include
DEPENDPATH += /usr/local/include

QMAKE_CXXFLAGS += -std=c++11

DISTFILES += \
    LICENSE \
    licence_template

unix: CONFIG += link_pkgconfig
unix: PKGCONFIG += opencv
