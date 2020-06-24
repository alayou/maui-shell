#include "enviroment.h"
#include <KDesktopFile>
#include <QDebug>

Enviroment::Enviroment(QObject *parent) : QObject(parent)
{

}

void Enviroment::putenv(QString key, QString value)
{

}

void Enviroment::setIsMobile(const bool &value)
{
    qputenv("QT_QUICK_CONTROLS_MOBILE", value ? "1" : "0");
}

QString Enviroment::appIconName(const QString &appId)
{
    KDesktopFile file(appId+".desktop");
    qDebug() << "AppIcon name" << file.readIcon() << appId << file.fileName() ;
    return file.readIcon();
}
