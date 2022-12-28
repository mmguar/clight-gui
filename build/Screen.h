/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -m -i /home/matteo/local/clight-gui/src/class/DBusTypes.h -p Screen /home/matteo/local/clight-gui/src/dbus/clight/Screen.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef SCREEN_H
#define SCREEN_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "/home/matteo/local/clight-gui/src/class/DBusTypes.h"

/*
 * Proxy class for interface org.clight.clight.Conf.Screen
 */
class OrgClightClightConfScreenInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.clight.clight.Conf.Screen"; }

public:
    OrgClightClightConfScreenInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgClightClightConfScreenInterface();

    Q_PROPERTY(int AcTimeout READ acTimeout WRITE setAcTimeout)
    inline int acTimeout() const
    { return qvariant_cast< int >(property("AcTimeout")); }
    inline void setAcTimeout(int value)
    { setProperty("AcTimeout", QVariant::fromValue(value)); }

    Q_PROPERTY(int BattTimeout READ battTimeout WRITE setBattTimeout)
    inline int battTimeout() const
    { return qvariant_cast< int >(property("BattTimeout")); }
    inline void setBattTimeout(int value)
    { setProperty("BattTimeout", QVariant::fromValue(value)); }

    Q_PROPERTY(double Contrib READ contrib WRITE setContrib)
    inline double contrib() const
    { return qvariant_cast< double >(property("Contrib")); }
    inline void setContrib(double value)
    { setProperty("Contrib", QVariant::fromValue(value)); }

    Q_PROPERTY(int NumSamples READ numSamples)
    inline int numSamples() const
    { return qvariant_cast< int >(property("NumSamples")); }

public Q_SLOTS: // METHODS
Q_SIGNALS: // SIGNALS
};

#endif
