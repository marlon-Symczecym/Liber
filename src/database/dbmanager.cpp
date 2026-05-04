#include "dbmanager.h"

DBManager::DBManager(QObject *parent)
    : QObject{parent}
{}

bool DBManager::connect()
{
    QSettings settings(configPath, QSettings::IniFormat);

    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName(settings.value("Database/Host").toString());
    db.setDatabaseName(settings.value("Database/Name").toString());
    db.setUserName(settings.value("Database/User").toString());
    db.setPassword(settings.value("Database/Pass").toString());
    db.setPort(settings.value("Database/Port").toInt());

    if (!db.open()) {
        qDebug() << "ERRO: banco de dados não conectado";
        return false;
    }

    qDebug() << "SUCCESS: banco de dados conectado";
    return true;
}
