#include "mainwindow.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    qDebug() << "Application started";
    QApplication a(argc, argv);
    qDebug() << "QApplication created";
    MainWindow w;
    qDebug() << "MainWindow created";
    w.show();
    qDebug() << "MainWindow shown";
    return a.exec();
}