#-------------------------------------------------
#
# Project created by QtCreator 2016-01-18T15:42:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestMyGauge
TEMPLATE = app


SOURCES += main.cpp\
        gauge.cpp \
    qcgaugewidget.cpp \
    goigauge.cpp

HEADERS  += gauge.h \
    qcgaugewidget.h \
    goigauge.h

CONFIG += mobility
MOBILITY = 

