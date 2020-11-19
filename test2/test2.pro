TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

DESTDIR = $$PWD/testdir
#INCLUDEPATH += /home/robot/workspace/libHK

LIBS += -L$$PWD/libs -llibHK
