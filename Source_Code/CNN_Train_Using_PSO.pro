#================================================================================
# Filename: CNN_Train_Using_PSO.pro
# Author: Dmitry Safonov (juvusoft@gmail.com)
# Description: Project for testing the ability of particle swarm optimization 
# algorithm (PSO) to train a convolutional neural network (CNN) for solving 
# MNIST digits recognition problem.
# Version: 0.1
# Date: 09.01.2023
#================================================================================

QT += core gui widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = Program
TEMPLATE = app

SOURCES += \
    ./src/main.cpp \
    ./src/main_window.cpp

HEADERS += \
    ./include/utils.h \
    ./include/main_window.h

FORMS = \
    ./ui/MainWindow.ui

RESOURCES += \
    ./resources/resources.qrc

INCLUDEPATH += $$PWD/include

CONFIG(release, debug|release) {
    DESTDIR = ./build/release
    OBJECTS_DIR = ./build/release/obj
    MOC_DIR = ./build/release/moc
    RCC_DIR = ./build/release/rcc
    UI_DIR = ./build/release/ui
}

CONFIG(debug, debug|release) {
    DESTDIR = ./build/debug
    OBJECTS_DIR = ./build/debug/obj
    MOC_DIR = ./build/debug/moc
    RCC_DIR = ./build/debug/rcc
    UI_DIR = ./build/debug/ui
}

DISTFILES +=
