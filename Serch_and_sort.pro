TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    binary_search_iterative.cpp \
    linear_search.cpp \
    binary_search_recursive.cpp

HEADERS += \
    binary_search_iterative.h \
    linear_search.h \
    binary_search_recursive.h
