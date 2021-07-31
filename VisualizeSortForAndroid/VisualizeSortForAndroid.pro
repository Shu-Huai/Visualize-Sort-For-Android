QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ElemList.cpp \
    Main.cpp \
    SleepThread.cpp \
    Sort.cpp \
    VisualizeSort.cpp

HEADERS += \
    ElemList.h \
    SleepThread.h \
    Sort.h \
    VisualizeSort.h

FORMS += \
    VisualizeSort.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Visualize_Sort.qrc

DISTFILES += \
    AndroidManifest.xml \
    Visualize Sort Icon.png \
    qt_zh_CN.qm
ANDROID_PACKAGE_SOURCE_DIR = $$PWD/
