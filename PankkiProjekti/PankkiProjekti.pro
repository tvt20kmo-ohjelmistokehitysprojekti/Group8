QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    muusumma.cpp \
    nosta.cpp \
    nostoonnistui.cpp \
    saldo.cpp \
    tilitapahtumat.cpp \
    valikko.cpp

HEADERS += \
    mainwindow.h \
    muusumma.h \
    nosta.h \
    nostoonnistui.h \
    saldo.h \
    tilitapahtumat.h \
    valikko.h

FORMS += \
    mainwindow.ui \
    muusumma.ui \
    nosta.ui \
    nostoonnistui.ui \
    saldo.ui \
    tilitapahtumat.ui \
    valikko.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
