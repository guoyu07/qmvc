QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qmvc
TEMPLATE = app


SOURCES += main.cpp \
    control/app.cpp \
    control/counter.cpp \
    model/count.cpp \
    view/mainwindow.cpp

HEADERS  += \
    control/app.h \
    control/counter.h \
    model/count.h \
    view/mainwindow.h

FORMS    +=

