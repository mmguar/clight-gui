/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -m -i /home/matteo/local/clight-gui/src/class/DBusTypes.h -p Inhibit /home/matteo/local/clight-gui/src/dbus/clight/Inhibit.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef INHIBIT_H
#define INHIBIT_H

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
 * Proxy class for interface org.clight.clight.Conf.Inhibit
 */
class OrgClightClightConfInhibitInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.clight.clight.Conf.Inhibit"; }

public:
    OrgClightClightConfInhibitInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgClightClightConfInhibitInterface();

    Q_PROPERTY(bool InhibitDocked READ inhibitDocked WRITE setInhibitDocked)
    inline bool inhibitDocked() const
    { return qvariant_cast< bool >(property("InhibitDocked")); }
    inline void setInhibitDocked(bool value)
    { setProperty("InhibitDocked", QVariant::fromValue(value)); }

    Q_PROPERTY(bool InhibitPM READ inhibitPM WRITE setInhibitPM)
    inline bool inhibitPM() const
    { return qvariant_cast< bool >(property("InhibitPM")); }
    inline void setInhibitPM(bool value)
    { setProperty("InhibitPM", QVariant::fromValue(value)); }

public Q_SLOTS: // METHODS
Q_SIGNALS: // SIGNALS
};

#endif
