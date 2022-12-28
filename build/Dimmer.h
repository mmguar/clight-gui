/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -m -i /home/matteo/local/clight-gui/src/class/DBusTypes.h -p Dimmer /home/matteo/local/clight-gui/src/dbus/clight/Dimmer.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DIMMER_H
#define DIMMER_H

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
 * Proxy class for interface org.clight.clight.Conf.Dimmer
 */
class OrgClightClightConfDimmerInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.clight.clight.Conf.Dimmer"; }

public:
    OrgClightClightConfDimmerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgClightClightConfDimmerInterface();

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

    Q_PROPERTY(double DimmedPct READ dimmedPct WRITE setDimmedPct)
    inline double dimmedPct() const
    { return qvariant_cast< double >(property("DimmedPct")); }
    inline void setDimmedPct(double value)
    { setProperty("DimmedPct", QVariant::fromValue(value)); }

    Q_PROPERTY(bool NoSmoothEnter READ noSmoothEnter WRITE setNoSmoothEnter)
    inline bool noSmoothEnter() const
    { return qvariant_cast< bool >(property("NoSmoothEnter")); }
    inline void setNoSmoothEnter(bool value)
    { setProperty("NoSmoothEnter", QVariant::fromValue(value)); }

    Q_PROPERTY(bool NoSmoothExit READ noSmoothExit WRITE setNoSmoothExit)
    inline bool noSmoothExit() const
    { return qvariant_cast< bool >(property("NoSmoothExit")); }
    inline void setNoSmoothExit(bool value)
    { setProperty("NoSmoothExit", QVariant::fromValue(value)); }

    Q_PROPERTY(int TransDurationEnter READ transDurationEnter WRITE setTransDurationEnter)
    inline int transDurationEnter() const
    { return qvariant_cast< int >(property("TransDurationEnter")); }
    inline void setTransDurationEnter(int value)
    { setProperty("TransDurationEnter", QVariant::fromValue(value)); }

    Q_PROPERTY(int TransDurationExit READ transDurationExit WRITE setTransDurationExit)
    inline int transDurationExit() const
    { return qvariant_cast< int >(property("TransDurationExit")); }
    inline void setTransDurationExit(int value)
    { setProperty("TransDurationExit", QVariant::fromValue(value)); }

    Q_PROPERTY(int TransFixedEnter READ transFixedEnter WRITE setTransFixedEnter)
    inline int transFixedEnter() const
    { return qvariant_cast< int >(property("TransFixedEnter")); }
    inline void setTransFixedEnter(int value)
    { setProperty("TransFixedEnter", QVariant::fromValue(value)); }

    Q_PROPERTY(int TransFixedExit READ transFixedExit WRITE setTransFixedExit)
    inline int transFixedExit() const
    { return qvariant_cast< int >(property("TransFixedExit")); }
    inline void setTransFixedExit(int value)
    { setProperty("TransFixedExit", QVariant::fromValue(value)); }

    Q_PROPERTY(double TransStepEnter READ transStepEnter WRITE setTransStepEnter)
    inline double transStepEnter() const
    { return qvariant_cast< double >(property("TransStepEnter")); }
    inline void setTransStepEnter(double value)
    { setProperty("TransStepEnter", QVariant::fromValue(value)); }

    Q_PROPERTY(double TransStepExit READ transStepExit WRITE setTransStepExit)
    inline double transStepExit() const
    { return qvariant_cast< double >(property("TransStepExit")); }
    inline void setTransStepExit(double value)
    { setProperty("TransStepExit", QVariant::fromValue(value)); }

public Q_SLOTS: // METHODS
Q_SIGNALS: // SIGNALS
};

#endif
