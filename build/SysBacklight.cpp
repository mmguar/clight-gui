/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -m -i /home/matteo/local/clight-gui/src/class/DBusTypes.h -p SysBacklight /home/matteo/local/clight-gui/src/dbus/clightd/Backlight.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "SysBacklight.h"

/*
 * Implementation of interface class OrgClightdClightdBacklightInterface
 */

OrgClightdClightdBacklightInterface::OrgClightdClightdBacklightInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

OrgClightdClightdBacklightInterface::~OrgClightdClightdBacklightInterface()
{
}


#include "SysBacklight.moc"
