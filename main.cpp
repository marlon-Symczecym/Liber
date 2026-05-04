#include "dbmanager.h"
#include "mainwindow.h"

#include <QApplication>
#include <QDebug>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DBManager db;
    if (!db.connect()) {
        return -1;
    }

    MainWindow w;
    w.show();
    return QCoreApplication::exec();
}
