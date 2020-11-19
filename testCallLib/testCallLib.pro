TEMPLATE = app
QT       -= gui
TEMPLATE = app
SOURCES += \
        main.cpp

HEADERS += \
    libhk.h \
    libhk_global.h
DESTDIR = $$PWD/testdir
LIBS += -L$$PWD/libs -llibHK
