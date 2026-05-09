#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QDebug>
#include <QObject>
#include <QSettings>
#include <QtCore>
#include <QtSql>

class DBManager : public QObject
{
    Q_OBJECT
public:
    explicit DBManager(QObject *parent = nullptr);
    bool connect();
    void disconnect();

private:
    const QString configPath = "/home/marlon-dev/Desktop/Liber/config.ini";
};

#endif // DBMANAGER_H
