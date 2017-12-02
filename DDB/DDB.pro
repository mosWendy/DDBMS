QT += core
QT += gui
QT += widgets

CONFIG += c++11

TARGET = DDB
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

LIBS += -L /usr/local/lib/ -lconfig++

SOURCES += main.cpp \
    MetadataManager/attribution.cpp \
    MetadataManager/metadatamanager.cpp \
    MetadataManager/tablemetadata.cpp \
    MysqlConnector/mysqlconnector.cpp \
    MetadataManager/siteinfo.cpp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += \
    MetadataManager/attribution.h \
    MetadataManager/metadatamanager.h \
    MetadataManager/tableMetadata.h \
    MysqlConnector/mysqlconnector.h \
    global.h \
    MetadataManager/siteinfo.h
