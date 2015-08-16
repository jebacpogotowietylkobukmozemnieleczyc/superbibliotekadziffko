TEMPLATE = lib
HEADERS += widget.h \
    Interval.h \
    IntervalArithmetic.h \
    ErrorCode.h \
    Number.h
SOURCES += widget.cpp \
    IntervalArithmetic.cpp \
    Interval.cpp
DEFINES += TEST


CONFIG += c++11


LIBS += -lmpfr -lgmp
